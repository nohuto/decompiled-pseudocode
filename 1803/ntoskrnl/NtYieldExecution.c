/*
 * XREFs of NtYieldExecution @ 0x140040000
 * Callers:
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiIsThreadRankNonZero @ 0x14003A860 (KiIsThreadRankNonZero.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140060670 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140060730 (KiEndThreadCycleAccumulation.c)
 *     KiComputeNewPriority @ 0x1400EB8C0 (KiComputeNewPriority.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1400EB950 (KiUpdateVPBackingThreadPriority.c)
 *     KiQueueReadyThread @ 0x1400EC480 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiUpdateThreadPriority @ 0x1400EDCB0 (KiUpdateThreadPriority.c)
 *     KiSelectReadyThreadEx @ 0x1400EE3A0 (KiSelectReadyThreadEx.c)
 *     KiAbProcessContextSwitch @ 0x1400F83C0 (KiAbProcessContextSwitch.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiSwapContext @ 0x1401B1B40 (KiSwapContext.c)
 */

NTSTATUS NtYieldExecution(void)
{
  NTSTATUS v1; // ebx
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v5; // rdx
  struct _KPRCB *v6; // rbp
  __int64 v7; // rdx
  struct _KPRCB *v8; // rbp
  __int64 v9; // r8
  __int64 NextThread; // rbp
  __int64 CycleTime; // rdx
  unsigned __int64 v12; // rcx
  char v13; // bl
  int v14; // ecx
  _DWORD *SchedulerAssist; // rax
  __int64 v16; // r8
  int v17; // [rsp+50h] [rbp+8h] BYREF
  int v18; // [rsp+58h] [rbp+10h] BYREF

  if ( !KeGetPcr()->Prcb.ReadySummary && !KeGetPcr()->Prcb.SharedReadyQueue->ReadySummary )
    return 1073741860;
  v1 = 1073741860;
  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->ReadySummary || CurrentPrcb->SharedReadyQueue->ReadySummary )
  {
    KiAbProcessContextSwitch(CurrentThread, 0LL);
    v6 = KeGetCurrentPrcb();
    v17 = 0;
    while ( 1 )
    {
      LOBYTE(v5) = 1;
      KiSetVpThreadSpinLockCount(v6, v5);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        break;
      KiSetVpThreadSpinLockCount(v6, 0LL);
      do
        KeYieldProcessorEx(&v17);
      while ( CurrentThread->ThreadLock );
    }
    v8 = KeGetCurrentPrcb();
    v18 = 0;
    while ( 1 )
    {
      LOBYTE(v7) = 1;
      KiSetVpThreadSpinLockCount(v8, v7);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        break;
      KiSetVpThreadSpinLockCount(v8, 0LL);
      do
        KeYieldProcessorEx(&v18);
      while ( CurrentPrcb->PrcbLock );
    }
    NextThread = (__int64)CurrentPrcb->NextThread;
    if ( NextThread || (LOBYTE(v9) = 1, (NextThread = KiSelectReadyThreadEx(CurrentPrcb, 0LL, v9)) != 0) )
    {
      if ( CurrentPrcb->NestingLevel )
      {
        CycleTime = CurrentThread->CycleTime;
      }
      else
      {
        _disable();
        CycleTime = KiUpdateTotalCyclesCurrentThread(CurrentPrcb, CurrentThread, 0LL);
        _enable();
      }
      v12 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)CurrentThread->SchedulerApc.SpareByte1;
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 5u);
      CurrentThread->QuantumTarget = v12;
      LOBYTE(CycleTime) = 1;
      v13 = KiComputeNewPriority(CurrentThread, CycleTime);
      if ( !(unsigned __int8)KiUpdateVPBackingThreadPriority(CurrentThread, 0LL, 0LL) )
        KiUpdateThreadPriority(0LL, CurrentThread, (unsigned int)v13, 0LL);
      KiReleaseThreadLockSafe((__int64)CurrentThread);
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(CurrentPrcb, CurrentThread, 0LL);
      _enable();
      if ( (*(_BYTE *)(NextThread + 2) & 4) != 0 )
      {
        if ( KiIsThreadRankNonZero(NextThread, CurrentPrcb) )
          LOBYTE(v14) = 1;
        else
          LOBYTE(v14) = *(_BYTE *)(NextThread + 195);
      }
      else
      {
        LOBYTE(v14) = *(_BYTE *)(NextThread + 195);
      }
      *CurrentPrcb->PriorityState = v14;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( (_KTHREAD *)NextThread == CurrentPrcb->IdleThread )
          v14 = KiVpThreadSystemWorkPriority;
        else
          v14 = (char)v14;
        *SchedulerAssist = v14;
      }
      CurrentPrcb->CurrentThread = (_KTHREAD *)NextThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
        *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                      - *(_DWORD *)(NextThread + 436)
                                      + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(NextThread + 388) = 2;
      CurrentThread->WaitReason = 33;
      CurrentThread->WaitIrql = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, CurrentThread);
      LOBYTE(v16) = 1;
      KiSwapContext(CurrentThread, NextThread, v16);
      v1 = 0;
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
      KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
      KiReleaseThreadLockSafe((__int64)CurrentThread);
    }
  }
  __writecr8(CurrentIrql);
  return v1;
}
