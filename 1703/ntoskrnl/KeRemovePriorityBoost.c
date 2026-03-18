/*
 * XREFs of KeRemovePriorityBoost @ 0x140153BF0
 * Callers:
 *     CmpReleaseWriteQueue @ 0x1404D86B8 (CmpReleaseWriteQueue.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x1400233A0 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiRemoveBoostThread @ 0x1400414C0 (KiRemoveBoostThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400ECA80 (KiDeliverApc.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     KiSwapContext @ 0x140188470 (KiSwapContext.c)
 */

void __fastcall KeRemovePriorityBoost(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 CurrentThread; // rdi
  _KTHREAD *NextThread; // rbp
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  int v10; // [rsp+40h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 564) )
    return;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  KiRemoveBoostThread((__int64)CurrentPrcb, a1);
  if ( CurrentIrql < 2u )
  {
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0, v3, v4);
      v10 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v10);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, CurrentThread, v7, v8);
      LOBYTE(v9) = CurrentIrql;
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v9) )
        goto LABEL_15;
    }
    else if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
    {
LABEL_15:
      __writecr8(CurrentIrql);
      return;
    }
    __writecr8(1uLL);
    *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
    KiDeliverApc(0, 0LL, 0LL);
    goto LABEL_15;
  }
  if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
    KiRequestSoftwareInterrupt(CurrentPrcb, 2);
}
