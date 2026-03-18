/*
 * XREFs of KiQueueReadyThread @ 0x1401131D0
 * Callers:
 *     KiExitThreadWait @ 0x140017FB0 (KiExitThreadWait.c)
 *     KeCpuSetReportParkedProcessors @ 0x14001A140 (KeCpuSetReportParkedProcessors.c)
 *     KeSetAffinityThread_0 @ 0x14001A5A4 (KeSetAffinityThread_0.c)
 *     KeSetLegacyAffinityThread @ 0x14001A720 (KeSetLegacyAffinityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x14001D2E4 (KeSetSchedulingGroupRankBias.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140026160 (KeRevertToUserGroupAffinityThread.c)
 *     KiReadyOutSwappedThreads @ 0x140041050 (KiReadyOutSwappedThreads.c)
 *     KiQuantumEnd @ 0x140041B30 (KiQuantumEnd.c)
 *     KeSetPriorityBoost @ 0x140042F40 (KeSetPriorityBoost.c)
 *     KeSetPriorityThread @ 0x140043440 (KeSetPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x140064740 (KeSetBasePriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x140064A98 (KeSetPriorityAndQuantumProcess.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     KeWaitForMultipleObjects @ 0x1400E8C50 (KeWaitForMultipleObjects.c)
 *     KeRemoveQueueEx @ 0x1400E9870 (KeRemoveQueueEx.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeSetActualBasePriorityThread @ 0x1400ECEC0 (KeSetActualBasePriorityThread.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     KiBeginThreadWait @ 0x1400FC780 (KiBeginThreadWait.c)
 *     KiSchedulerApc @ 0x140111120 (KiSchedulerApc.c)
 *     KeGenericProcessorCallback @ 0x1401117A4 (KeGenericProcessorCallback.c)
 *     KeSetSystemGroupAffinityThread @ 0x140112860 (KeSetSystemGroupAffinityThread.c)
 *     KiAbApplyWakeupBoost @ 0x140112AD4 (KiAbApplyWakeupBoost.c)
 *     NtYieldExecution @ 0x140112EE0 (NtYieldExecution.c)
 *     KiFastReadyThread @ 0x140113FBC (KiFastReadyThread.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140114594 (KiAbThreadUnboostCpuPriority.c)
 *     KeBoostPriorityThread @ 0x14012DD50 (KeBoostPriorityThread.c)
 *     KiAbForceProcessLockEntry @ 0x14014DA48 (KiAbForceProcessLockEntry.c)
 *     KeRemovePriorityBoost @ 0x140153BF0 (KeRemovePriorityBoost.c)
 *     KeSetAffinityProcess @ 0x140165A2C (KeSetAffinityProcess.c)
 *     KxDispatchInterrupt @ 0x1401885E0 (KxDispatchInterrupt.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140202748 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetCpuSetsProcess @ 0x1402028C0 (KeSetCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140202AA0 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x14020467C (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiComputeGroupSchedulingRank @ 0x14001C768 (KiComputeGroupSchedulingRank.c)
 *     KiRequestSoftwareInterrupt @ 0x1400233A0 (KiRequestSoftwareInterrupt.c)
 *     KiRecomputeGroupSchedulingRank @ 0x14002A620 (KiRecomputeGroupSchedulingRank.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiCheckThreadAffinity @ 0x14004144C (KiCheckThreadAffinity.c)
 *     KiTryScheduleNextForegroundBoost @ 0x140042818 (KiTryScheduleNextForegroundBoost.c)
 *     KiComputeNewPriority @ 0x140042850 (KiComputeNewPriority.c)
 *     KiDeferredReadyThread @ 0x1400E05F0 (KiDeferredReadyThread.c)
 *     KiCheckForMaxOverQuotaScb @ 0x14010EEB4 (KiCheckForMaxOverQuotaScb.c)
 *     KiComputeThreadAffinity @ 0x140110554 (KiComputeThreadAffinity.c)
 *     KiShouldPreemptionBeDeferred @ 0x14011387C (KiShouldPreemptionBeDeferred.c)
 *     KiCheckMaxOverQuotaTransition @ 0x14011389C (KiCheckMaxOverQuotaTransition.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x140113960 (KiGetThreadEffectiveRankNonZero.c)
 *     KiPrcbInGroupAffinity @ 0x140113B68 (KiPrcbInGroupAffinity.c)
 *     KiAddThreadToScbQueue @ 0x140113C3C (KiAddThreadToScbQueue.c)
 *     KiUpdateThreadPriority @ 0x1401147E0 (KiUpdateThreadPriority.c)
 *     KiRemoveSchedulingGroupQueue @ 0x140114D04 (KiRemoveSchedulingGroupQueue.c)
 *     EtwTraceIdealProcessor @ 0x140253648 (EtwTraceIdealProcessor.c)
 */

unsigned __int64 __fastcall KiQueueReadyThread(struct _KPRCB *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rsi
  int v5; // r15d
  unsigned int v8; // r12d
  __int64 v9; // rsi
  __int64 v10; // rbp
  unsigned __int64 v11; // rdx
  __int64 v12; // r10
  char v13; // cl
  __int64 v14; // rbp
  unsigned __int64 SharedReadyQueueMask; // rdx
  struct _LIST_ENTRY *v16; // rcx
  _LIST_ENTRY *v17; // rax
  struct _LIST_ENTRY *v18; // rdx
  unsigned int ReadySummary; // eax
  unsigned __int64 result; // rax
  _KSHARED_READY_QUEUE *SharedReadyQueue; // r14
  _LIST_ENTRY *v22; // rsi
  struct _LIST_ENTRY *v23; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v25; // rdx
  int v26; // r14d
  __int16 v27; // dx
  __int64 v28; // r10
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned int v32; // ebp
  char v33; // al
  unsigned __int64 v34; // rdx
  __int64 v35; // rcx
  char v37; // [rsp+78h] [rbp+10h] BYREF
  int v38; // [rsp+80h] [rbp+18h] BYREF
  __int64 v39; // [rsp+88h] [rbp+20h]

  v4 = *(_QWORD *)(a2 + 72);
  v5 = 0;
  v8 = *(unsigned __int8 *)(a2 + 565);
  if ( *(_QWORD *)(a2 + 568) != KiCpuSetSequence && (*(_DWORD *)(a2 + 116) & 8) == 0 || v4 >= *(_QWORD *)(a2 + 32) )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
    {
      _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xBu);
    }
    else
    {
      v32 = *(_DWORD *)(a2 + 588);
      if ( v4 >= *(_QWORD *)(a2 + 32) )
      {
        v33 = KiComputeNewPriority(a2, 1);
        KiUpdateThreadPriority(0LL, a2, (unsigned int)v33, 0LL);
        v34 = v4 + (unsigned int)*(unsigned __int8 *)(a2 + 651) * KiCyclesPerClockQuantum;
        if ( (*(_DWORD *)(a2 + 120) & 0x10) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 4u);
        *(_QWORD *)(a2 + 32) = v34;
        KiTryScheduleNextForegroundBoost(a2);
        v8 = 0;
      }
      if ( !KiCheckThreadAffinity(a2) )
      {
        if ( (unsigned int)KiComputeThreadAffinity(v35) )
        {
          if ( !(unsigned int)KiPrcbInGroupAffinity(a1, a2 + 576) )
            _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xBu);
        }
      }
      a4 = *(unsigned int *)(a2 + 588);
      *(_QWORD *)(a2 + 64) = 0LL;
      if ( (xmmword_1403E4010 & 0x8000000) != 0 )
        EtwTraceIdealProcessor(a2, 1350LL, v32, a4);
    }
  }
  v9 = *(_QWORD *)(a2 + 104);
  v39 = v9;
  v10 = v9;
  if ( v9 )
    v9 += a1->ScbOffset;
  if ( v9 )
  {
    v26 = 0;
    while ( 1 )
    {
      if ( (*(_BYTE *)(v9 + 112) & 4) != 0 )
      {
        if ( (unsigned __int8)KiCheckMaxOverQuotaTransition(v9, v10) )
        {
          if ( (*(_BYTE *)(v9 + 112) & 1) != 0 )
          {
            LOBYTE(a3) = 1;
            KiRemoveSchedulingGroupQueue(a1, v9, a3, a4);
          }
        }
        else if ( *(_QWORD *)v9 >= *(_QWORD *)(v9 + 24) && (*(_BYTE *)(v9 + 112) & 2) == 0 )
        {
          KiRecomputeGroupSchedulingRank(v10, v9, (__int64)a1);
        }
      }
      else
      {
        KiComputeGroupSchedulingRank(v10, (__int64)a1, (__int64 *)v9);
      }
      v26 += *(_DWORD *)(v9 + 116);
      v9 = *(_QWORD *)(v9 + 408);
      if ( !v9 )
        break;
      v10 = v9 - a1->ScbOffset;
      v39 = v10;
    }
    if ( (*(_DWORD *)(a2 + 120) & 0x100) == 0
      && *(char *)(a2 + 195) < 16
      && (unsigned __int8)KiShouldPreemptionBeDeferred(a2)
      && v26
      && (v27 & 0x600) == 0 )
    {
      _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xAu);
    }
  }
  v11 = 0LL;
  if ( *(char *)(a2 + 195) >= 16 || (a1->IdleState & 2) != 0 )
  {
    v30 = *(_QWORD *)(a2 + 104);
    if ( !v30 || (v31 = a1->ScbOffset + v30) == 0 || !KiCheckForMaxOverQuotaScb(v31) )
      v11 = *(_QWORD *)(a2 + 576) & a1->ParentNode->IdleNonParkedCpuSet;
  }
  if ( (*(_DWORD *)(a2 + 120) & 0x800) == 0 && !v11 )
  {
    *(_BYTE *)(a2 + 565) = 0;
    *(_DWORD *)(a2 + 436) = MEMORY[0xFFFFF78000000320];
    v12 = *(_QWORD *)(a2 + 104);
    if ( v12 )
      v12 += a1->ScbOffset;
    v13 = 0;
    *(_BYTE *)(a2 + 388) = 1;
    v37 = 0;
    if ( v12 && (*(_DWORD *)(a2 + 120) & 0x600) == 0 )
    {
      if ( (unsigned int)KiGetThreadEffectiveRankNonZero(a2, v12, a3, 0, (__int64)&v37) )
      {
        result = KiAddThreadToScbQueue(a1, v28, a2, v8);
LABEL_18:
        _InterlockedAnd64((volatile signed __int64 *)&a1->PrcbLock, 0LL);
        return result;
      }
      v13 = v37;
    }
    v14 = *(char *)(a2 + 195);
    SharedReadyQueueMask = a1->SharedReadyQueueMask;
    if ( (*(_DWORD *)(a2 + 120) & 0x1000) != 0
      && SharedReadyQueueMask
      && (SharedReadyQueueMask & *(_QWORD *)(a2 + 576)) == SharedReadyQueueMask
      && !v13 )
    {
      SharedReadyQueue = a1->SharedReadyQueue;
      v22 = &SharedReadyQueue->ReadyListHead[v14];
      v38 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)SharedReadyQueue, 0LL) )
      {
        do
          KeYieldProcessorEx(&v38);
        while ( SharedReadyQueue->Lock );
      }
      v23 = (struct _LIST_ENTRY *)(a2 + 216);
      if ( v8 )
      {
        Flink = v22->Flink;
        if ( v22->Flink->Blink != v22 )
          __fastfail(3u);
        v23->Flink = Flink;
        *(_QWORD *)(a2 + 224) = v22;
        Flink->Blink = v23;
        v22->Flink = v23;
        _bittestandreset(&a1->AffinitizedSelectionMask, v14);
      }
      else
      {
        Blink = v22->Blink;
        if ( Blink->Flink != v22 )
          __fastfail(3u);
        v23->Flink = v22;
        *(_QWORD *)(a2 + 224) = Blink;
        Blink->Flink = v23;
        v22->Blink = v23;
      }
      SharedReadyQueue->ReadySummary |= 1 << v14;
      *(_DWORD *)(a2 + 536) |= 0x80000000;
      ++SharedReadyQueue->ReadyThreadCount;
      result = *(unsigned int *)(a2 + 84);
      *(_DWORD *)(a2 + 2016) = result;
      SharedReadyQueue->ReadyQueueExpectedRunTime += result;
      _InterlockedAnd64((volatile signed __int64 *)SharedReadyQueue, 0LL);
    }
    else
    {
      v16 = (struct _LIST_ENTRY *)(a2 + 216);
      v17 = &a1->DispatcherReadyListHead[v14];
      if ( v8 )
      {
        v18 = v17->Flink;
        if ( v17->Flink->Blink != v17 )
          __fastfail(3u);
        v16->Flink = v18;
        *(_QWORD *)(a2 + 224) = v17;
        v18->Blink = v16;
        v17->Flink = v16;
        _bittestandset(&a1->AffinitizedSelectionMask, v14);
      }
      else
      {
        v25 = v17->Blink;
        if ( v25->Flink != v17 )
          __fastfail(3u);
        v16->Flink = v17;
        *(_QWORD *)(a2 + 224) = v25;
        v25->Flink = v16;
        v17->Blink = v16;
      }
      ReadySummary = a1->ReadySummary;
      ++a1->ReadyThreadCount;
      a1->ReadySummary = ReadySummary | (1 << v14);
      result = *(unsigned int *)(a2 + 84);
      *(_DWORD *)(a2 + 2016) = result;
      a1->ReadyQueueExpectedRunTime += result;
    }
    goto LABEL_18;
  }
  if ( a1->NextThread )
    v5 = 1;
  *(_BYTE *)(a2 + 388) = 7;
  _InterlockedAnd64((volatile signed __int64 *)&a1->PrcbLock, 0LL);
  _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xBu);
  *(_BYTE *)(a2 + 565) = v8;
  result = KiDeferredReadyThread((__int64)a1, a2, a3, a4);
  if ( !v5 )
  {
    result = (unsigned __int64)a1->IdleThread;
    if ( a1->CurrentThread != (_KTHREAD *)result )
    {
      if ( a1->NextThread )
        return KiRequestSoftwareInterrupt(a1, 2);
    }
  }
  return result;
}
