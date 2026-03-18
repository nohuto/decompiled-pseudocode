/*
 * XREFs of NtYieldExecution @ 0x14008D810
 * Callers:
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiSelectReadyThread @ 0x14006F300 (KiSelectReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiUpdateThreadPriority @ 0x14008C870 (KiUpdateThreadPriority.c)
 *     KiStartThreadCycleAccumulation @ 0x14008D5D0 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x14008DB10 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x14008E6F0 (KiQueueReadyThread.c)
 *     KiComputeNewPriority @ 0x140090D60 (KiComputeNewPriority.c)
 *     KiSelectLowestRankedThread @ 0x1400A8B20 (KiSelectLowestRankedThread.c)
 *     KiIsThreadRankNonZero @ 0x1400AB970 (KiIsThreadRankNonZero.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010F97C (KiAbQueueAutoBoostDpc.c)
 *     KiSwapContext @ 0x140187F20 (KiSwapContext.c)
 */

NTSTATUS NtYieldExecution(void)
{
  NTSTATUS v1; // ebx
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 *v5; // r8
  unsigned __int64 *NextThread; // rbp
  char v7; // r14
  __int64 CycleTime; // rbx
  unsigned __int64 v9; // rcx
  char v10; // al
  struct _KPRCB *v11; // rcx
  char v12; // bl
  _DWORD *SchedulerAssist; // rcx
  __int64 v14; // r8
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
  int v16; // ecx
  int BasePriority; // r8d
  _SINGLE_LIST_ENTRY *p_PropagateBoostsEntry; // r8
  int v19; // [rsp+50h] [rbp+8h] BYREF
  int v20; // [rsp+58h] [rbp+10h] BYREF

  if ( !KeGetPcr()->Prcb.ReadySummary && !KeGetPcr()->Prcb.SharedReadyQueue->ReadySummary )
    return 1073741860;
  v1 = 1073741860;
  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->ReadySummary || CurrentPrcb->SharedReadyQueue->ReadySummary )
  {
    KiAbProcessContextSwitch((__int64)CurrentThread, 0LL);
    v19 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v19);
      while ( CurrentThread->ThreadLock );
    }
    v20 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v20);
      while ( CurrentPrcb->PrcbLock );
    }
    NextThread = (unsigned __int64 *)CurrentPrcb->NextThread;
    v7 = 1;
    if ( NextThread )
      goto LABEL_51;
    NextThread = KiSelectReadyThread(1, (__int64)CurrentPrcb, v5);
    if ( !NextThread )
      NextThread = (unsigned __int64 *)KiSelectLowestRankedThread(CurrentPrcb);
    if ( NextThread )
    {
LABEL_51:
      if ( CurrentPrcb->NestingLevel )
      {
        CycleTime = CurrentThread->CycleTime;
      }
      else
      {
        _disable();
        CycleTime = KiEndThreadCycleAccumulation(CurrentPrcb, CurrentThread, 0LL);
        KiStartThreadCycleAccumulation((__int64)CurrentPrcb, (__int64)CurrentThread, 0);
        _enable();
      }
      v9 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)CurrentThread->SchedulerApc.SpareByte1;
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 5u);
      CurrentThread->QuantumTarget = v9;
      v10 = KiComputeNewPriority(CurrentThread, 1LL);
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x400000) != 0 )
      {
        v16 = *(_DWORD *)CurrentThread->SchedulerAssist;
        BasePriority = CurrentThread->BasePriority;
        if ( v16 >= BasePriority )
        {
          BasePriority = *(_DWORD *)CurrentThread->SchedulerAssist;
          if ( v16 >= 16 )
            BasePriority = 15;
        }
        if ( BasePriority != CurrentThread->Priority )
          KiUpdateThreadPriority(0LL, (__int64)CurrentThread, BasePriority, 0);
      }
      else
      {
        v11 = KeGetCurrentPrcb();
        v12 = v10;
        if ( v10 > CurrentThread->Priority )
        {
          if ( CurrentThread->AbWaitEntryCount )
          {
            p_PropagateBoostsEntry = &CurrentThread->PropagateBoostsEntry;
            if ( CurrentThread->PropagateBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
            {
              p_AbPropagateBoostsList = &v11->AbPropagateBoostsList;
              if ( v11 != (struct _KPRCB *)-25720LL )
              {
                p_PropagateBoostsEntry->Next = p_AbPropagateBoostsList->Next;
                p_AbPropagateBoostsList->Next = p_PropagateBoostsEntry;
                _InterlockedIncrement16(&CurrentThread->KeReferenceCount);
                KiAbQueueAutoBoostDpc(v11);
              }
            }
          }
        }
        CurrentThread->Priority = v12;
      }
      CurrentThread->ThreadLock = 0LL;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(CurrentPrcb, CurrentThread, 0LL);
      _enable();
      if ( (*((_BYTE *)NextThread + 2) & 4) != 0 )
      {
        if ( !(unsigned __int8)KiIsThreadRankNonZero(NextThread, CurrentPrcb) )
          v7 = *((_BYTE *)NextThread + 195);
      }
      else
      {
        v7 = *((_BYTE *)NextThread + 195);
      }
      *CurrentPrcb->PriorityState = v7;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
        *SchedulerAssist = v7;
      CurrentPrcb->CurrentThread = (_KTHREAD *)NextThread;
      if ( *((_BYTE *)NextThread + 388) == 1 )
        *((_DWORD *)NextThread + 33) = *((_DWORD *)NextThread + 33)
                                     - *((_DWORD *)NextThread + 109)
                                     + MEMORY[0xFFFFF78000000320];
      *((_BYTE *)NextThread + 388) = 2;
      CurrentThread->WaitReason = 33;
      CurrentThread->WaitIrql = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, CurrentThread);
      LOBYTE(v14) = 1;
      KiSwapContext(CurrentThread, NextThread, v14);
      v1 = 0;
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
      CurrentThread->ThreadLock = 0LL;
    }
  }
  __writecr8(CurrentIrql);
  return v1;
}
