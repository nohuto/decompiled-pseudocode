/*
 * XREFs of KiAbApplyWakeupBoost @ 0x1400A8420
 * Callers:
 *     ExpReleaseFastMutexContended @ 0x1400A6FF0 (ExpReleaseFastMutexContended.c)
 *     ExpWakePushLock @ 0x1400A7F10 (ExpWakePushLock.c)
 *     KeSetEventBoostPriorityEx @ 0x140100F90 (KeSetEventBoostPriorityEx.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14006FCC0 (KiDeliverApc.c)
 *     KiEndThreadCycleAccumulation @ 0x14008DB10 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140093244 (KiRequestSoftwareInterrupt.c)
 *     KiReadyDeferredReadyList @ 0x1400A8694 (KiReadyDeferredReadyList.c)
 *     KiSetPriorityFloor @ 0x1400A8CE8 (KiSetPriorityFloor.c)
 *     KiSwapContext @ 0x140187F20 (KiSwapContext.c)
 *     EtwTraceAutoBoostSetFloor @ 0x14027AF04 (EtwTraceAutoBoostSetFloor.c)
 */

void __fastcall KiAbApplyWakeupBoost(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  char v6; // di
  char v7; // r12
  ULONG_PTR v8; // rbp
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 CurrentThread; // rdi
  _KTHREAD *NextThread; // rsi
  __int64 v13; // r8
  int v14; // [rsp+98h] [rbp+10h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+20h] BYREF

  v4 = a3;
  v6 = a1;
  if ( (*(_BYTE *)(a2 + 27) & 1) == 0 || *(_QWORD *)(a2 + 64) )
  {
    v7 = 32;
    v8 = a2 - (unsigned __int16)(16 * *(unsigned __int8 *)(a2 + 24));
    v15 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( a1 > 15 )
      v6 = 15;
    if ( *(char *)(v8 + 563) < v6 && ((1 << (v6 - 1)) & 0x7FFF & *(_WORD *)(a2 + 88)) == 0 )
    {
      v7 = *(_BYTE *)(v8 + 195);
      KiSetPriorityFloor(v8);
      *(_WORD *)(a2 + 88) ^= (*(_WORD *)(a2 + 88) ^ (*(_WORD *)(a2 + 88) & 0x7FFF | (1 << (v6 - 1)))) & 0x7FFF;
    }
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 && v7 != 32 )
      EtwTraceAutoBoostSetFloor(v8, *(_QWORD *)(a2 + 32) & 0xFFFFFFFC, (unsigned __int8)v6, 0, 0, v7, 0, 0, 1, 0);
    if ( v4 )
    {
      KiReadyDeferredReadyList(KeGetCurrentPrcb(), &v15, a3, a4);
      return;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    KiReadyDeferredReadyList(CurrentPrcb, &v15, a3, a4);
    if ( CurrentIrql < 2u )
    {
      CurrentThread = (__int64)CurrentPrcb->CurrentThread;
      if ( CurrentPrcb->NextThread )
      {
        KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0LL);
        v14 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v14);
          while ( CurrentPrcb->PrcbLock );
        }
        NextThread = CurrentPrcb->NextThread;
        CurrentPrcb->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
        _enable();
        CurrentPrcb->CurrentThread = NextThread;
        if ( NextThread->WaitBlockFill6[68] == 1 )
        {
          v13 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
          NextThread->ReadyTime = v13 + MEMORY[0xFFFFF78000000320];
        }
        NextThread->WaitBlockFill6[68] = 2;
        *(_BYTE *)(CurrentThread + 643) = 32;
        *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
        KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v13);
        if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, CurrentIrql) )
          goto LABEL_10;
      }
      else if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
      {
LABEL_10:
        __writecr8(CurrentIrql);
        return;
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
      goto LABEL_10;
    }
    if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
      KiRequestSoftwareInterrupt(CurrentPrcb, 2);
  }
}
