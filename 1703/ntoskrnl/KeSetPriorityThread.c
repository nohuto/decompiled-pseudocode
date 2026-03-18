/*
 * XREFs of KeSetPriorityThread @ 0x140043440
 * Callers:
 *     CcBoostLowPriorityWorkerThread @ 0x140029248 (CcBoostLowPriorityWorkerThread.c)
 *     CmpSetPriorityThread @ 0x14003B948 (CmpSetPriorityThread.c)
 *     MiZeroInParallel @ 0x14007CE14 (MiZeroInParallel.c)
 *     MiZeroInParallelWorker @ 0x14007CF90 (MiZeroInParallelWorker.c)
 *     CcApplyLowIoPriorityToThread @ 0x1400AB33C (CcApplyLowIoPriorityToThread.c)
 *     KeGenericProcessorCallback @ 0x1401117A4 (KeGenericProcessorCallback.c)
 *     PfTSetTraceWorkerPriority @ 0x140138120 (PfTSetTraceWorkerPriority.c)
 *     KeSwapProcessOrStack @ 0x14015C090 (KeSwapProcessOrStack.c)
 *     KiExecuteDpc @ 0x14015D830 (KiExecuteDpc.c)
 *     MiMappedPageWriter @ 0x14015DC00 (MiMappedPageWriter.c)
 *     KeBalanceSetManager @ 0x14015E600 (KeBalanceSetManager.c)
 *     MiDereferenceSegmentThread @ 0x1401611B0 (MiDereferenceSegmentThread.c)
 *     FsRtlWorkerThread @ 0x140167650 (FsRtlWorkerThread.c)
 *     MiPartitionWorkingSetManager @ 0x1402139F0 (MiPartitionWorkingSetManager.c)
 *     ExRegisterBootDevice @ 0x14025A940 (ExRegisterBootDevice.c)
 *     NtSetInformationThread @ 0x14047D650 (NtSetInformationThread.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140772150 (ViPendingQueuePassiveLevelCompletion.c)
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 * Callees:
 *     KiPrepareReadyThreadForRescheduling @ 0x14001AD38 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x14001ADA8 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiRequestSoftwareInterrupt @ 0x1400233A0 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiAcquireThreadStateLock @ 0x140043AC0 (KiAcquireThreadStateLock.c)
 *     KiStartThreadCycleAccumulation @ 0x140043CC0 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 *     KiDeferredReadyThread @ 0x1400E05F0 (KiDeferredReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x1400ECA80 (KiDeliverApc.c)
 *     KiSelectReadyThreadEx @ 0x1400ECE00 (KiSelectReadyThreadEx.c)
 *     KiQueueReadyThread @ 0x1401131D0 (KiQueueReadyThread.c)
 *     KiIsThreadRankNonZero @ 0x1401138D0 (KiIsThreadRankNonZero.c)
 *     KiUpdateThreadPriority @ 0x1401147E0 (KiUpdateThreadPriority.c)
 *     KiAbQueueAutoBoostDpc @ 0x14011F45C (KiAbQueueAutoBoostDpc.c)
 *     KiSwapContext @ 0x140188470 (KiSwapContext.c)
 *     EtwTracePriority @ 0x140253A4C (EtwTracePriority.c)
 */

KPRIORITY __stdcall KeSetPriorityThread(PKTHREAD Thread, KPRIORITY Priority)
{
  _SINGLE_LIST_ENTRY *p_PropagateBoostsEntry; // r8
  __int64 v3; // r9
  int v6; // r14d
  __int64 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r15
  bool v9; // si
  char PriorityDecrement; // al
  KPRIORITY v11; // r12d
  volatile unsigned __int64 CycleTime; // rsi
  unsigned __int64 v13; // rcx
  char BasePriority; // al
  unsigned int PriorityFloorSummary; // eax
  char v16; // al
  char v17; // dl
  int v18; // r13d
  struct _KPRCB *v19; // rcx
  __int64 v20; // rsi
  char v21; // cl
  __int64 ready; // rax
  __int64 v23; // rdi
  bool v24; // al
  __int64 v25; // rdx
  $5D97DFBD8A3B57106D897333810A8BD0 *Flink; // rdi
  _KTHREAD *CurrentThread; // rdi
  struct _KPRCB *v29; // rcx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
  _SINGLE_LIST_ENTRY *v31; // rdx
  _KTHREAD *NextThread; // rsi
  __int64 v33; // rax
  __int64 v34; // rdi
  char v35; // cl
  __int64 v36; // rcx
  int v37; // ecx
  bool v38; // r12
  char *v39; // rdx
  char v40; // cl
  char IsThreadRankNonZero; // al
  struct _KPRCB *v42; // rax
  __int64 v43; // [rsp+38h] [rbp-48h] BYREF
  $5D97DFBD8A3B57106D897333810A8BD0 *v44; // [rsp+40h] [rbp-40h] BYREF
  volatile signed __int64 *v45; // [rsp+48h] [rbp-38h] BYREF
  __int64 v46; // [rsp+50h] [rbp-30h]
  __int64 v47; // [rsp+58h] [rbp-28h]
  int v48; // [rsp+A0h] [rbp+20h] BYREF
  KPRIORITY v49; // [rsp+B0h] [rbp+30h]
  int v50; // [rsp+B8h] [rbp+38h] BYREF

  if ( Thread->Process == (_KPROCESS *)&KiInitialProcess )
    return 1;
  v6 = 0;
  v44 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v47 = CurrentIrql;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v48 = (unsigned __int8)v44;
  v9 = Thread == CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v48);
    while ( Thread->ThreadLock );
  }
  PriorityDecrement = Thread->PriorityDecrement;
  v11 = Thread->Priority;
  v49 = v11;
  if ( PriorityDecrement )
  {
    if ( (PriorityDecrement & 0xF) != 0 )
      Thread->ForegroundLossTime = MEMORY[0xFFFFF78000000320];
    Thread->PriorityDecrement = 0;
  }
  if ( Priority != Thread->Priority )
  {
    if ( !v9 || CurrentPrcb->NestingLevel )
    {
      CycleTime = Thread->CycleTime;
    }
    else
    {
      _disable();
      CycleTime = KiEndThreadCycleAccumulation(CurrentPrcb, Thread, 0LL);
      KiStartThreadCycleAccumulation(CurrentPrcb, Thread, 0LL);
      _enable();
    }
    v13 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)Thread->SchedulerApc.SpareByte1;
    if ( (*((_DWORD *)&Thread->0 + 1) & 0x10) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 4u);
    BasePriority = Thread->BasePriority;
    Thread->QuantumTarget = v13;
    if ( BasePriority && !Priority )
      Priority = 1;
    if ( BasePriority < 16 || Priority >= 16 )
    {
      PriorityFloorSummary = Thread->PriorityFloorSummary;
      if ( PriorityFloorSummary )
      {
        _BitScanReverse((unsigned int *)&v37, PriorityFloorSummary);
        if ( (char)Priority < v37 )
          LOBYTE(Priority) = v37;
      }
      if ( Thread->Priority != (char)Priority )
      {
        v16 = KiAcquireThreadStateLock(Thread, &v43, &v45);
        v17 = Thread->Priority;
        v18 = v17;
        switch ( v16 )
        {
          case 2:
            v46 = v43;
            v38 = *(_QWORD *)(v43 + 16) == 0LL;
            v19 = KeGetCurrentPrcb();
            if ( (char)Priority > v17 )
            {
              if ( Thread->AbWaitEntryCount )
              {
                p_PropagateBoostsEntry = &Thread->PropagateBoostsEntry;
                if ( Thread->PropagateBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
                {
                  p_AbPropagateBoostsList = &v19->AbPropagateBoostsList;
                  if ( v19 != (struct _KPRCB *)-26040LL )
                  {
                    p_PropagateBoostsEntry->Next = p_AbPropagateBoostsList->Next;
                    p_AbPropagateBoostsList->Next = p_PropagateBoostsEntry;
                    _InterlockedIncrement16(&Thread->KeReferenceCount);
                    KiAbQueueAutoBoostDpc(v19);
                  }
                }
              }
            }
            v20 = v43;
            Thread->Priority = Priority;
            if ( v38 )
            {
              if ( (Thread->Header.Size & 4) != 0 )
              {
                if ( (unsigned __int8)KiIsThreadRankNonZero(Thread, v20) )
                  v21 = 1;
                else
                  v21 = Thread->Priority;
              }
              else
              {
                v21 = Priority;
              }
              **(_BYTE **)(v20 + 56) = v21;
            }
            if ( (char)Priority < v18 && v38 )
            {
              v20 = v43;
              if ( Thread->WaitBlockFill6[68] == 2 )
              {
                ready = KiSelectReadyThreadEx(v43, Thread, 0LL);
                v23 = ready;
                if ( ready )
                {
                  if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
                  {
                    if ( (unsigned __int8)KiIsThreadRankNonZero(ready, v20) )
                      v35 = 1;
                    else
                      v35 = *(_BYTE *)(v23 + 195);
                  }
                  else
                  {
                    v35 = *(_BYTE *)(ready + 195);
                  }
                  **(_BYTE **)(v20 + 56) = v35;
                  *(_QWORD *)(v46 + 16) = v23;
                  if ( *(_BYTE *)(v23 + 388) == 1 )
                    *(_DWORD *)(v23 + 132) = *(_DWORD *)(v23 + 132)
                                           - *(_DWORD *)(v23 + 436)
                                           + MEMORY[0xFFFFF78000000320];
                  v20 = v43;
                  LOBYTE(v6) = 1;
                  *(_BYTE *)(v23 + 388) = 3;
                }
              }
              else if ( *(_DWORD *)(v43 + 22808) >> (Priority + 1) )
              {
                Thread->WaitRegister.Flags |= 0x10u;
              }
            }
            break;
          case 1:
            v20 = v43;
            KiRemoveThreadFromAnyReadyQueue(v43, (__int64)v45, (__int64)Thread, v17);
            KiUpdateThreadPriority(0LL, Thread, (unsigned int)(char)Priority, 0LL);
            KiPrepareReadyThreadForRescheduling((__int64)Thread, (char)Priority, (__int64 *)&v44);
            break;
          case 3:
            v20 = v43;
            LOBYTE(v3) = 1;
            KiUpdateThreadPriority(v43, Thread, (unsigned int)(char)Priority, v3);
            if ( (char)Priority < v18 )
            {
              v33 = KiSelectReadyThreadEx(v20, Thread, 0LL);
              v34 = v33;
              if ( v33 )
              {
                if ( (*(_BYTE *)(v33 + 2) & 4) != 0 )
                {
                  IsThreadRankNonZero = KiIsThreadRankNonZero(v33, v20);
                  v40 = 1;
                  if ( !IsThreadRankNonZero )
                    v40 = *(_BYTE *)(v34 + 195);
                }
                else
                {
                  v40 = *(_BYTE *)(v33 + 195);
                }
                **(_BYTE **)(v20 + 56) = v40;
                *(_QWORD *)(v20 + 16) = v34;
                if ( *(_BYTE *)(v34 + 388) == 1 )
                  *(_DWORD *)(v34 + 132) = *(_DWORD *)(v34 + 132) - *(_DWORD *)(v34 + 436) + MEMORY[0xFFFFF78000000320];
                *(_BYTE *)(v34 + 388) = 3;
                _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 0xBu);
                v20 = v43;
                Thread->WaitBlockFill6[68] = 7;
                Thread->WaitListEntry.Flink = 0LL;
                v44 = &Thread->216;
              }
            }
            break;
          default:
            v29 = KeGetCurrentPrcb();
            if ( (char)Priority > v17 )
            {
              if ( Thread->AbWaitEntryCount )
              {
                p_PropagateBoostsEntry = &Thread->PropagateBoostsEntry;
                if ( Thread->PropagateBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
                {
                  v31 = &v29->AbPropagateBoostsList;
                  if ( v29 != (struct _KPRCB *)-26040LL )
                  {
                    p_PropagateBoostsEntry->Next = v31->Next;
                    v31->Next = p_PropagateBoostsEntry;
                    _InterlockedIncrement16(&Thread->KeReferenceCount);
                    KiAbQueueAutoBoostDpc(v29);
                  }
                }
              }
            }
            v20 = v43;
            Thread->Priority = Priority;
            break;
        }
        v24 = 0;
        v25 = *(_QWORD *)(KiProcessorBlock[Thread->IdealProcessor] + 25152);
        if ( v25 )
          v24 = (v25 & Thread->Affinity.Mask) == v25;
        if ( v24 != ((*((_DWORD *)&Thread->0 + 1) & 0x1000) != 0) )
        {
          _InterlockedXor((volatile signed __int32 *)&Thread->116 + 1, 0x1000u);
          v20 = v43;
        }
        if ( v20 )
          _InterlockedAnd64((volatile signed __int64 *)(v20 + 48), 0LL);
        if ( v45 )
          _InterlockedAnd64(v45, 0LL);
        if ( (_BYTE)v6 )
        {
          LODWORD(v25) = KeGetPcr()->Prcb.Number;
          v36 = *(unsigned int *)(v43 + 36);
          if ( (_DWORD)v25 != (_DWORD)v36 )
          {
            v42 = KeGetCurrentPrcb();
            LOBYTE(v25) = 2;
            ++v42->SynchCounters.IpiSendSoftwareInterruptCount;
            HalSendSoftwareInterrupt(v36, v25, p_PropagateBoostsEntry, v3);
          }
        }
        v6 = Thread->Priority;
        v11 = v49;
        LOBYTE(CurrentIrql) = v47;
      }
    }
  }
  Flink = v44;
  Thread->ThreadLock = 0LL;
  while ( Flink )
  {
    v39 = (char *)(&Flink[-14].SwapListEntry + 1);
    Flink = ($5D97DFBD8A3B57106D897333810A8BD0 *)Flink->WaitListEntry.Flink;
    KiDeferredReadyThread(CurrentPrcb, v39, p_PropagateBoostsEntry, v3);
  }
  if ( (unsigned __int8)CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
      KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    goto LABEL_42;
  }
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( CurrentPrcb->NextThread )
  {
    KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
    v50 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v50);
      while ( CurrentPrcb->PrcbLock );
    }
    NextThread = CurrentPrcb->NextThread;
    CurrentPrcb->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation(CurrentPrcb, CurrentThread, 0LL);
    _enable();
    CurrentPrcb->CurrentThread = NextThread;
    if ( NextThread->WaitBlockFill6[68] == 1 )
      NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
    NextThread->WaitBlockFill6[68] = 2;
    CurrentThread->WaitReason = 32;
    CurrentThread->WaitIrql = CurrentIrql;
    KiQueueReadyThread(CurrentPrcb, CurrentThread);
    if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, (unsigned __int8)CurrentIrql) )
      goto LABEL_41;
    goto LABEL_69;
  }
  if ( (CurrentThread->MiscFlags & 0x40) != 0 )
  {
LABEL_69:
    __writecr8(1uLL);
    CurrentThread->MiscFlags &= ~0x40u;
    KiDeliverApc(0LL, 0LL, 0LL);
  }
LABEL_41:
  __writecr8((unsigned __int8)CurrentIrql);
LABEL_42:
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
  {
    if ( v6 )
      EtwTracePriority((_DWORD)Thread, 1328, v11, v6, 0LL);
  }
  return v11;
}
