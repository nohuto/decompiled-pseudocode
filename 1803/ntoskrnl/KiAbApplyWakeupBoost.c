/*
 * XREFs of KiAbApplyWakeupBoost @ 0x1400646D8
 * Callers:
 *     ExpWakePushLock @ 0x140063B20 (ExpWakePushLock.c)
 *     ExpReleaseFastMutexContended @ 0x140064400 (ExpReleaseFastMutexContended.c)
 *     KeSetEventBoostPriorityEx @ 0x14007BCF4 (KeSetEventBoostPriorityEx.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x140060730 (KiEndThreadCycleAccumulation.c)
 *     KiSetPriorityFloor @ 0x140064D80 (KiSetPriorityFloor.c)
 *     KiRequestSoftwareInterrupt @ 0x14007C130 (KiRequestSoftwareInterrupt.c)
 *     KiReadyDeferredReadyList @ 0x1400EAA70 (KiReadyDeferredReadyList.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400F8A70 (KiDeliverApc.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiSwapContext @ 0x1401B1B40 (KiSwapContext.c)
 *     EtwTraceAutoBoostSetFloor @ 0x1402AE8DC (EtwTraceAutoBoostSetFloor.c)
 */

void __fastcall KiAbApplyWakeupBoost(char a1, __int64 a2, int a3)
{
  int v3; // r15d
  __int16 v5; // ax
  char v6; // r14
  ULONG_PTR v7; // rsi
  unsigned __int8 CurrentIrql; // bp
  char v9; // di
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v11; // rdx
  __int64 CurrentThread; // rdi
  bool v13; // zf
  __int64 v14; // rdx
  struct _KPRCB *v15; // rsi
  _KTHREAD *NextThread; // rsi
  __int64 v17; // r8
  int v18; // [rsp+88h] [rbp+10h] BYREF
  __int64 v19; // [rsp+98h] [rbp+20h] BYREF

  v3 = a3;
  if ( (*(_BYTE *)(a2 + 27) & 1) == 0 || *(_QWORD *)(a2 + 64) )
  {
    v5 = *(unsigned __int8 *)(a2 + 24);
    v19 = 0LL;
    v6 = 32;
    v7 = a2 - (unsigned __int16)(16 * v5);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v9 = a1;
    if ( a1 > 15 )
      v9 = 15;
    if ( *(char *)(v7 + 563) < v9 && ((1 << (v9 - 1)) & 0x7FFF & *(_WORD *)(a2 + 88)) == 0 )
    {
      v6 = *(_BYTE *)(v7 + 195);
      KiSetPriorityFloor(v7);
      a3 = 0x7FFF;
      *(_WORD *)(a2 + 88) ^= (*(_WORD *)(a2 + 88) ^ (*(_WORD *)(a2 + 88) & 0x7FFF | (1 << (v9 - 1)))) & 0x7FFF;
    }
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 && v6 != 32 )
    {
      LOBYTE(a3) = v9;
      EtwTraceAutoBoostSetFloor(v7, *(_QWORD *)(a2 + 32) & 0xFFFFFFFC, a3, 0, 0, v6, 0, 0, 1, 0);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    KiReadyDeferredReadyList(CurrentPrcb, &v19);
    if ( !v3 )
    {
      if ( CurrentIrql >= 2u )
      {
        if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
        {
          LOBYTE(v11) = 2;
          KiRequestSoftwareInterrupt(CurrentPrcb, v11);
        }
      }
      else
      {
        CurrentThread = (__int64)CurrentPrcb->CurrentThread;
        if ( CurrentPrcb->NextThread )
        {
          KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
          v15 = KeGetCurrentPrcb();
          v18 = 0;
          while ( 1 )
          {
            LOBYTE(v14) = 1;
            KiSetVpThreadSpinLockCount(v15, v14);
            if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
              break;
            KiSetVpThreadSpinLockCount(v15, 0LL);
            do
              KeYieldProcessorEx(&v18);
            while ( CurrentPrcb->PrcbLock );
          }
          NextThread = CurrentPrcb->NextThread;
          CurrentPrcb->NextThread = 0LL;
          _disable();
          KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
          _enable();
          CurrentPrcb->CurrentThread = NextThread;
          if ( NextThread->WaitBlockFill6[68] == 1 )
            NextThread->ReadyTime = NextThread->ReadyTime
                                  - NextThread->WaitBlock[2].SpareLong
                                  + MEMORY[0xFFFFF78000000320];
          NextThread->WaitBlockFill6[68] = 2;
          *(_BYTE *)(CurrentThread + 643) = 32;
          *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
          KiQueueReadyThread(CurrentPrcb, CurrentThread);
          LOBYTE(v17) = CurrentIrql;
          v13 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v17) == 0;
        }
        else
        {
          v13 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
        }
        if ( !v13 )
        {
          __writecr8(1uLL);
          *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
          KiDeliverApc(0LL, 0LL, 0LL);
        }
        __writecr8(CurrentIrql);
      }
    }
  }
}
