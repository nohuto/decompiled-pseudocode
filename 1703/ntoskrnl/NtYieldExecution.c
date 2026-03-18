/*
 * XREFs of NtYieldExecution @ 0x140112EE0
 * Callers:
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140041AE4 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiComputeNewPriority @ 0x140042850 (KiComputeNewPriority.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 *     KiSelectReadyThread @ 0x1400EC0C0 (KiSelectReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     KiIsThreadRankNonZero @ 0x1401138D0 (KiIsThreadRankNonZero.c)
 *     KiSelectLowestRankedThread @ 0x140113F6C (KiSelectLowestRankedThread.c)
 *     KiAbQueueAutoBoostDpc @ 0x14011F45C (KiAbQueueAutoBoostDpc.c)
 *     KiSwapContext @ 0x140188470 (KiSwapContext.c)
 */

NTSTATUS NtYieldExecution(void)
{
  __int64 v0; // r8
  __int64 v1; // r9
  NTSTATUS v3; // ebx
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  _QWORD *v7; // r8
  _KTHREAD *NextThread; // rdi
  char Priority; // r14
  __int64 CycleTime; // rdx
  unsigned __int64 v11; // rcx
  char v12; // al
  struct _KPRCB *v13; // rcx
  char v14; // bl
  __int64 v15; // r8
  _SINGLE_LIST_ENTRY *p_PropagateBoostsEntry; // r8
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
  int v18; // [rsp+50h] [rbp+8h] BYREF
  int v19; // [rsp+58h] [rbp+10h] BYREF

  if ( !KeGetPcr()->Prcb.ReadySummary && !KeGetPcr()->Prcb.SharedReadyQueue->ReadySummary )
    return 1073741860;
  v3 = 1073741860;
  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->ReadySummary || CurrentPrcb->SharedReadyQueue->ReadySummary )
  {
    KiAbProcessContextSwitch((__int64)CurrentThread, 0, v0, v1);
    v18 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v18);
      while ( CurrentThread->ThreadLock );
    }
    v19 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v19);
      while ( CurrentPrcb->PrcbLock );
    }
    NextThread = CurrentPrcb->NextThread;
    Priority = 1;
    if ( NextThread )
      goto LABEL_40;
    NextThread = (_KTHREAD *)KiSelectReadyThread(1, (__int64)CurrentPrcb, v7);
    if ( !NextThread )
      NextThread = (_KTHREAD *)KiSelectLowestRankedThread(CurrentPrcb);
    if ( NextThread )
    {
LABEL_40:
      if ( CurrentPrcb->NestingLevel )
      {
        CycleTime = CurrentThread->CycleTime;
      }
      else
      {
        _disable();
        CycleTime = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, (__int64)CurrentThread, 0LL);
        _enable();
      }
      v11 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)CurrentThread->SchedulerApc.SpareByte1;
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 4u);
      CurrentThread->QuantumTarget = v11;
      v12 = KiComputeNewPriority((__int64)CurrentThread, 1);
      v13 = KeGetCurrentPrcb();
      v14 = v12;
      if ( v12 > CurrentThread->Priority )
      {
        if ( CurrentThread->AbWaitEntryCount )
        {
          p_PropagateBoostsEntry = &CurrentThread->PropagateBoostsEntry;
          if ( CurrentThread->PropagateBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
          {
            p_AbPropagateBoostsList = &v13->AbPropagateBoostsList;
            if ( v13 != (struct _KPRCB *)-26040LL )
            {
              p_PropagateBoostsEntry->Next = p_AbPropagateBoostsList->Next;
              p_AbPropagateBoostsList->Next = p_PropagateBoostsEntry;
              _InterlockedIncrement16(&CurrentThread->KeReferenceCount);
              KiAbQueueAutoBoostDpc(v13);
            }
          }
        }
      }
      CurrentThread->Priority = v14;
      CurrentThread->ThreadLock = 0LL;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, (__int64)CurrentThread, 0LL);
      _enable();
      if ( (NextThread->Header.Size & 4) != 0 )
      {
        if ( !(unsigned __int8)KiIsThreadRankNonZero(NextThread, CurrentPrcb) )
          Priority = NextThread->Priority;
      }
      else
      {
        Priority = NextThread->Priority;
      }
      *CurrentPrcb->PriorityState = Priority;
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      NextThread->WaitBlockFill6[68] = 2;
      CurrentThread->WaitReason = 33;
      CurrentThread->WaitIrql = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, CurrentThread);
      LOBYTE(v15) = 1;
      KiSwapContext(CurrentThread, NextThread, v15);
      v3 = 0;
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
      CurrentThread->ThreadLock = 0LL;
    }
  }
  __writecr8(CurrentIrql);
  return v3;
}
