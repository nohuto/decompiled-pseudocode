/*
 * XREFs of KiAbApplyWakeupBoost @ 0x140112AD4
 * Callers:
 *     KeSetEventBoostPriorityEx @ 0x140111AC4 (KeSetEventBoostPriorityEx.c)
 *     ExpWakePushLock @ 0x140112720 (ExpWakePushLock.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x1400233A0 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400ECA80 (KiDeliverApc.c)
 *     KiReadyDeferredReadyList @ 0x140112D18 (KiReadyDeferredReadyList.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     KiSetPriorityFloor @ 0x14011F26C (KiSetPriorityFloor.c)
 *     KiSwapContext @ 0x140188470 (KiSwapContext.c)
 *     EtwTraceAutoBoostSetFloor @ 0x140253300 (EtwTraceAutoBoostSetFloor.c)
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
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 CurrentThread; // rdi
  bool v14; // zf
  _KTHREAD *NextThread; // rsi
  __int64 v16; // r8
  int v17; // [rsp+88h] [rbp+10h] BYREF
  __int64 v18; // [rsp+98h] [rbp+20h] BYREF

  v3 = a3;
  if ( (*(_BYTE *)(a2 + 27) & 1) == 0 || *(_QWORD *)(a2 + 64) )
  {
    v5 = *(unsigned __int8 *)(a2 + 24);
    v18 = 0LL;
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
    if ( v3 )
    {
      KiReadyDeferredReadyList(KeGetCurrentPrcb(), &v18);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      KiReadyDeferredReadyList(CurrentPrcb, &v18);
      if ( CurrentIrql >= 2u )
      {
        if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
          KiRequestSoftwareInterrupt(CurrentPrcb, 2);
      }
      else
      {
        CurrentThread = (__int64)CurrentPrcb->CurrentThread;
        if ( CurrentPrcb->NextThread )
        {
          KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0, v11, v12);
          v17 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          {
            do
              KeYieldProcessorEx(&v17);
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
          LOBYTE(v16) = CurrentIrql;
          v14 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v16) == 0;
        }
        else
        {
          v14 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
        }
        if ( !v14 )
        {
          __writecr8(1uLL);
          *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
          KiDeliverApc(0, 0LL, 0LL);
        }
        __writecr8(CurrentIrql);
      }
    }
  }
}
