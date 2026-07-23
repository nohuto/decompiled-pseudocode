/*
 * XREFs of KiQueueReadyThread @ 0x1400EC480
 * Callers:
 *     KeGenericProcessorCallback @ 0x140004F40 (KeGenericProcessorCallback.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140005230 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140005480 (KeSetSystemGroupAffinityThread.c)
 *     NtYieldExecution @ 0x140040000 (NtYieldExecution.c)
 *     KeSetActualBasePriorityThread @ 0x1400402B0 (KeSetActualBasePriorityThread.c)
 *     KiFastReadyThread @ 0x140040784 (KiFastReadyThread.c)
 *     KiSchedulerApc @ 0x140041440 (KiSchedulerApc.c)
 *     KiAbApplyWakeupBoost @ 0x1400646D8 (KiAbApplyWakeupBoost.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14006AA44 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetBasePriorityThread @ 0x14006AEA0 (KeSetBasePriorityThread.c)
 *     KeBoostPriorityThread @ 0x14007EE24 (KeBoostPriorityThread.c)
 *     KiExitThreadWait @ 0x140089090 (KiExitThreadWait.c)
 *     KeCpuSetReportParkedProcessors @ 0x1400A6A88 (KeCpuSetReportParkedProcessors.c)
 *     KeSetSchedulingGroupRankBias @ 0x1400A8024 (KeSetSchedulingGroupRankBias.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1400BA07C (KiAbThreadUnboostCpuPriority.c)
 *     KeSetAffinityThread_0 @ 0x1400CCA40 (KeSetAffinityThread_0.c)
 *     KeSetPriorityThread @ 0x1400EA760 (KeSetPriorityThread.c)
 *     KiReadyOutSwappedThreads @ 0x1400EB350 (KiReadyOutSwappedThreads.c)
 *     KiQuantumEnd @ 0x1400EBA30 (KiQuantumEnd.c)
 *     KeSetPriorityBoost @ 0x1400EE490 (KeSetPriorityBoost.c)
 *     KeClearSystemPriority @ 0x1400F3610 (KeClearSystemPriority.c)
 *     PsImpersonateContainerOfThread @ 0x1400F3930 (PsImpersonateContainerOfThread.c)
 *     KeRemoveQueueEx @ 0x1400F5070 (KeRemoveQueueEx.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     KeWaitForMultipleObjects @ 0x1400FF3A0 (KeWaitForMultipleObjects.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     KiBeginThreadWait @ 0x1401268C0 (KiBeginThreadWait.c)
 *     KeSetLegacyAffinityThread @ 0x140135F80 (KeSetLegacyAffinityThread.c)
 *     KiAbForceProcessLockEntry @ 0x1401594C8 (KiAbForceProcessLockEntry.c)
 *     KeSetCpuSetsProcess @ 0x1401813DC (KeSetCpuSetsProcess.c)
 *     KeSetAffinityProcess @ 0x140183BE0 (KeSetAffinityProcess.c)
 *     KxDispatchInterrupt @ 0x1401B1CB0 (KxDispatchInterrupt.c)
 *     KeRemovePriorityBoost @ 0x14023FEC4 (KeRemovePriorityBoost.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140246964 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140246B10 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140248B08 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x14003A8F0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiShouldPreemptionBeDeferred @ 0x14003AEF8 (KiShouldPreemptionBeDeferred.c)
 *     KiPrcbInGroupAffinity @ 0x14003AF18 (KiPrcbInGroupAffinity.c)
 *     KiRequestSoftwareInterrupt @ 0x14007C130 (KiRequestSoftwareInterrupt.c)
 *     KiCheckThreadAffinity @ 0x1400A7380 (KiCheckThreadAffinity.c)
 *     KiTryToAcquireThreadLock @ 0x1400A73A8 (KiTryToAcquireThreadLock.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1400A7660 (KiCheckForMaxOverQuotaScb.c)
 *     KiRecomputeGroupSchedulingRank @ 0x1400A8494 (KiRecomputeGroupSchedulingRank.c)
 *     KiRemoveSchedulingGroupQueue @ 0x1400A9260 (KiRemoveSchedulingGroupQueue.c)
 *     KiAddThreadToScbQueue @ 0x1400A930C (KiAddThreadToScbQueue.c)
 *     KiComputeGroupSchedulingRank @ 0x1400B1940 (KiComputeGroupSchedulingRank.c)
 *     KiCheckMaxOverQuotaTransition @ 0x1400BEE64 (KiCheckMaxOverQuotaTransition.c)
 *     KiComputeNewPriority @ 0x1400EB8C0 (KiComputeNewPriority.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1400EB950 (KiUpdateVPBackingThreadPriority.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiTryScheduleNextForegroundBoost @ 0x1400ECAB8 (KiTryScheduleNextForegroundBoost.c)
 *     KiUpdateThreadPriority @ 0x1400EDCB0 (KiUpdateThreadPriority.c)
 *     KiDeferredReadyThread @ 0x1400FBA30 (KiDeferredReadyThread.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiComputeThreadAffinity @ 0x1401329B0 (KiComputeThreadAffinity.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     EtwTraceIdealProcessor @ 0x1402AEC2C (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiQueueReadyThread(struct _KPRCB *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  int v4; // r12d
  int v7; // r13d
  volatile signed __int64 *v8; // rdi
  volatile signed __int64 *v9; // rsi
  unsigned __int64 v10; // rdx
  __int64 v11; // r10
  _BYTE *SchedulerAssist; // rax
  int v13; // eax
  __int64 v14; // r15
  unsigned __int64 SharedReadyQueueMask; // rcx
  struct _KPRCB *v16; // r14
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rsi
  _LIST_ENTRY *v18; // rdi
  _DWORD *v19; // rcx
  struct _LIST_ENTRY *v20; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 result; // rax
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v26; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v28; // rdx
  __int64 v29; // rdi
  int v30; // r14d
  __int16 v31; // dx
  __int64 v32; // r10
  unsigned int v33; // r14d
  char v34; // si
  unsigned __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned int v37; // r11d
  __int64 v38; // r8
  struct _LIST_ENTRY *v39; // rcx
  _LIST_ENTRY *v40; // rax
  struct _LIST_ENTRY *v41; // rdx
  unsigned int ReadySummary; // eax
  __int64 v43; // rcx
  __int64 v44; // rcx
  struct _LIST_ENTRY *v45; // rdx
  int v47; // eax
  bool v48; // [rsp+78h] [rbp+10h] BYREF
  int v49; // [rsp+80h] [rbp+18h] BYREF
  volatile signed __int64 *v50; // [rsp+88h] [rbp+20h]

  v3 = *(_QWORD *)(a2 + 72);
  v4 = 0;
  v7 = *(unsigned __int8 *)(a2 + 565);
  if ( *(_QWORD *)(a2 + 568) != KiCpuSetSequence && (*(_DWORD *)(a2 + 116) & 8) == 0 || v3 >= *(_QWORD *)(a2 + 32) )
  {
    if ( KiTryToAcquireThreadLock(a2, 0LL) )
    {
      v33 = *(_DWORD *)(a2 + 588);
      if ( v3 >= *(_QWORD *)(a2 + 32) )
      {
        v34 = KiComputeNewPriority(a2, 1);
        if ( !KiUpdateVPBackingThreadPriority(a2, 0LL) )
          KiUpdateThreadPriority(0LL, a2, (unsigned int)v34, 0LL);
        v35 = v3 + (unsigned int)*(unsigned __int8 *)(a2 + 651) * KiCyclesPerClockQuantum;
        if ( (*(_DWORD *)(a2 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 5u);
        *(_QWORD *)(a2 + 32) = v35;
        KiTryScheduleNextForegroundBoost(a2);
        v7 = 0;
      }
      if ( !KiCheckThreadAffinity(a2) )
      {
        if ( (unsigned int)KiComputeThreadAffinity(v36) )
        {
          if ( !KiPrcbInGroupAffinity((__int64)a1, a2 + 576) )
            _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xCu);
        }
      }
      KiReleaseThreadLockSafe(a2);
      if ( (xmmword_14044C2D0 & 0x8000000) != 0 )
        EtwTraceIdealProcessor(a2, 1350LL, v33, v37);
    }
    else
    {
      _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xCu);
    }
  }
  v8 = *(volatile signed __int64 **)(a2 + 104);
  v50 = v8;
  v9 = v8;
  if ( v8 )
  {
    v29 = (__int64)v8 + a1->ScbOffset;
    if ( v29 )
    {
      v30 = 0;
      while ( 1 )
      {
        if ( (*(_BYTE *)(v29 + 112) & 4) != 0 )
        {
          if ( KiCheckMaxOverQuotaTransition(v29, v9) )
          {
            if ( (*(_BYTE *)(v29 + 112) & 1) != 0 )
              KiRemoveSchedulingGroupQueue((_RTL_RB_TREE *)a1, v29, 1);
          }
          else if ( *(_QWORD *)v29 >= *(_QWORD *)(v29 + 24) && (*(_BYTE *)(v29 + 112) & 2) == 0 )
          {
            KiRecomputeGroupSchedulingRank((__int64)v9, v29, (__int64)a1);
          }
        }
        else
        {
          KiComputeGroupSchedulingRank((__int64)v9, a1, v29);
        }
        v30 += *(_DWORD *)(v29 + 116);
        v29 = *(_QWORD *)(v29 + 408);
        if ( !v29 )
          break;
        v9 = (volatile signed __int64 *)(v29 - a1->ScbOffset);
        v50 = v9;
      }
      if ( (*(_DWORD *)(a2 + 120) & 0x200) == 0
        && *(char *)(a2 + 195) < 16
        && KiShouldPreemptionBeDeferred(a2)
        && v30
        && (v31 & 0xC00) == 0 )
      {
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xBu);
      }
    }
  }
  v10 = 0LL;
  if ( *(char *)(a2 + 195) >= 16 || (a1->IdleState & 2) != 0 )
  {
    v43 = *(_QWORD *)(a2 + 104);
    if ( !v43 || (v44 = a1->ScbOffset + v43) == 0 || !KiCheckForMaxOverQuotaScb(v44) )
      v10 = *(_QWORD *)(a2 + 576) & a1->ParentNode->IdleNonParkedCpuSet;
  }
  if ( (*(_DWORD *)(a2 + 120) & 0x1000) == 0 && !v10 )
  {
    *(_BYTE *)(a2 + 565) = 0;
    *(_DWORD *)(a2 + 436) = MEMORY[0xFFFFF78000000320];
    v11 = *(_QWORD *)(a2 + 104);
    if ( v11 )
      v11 += a1->ScbOffset;
    SchedulerAssist = a1->SchedulerAssist;
    if ( SchedulerAssist )
      SchedulerAssist[24] = 0;
    LOBYTE(a3) = 0;
    *(_BYTE *)(a2 + 388) = 1;
    v48 = 0;
    if ( v11 && (*(_DWORD *)(a2 + 120) & 0xC00) == 0 )
    {
      if ( (unsigned int)KiGetThreadEffectiveRankNonZero(a2, v11, a3, 0, &v48) )
      {
        result = KiAddThreadToScbQueue((__int64)a1, v32, a2, v7);
LABEL_25:
        _InterlockedAnd64((volatile signed __int64 *)&a1->PrcbLock, 0LL);
        CurrentPrcb = KeGetCurrentPrcb();
        v26 = CurrentPrcb->SchedulerAssist;
        if ( v26 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            result = (unsigned int)(v26[5] - 1);
            v26[5] = result;
            if ( !(_DWORD)result )
            {
              result = *((unsigned __int8 *)v26 + 25);
              if ( !(_BYTE)result && !*((_BYTE *)v26 + 27) )
                return KiPerformUnboostKick(CurrentPrcb);
            }
          }
        }
        return result;
      }
      LOBYTE(a3) = v48;
    }
    v13 = *(_DWORD *)(a2 + 120);
    v14 = *(char *)(a2 + 195);
    if ( (v13 & 0x400000) != 0 )
    {
      *(_BYTE *)(*(_QWORD *)(a2 + 1512) + 26LL) = 1;
      v13 = *(_DWORD *)(a2 + 120);
    }
    SharedReadyQueueMask = a1->SharedReadyQueueMask;
    if ( (v13 & 0x2000) != 0
      && SharedReadyQueueMask
      && (SharedReadyQueueMask & *(_QWORD *)(a2 + 576)) == SharedReadyQueueMask
      && !(_BYTE)a3 )
    {
      v16 = KeGetCurrentPrcb();
      SharedReadyQueue = a1->SharedReadyQueue;
      v18 = &SharedReadyQueue->ReadyListHead[v14];
      v49 = 0;
      v19 = v16->SchedulerAssist;
      if ( v19 )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v47 = v19[5];
          v19[5] = v47 + 1;
          if ( v47 == -1 && !*((_BYTE *)v19 + 25) && !*((_BYTE *)v19 + 27) )
            KiPerformUnboostKick(v16);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)SharedReadyQueue, 0LL) )
      {
        KiSetVpThreadSpinLockCount(v16, 0LL);
        do
          KeYieldProcessorEx(&v49);
        while ( SharedReadyQueue->Lock );
        LOBYTE(v28) = 1;
        KiSetVpThreadSpinLockCount(v16, v28);
      }
      v20 = (struct _LIST_ENTRY *)(a2 + 216);
      if ( v7 )
      {
        Flink = v18->Flink;
        if ( v18->Flink->Blink != v18 )
          __fastfail(3u);
        v20->Flink = Flink;
        *(_QWORD *)(a2 + 224) = v18;
        Flink->Blink = v20;
        v18->Flink = v20;
        _bittestandreset(&a1->AffinitizedSelectionMask, v14);
      }
      else
      {
        Blink = v18->Blink;
        if ( Blink->Flink != v18 )
          __fastfail(3u);
        v20->Flink = v18;
        *(_QWORD *)(a2 + 224) = Blink;
        Blink->Flink = v20;
        v18->Blink = v20;
      }
      SharedReadyQueue->ReadySummary |= 1 << v14;
      *(_DWORD *)(a2 + 536) |= 0x80000000;
      ++SharedReadyQueue->ReadyThreadCount;
      result = *(unsigned int *)(a2 + 84);
      *(_DWORD *)(a2 + 2024) = result;
      SharedReadyQueue->ReadyQueueExpectedRunTime += result;
      _InterlockedAnd64((volatile signed __int64 *)SharedReadyQueue, 0LL);
      v23 = KeGetCurrentPrcb();
      v24 = v23->SchedulerAssist;
      if ( v24 )
      {
        if ( v23->NestingLevel <= 1u )
        {
          result = (unsigned int)(v24[5] - 1);
          v24[5] = result;
          if ( !(_DWORD)result )
          {
            result = *((unsigned __int8 *)v24 + 25);
            if ( !(_BYTE)result && !*((_BYTE *)v24 + 27) )
              result = KiPerformUnboostKick(v23);
          }
        }
      }
    }
    else
    {
      v39 = (struct _LIST_ENTRY *)(a2 + 216);
      v40 = &a1->DispatcherReadyListHead[v14];
      if ( v7 )
      {
        v41 = v40->Flink;
        if ( v40->Flink->Blink != v40 )
          __fastfail(3u);
        v39->Flink = v41;
        *(_QWORD *)(a2 + 224) = v40;
        v41->Blink = v39;
        v40->Flink = v39;
        _bittestandset(&a1->AffinitizedSelectionMask, v14);
      }
      else
      {
        v45 = v40->Blink;
        if ( v45->Flink != v40 )
          __fastfail(3u);
        v39->Flink = v40;
        *(_QWORD *)(a2 + 224) = v45;
        v45->Flink = v39;
        v40->Blink = v39;
      }
      ReadySummary = a1->ReadySummary;
      ++a1->ReadyThreadCount;
      a1->ReadySummary = ReadySummary | (1 << v14);
      result = *(unsigned int *)(a2 + 84);
      *(_DWORD *)(a2 + 2024) = result;
      a1->ReadyQueueExpectedRunTime += result;
    }
    goto LABEL_25;
  }
  if ( a1->NextThread )
    v4 = 1;
  *(_BYTE *)(a2 + 388) = 7;
  _InterlockedAnd64((volatile signed __int64 *)&a1->PrcbLock, 0LL);
  KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
  _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xCu);
  *(_BYTE *)(a2 + 565) = v7;
  result = KiDeferredReadyThread(a1, a2, v38);
  if ( !v4 )
  {
    result = (__int64)a1->IdleThread;
    if ( a1->CurrentThread != (_KTHREAD *)result )
    {
      if ( a1->NextThread )
        return KiRequestSoftwareInterrupt(a1, 2);
    }
  }
  return result;
}
