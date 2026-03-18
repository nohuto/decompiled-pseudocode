/*
 * XREFs of KiQueueReadyThread @ 0x14008E6F0
 * Callers:
 *     KeRemovePriQueue @ 0x140061A80 (KeRemovePriQueue.c)
 *     KeWaitForMultipleObjects @ 0x14006B570 (KeWaitForMultipleObjects.c)
 *     KeRemoveQueueEx @ 0x14006C920 (KeRemoveQueueEx.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     KeSetPriorityBoost @ 0x14008BBA0 (KeSetPriorityBoost.c)
 *     KeSetPriorityThread @ 0x14008BE00 (KeSetPriorityThread.c)
 *     NtYieldExecution @ 0x14008D810 (NtYieldExecution.c)
 *     KiReadyOutSwappedThreads @ 0x140090BC0 (KiReadyOutSwappedThreads.c)
 *     KiQuantumEnd @ 0x140090E30 (KiQuantumEnd.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1400A7184 (KiAbThreadUnboostCpuPriority.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400A73D0 (KeSetSystemGroupAffinityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1400A7A70 (KeSetActualBasePriorityThread.c)
 *     KiAbApplyWakeupBoost @ 0x1400A8420 (KiAbApplyWakeupBoost.c)
 *     KiFastReadyThread @ 0x1400A8DC4 (KiFastReadyThread.c)
 *     KeGenericProcessorCallback @ 0x1400A8F40 (KeGenericProcessorCallback.c)
 *     KiSchedulerApc @ 0x1400A9D00 (KiSchedulerApc.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400AAD30 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetLegacyAffinityThread @ 0x1400AC100 (KeSetLegacyAffinityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x1400D208C (KeSetSchedulingGroupRankBias.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400D34C8 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetBasePriorityThread @ 0x1400D38F0 (KeSetBasePriorityThread.c)
 *     KiBeginThreadWait @ 0x1400E4300 (KiBeginThreadWait.c)
 *     KeBoostPriorityThread @ 0x1400FE440 (KeBoostPriorityThread.c)
 *     KiExitThreadWait @ 0x14011B140 (KiExitThreadWait.c)
 *     KeCpuSetReportParkedProcessors @ 0x14011F5C8 (KeCpuSetReportParkedProcessors.c)
 *     KeSetAffinityThread @ 0x140129ED4 (KeSetAffinityThread.c)
 *     KiAbForceProcessLockEntry @ 0x14013F9F0 (KiAbForceProcessLockEntry.c)
 *     KiSetHeteroPolicyThread @ 0x140150BC8 (KiSetHeteroPolicyThread.c)
 *     KeSetCpuSetsProcess @ 0x140153D04 (KeSetCpuSetsProcess.c)
 *     KeSetAffinityProcess @ 0x1401580FC (KeSetAffinityProcess.c)
 *     KxDispatchInterrupt @ 0x140188090 (KxDispatchInterrupt.c)
 *     KeRemovePriorityBoost @ 0x140202884 (KeRemovePriorityBoost.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140208E70 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140208FF0 (KeSetSelectedCpuSetsThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiDeferredReadyThread @ 0x140072C60 (KiDeferredReadyThread.c)
 *     KiUpdateThreadPriority @ 0x14008C870 (KiUpdateThreadPriority.c)
 *     KiComputeNewPriority @ 0x140090D60 (KiComputeNewPriority.c)
 *     KiTryScheduleNextForegroundBoost @ 0x140090DE8 (KiTryScheduleNextForegroundBoost.c)
 *     KiRequestSoftwareInterrupt @ 0x140093244 (KiRequestSoftwareInterrupt.c)
 *     KiPrcbInGroupAffinity @ 0x1400A88C0 (KiPrcbInGroupAffinity.c)
 *     KiCheckThreadAffinity @ 0x1400A8D9C (KiCheckThreadAffinity.c)
 *     KiShouldPreemptionBeDeferred @ 0x1400AA768 (KiShouldPreemptionBeDeferred.c)
 *     KiComputeThreadAffinity @ 0x1400AAF70 (KiComputeThreadAffinity.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400ABA00 (KiGetThreadEffectiveRankNonZero.c)
 *     KiComputeGroupSchedulingRank @ 0x1400D1370 (KiComputeGroupSchedulingRank.c)
 *     KiRecomputeGroupSchedulingRank @ 0x1400D28C8 (KiRecomputeGroupSchedulingRank.c)
 *     KiRemoveSchedulingGroupQueue @ 0x1400D2A58 (KiRemoveSchedulingGroupQueue.c)
 *     KiAddThreadToScbQueue @ 0x1400D2AE0 (KiAddThreadToScbQueue.c)
 *     KiCheckMaxOverQuotaTransition @ 0x14011E1CC (KiCheckMaxOverQuotaTransition.c)
 *     KiCheckForMaxOverQuotaScb @ 0x140125400 (KiCheckForMaxOverQuotaScb.c)
 *     EtwTraceIdealProcessor @ 0x14027B30C (EtwTraceIdealProcessor.c)
 */

unsigned __int64 __fastcall KiQueueReadyThread(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  int v4; // r15d
  __int64 v5; // rbx
  unsigned int v7; // r12d
  __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax
  char v13; // cl
  __int64 v14; // rbp
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  unsigned __int64 result; // rax
  _QWORD *v21; // rdx
  __int64 v22; // r14
  _QWORD *v23; // rsi
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  int v27; // r14d
  __int64 v28; // r9
  __int64 v29; // rdx
  __int16 v30; // dx
  _QWORD *v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  unsigned int v34; // ebp
  char v35; // al
  int v36; // r8d
  unsigned __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r9
  int v40; // ecx
  char v42; // [rsp+78h] [rbp+10h] BYREF
  int v43; // [rsp+80h] [rbp+18h] BYREF
  __int64 v44; // [rsp+88h] [rbp+20h]

  v3 = *(_QWORD *)(a2 + 72);
  v4 = 0;
  v5 = a2;
  v7 = *(unsigned __int8 *)(a2 + 565);
  if ( (*(_QWORD *)(a2 + 568) == KiCpuSetSequence || (*(_DWORD *)(a2 + 116) & 8) != 0) && v3 < *(_QWORD *)(a2 + 32) )
    goto LABEL_3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
  {
    _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xCu);
    goto LABEL_3;
  }
  v34 = *(_DWORD *)(a2 + 588);
  if ( v3 >= *(_QWORD *)(a2 + 32) )
  {
    LOBYTE(a2) = 1;
    v35 = KiComputeNewPriority(v5, a2);
    if ( (*(_DWORD *)(v5 + 120) & 0x400000) != 0 )
    {
      v40 = **(_DWORD **)(v5 + 1512);
      v36 = *(char *)(v5 + 563);
      if ( v40 >= v36 )
      {
        v36 = **(_DWORD **)(v5 + 1512);
        if ( v40 >= 16 )
          v36 = 15;
      }
      if ( v36 == *(char *)(v5 + 195) )
        goto LABEL_64;
    }
    else
    {
      LOBYTE(v36) = v35;
    }
    KiUpdateThreadPriority(0LL, v5, v36, 0);
LABEL_64:
    v37 = v3 + (unsigned int)*(unsigned __int8 *)(v5 + 651) * KiCyclesPerClockQuantum;
    if ( (*(_DWORD *)(v5 + 120) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(v5 + 120), 5u);
    *(_QWORD *)(v5 + 32) = v37;
    KiTryScheduleNextForegroundBoost(v5);
    v7 = 0;
  }
  if ( !(unsigned int)KiCheckThreadAffinity(v5) )
  {
    if ( (unsigned int)KiComputeThreadAffinity(v38) )
    {
      if ( !(unsigned int)KiPrcbInGroupAffinity(a1, v5 + 576) )
        _interlockedbittestandset((volatile signed __int32 *)(v5 + 120), 0xCu);
    }
  }
  v39 = *(unsigned int *)(v5 + 588);
  *(_QWORD *)(v5 + 64) = 0LL;
  if ( (xmmword_140401150 & 0x8000000) != 0 )
    EtwTraceIdealProcessor(v5, 1350LL, v34, v39);
LABEL_3:
  v8 = *(_QWORD *)(v5 + 104);
  v44 = v8;
  v9 = v8;
  if ( v8 )
    v8 += *(unsigned int *)(a1 + 216);
  if ( v8 )
  {
    v27 = 0;
    while ( 1 )
    {
      if ( (*(_BYTE *)(v8 + 112) & 4) != 0 )
      {
        if ( (unsigned __int8)KiCheckMaxOverQuotaTransition(v8, v9) )
        {
          if ( (*(_BYTE *)(v8 + 112) & 1) != 0 )
          {
            LOBYTE(a3) = 1;
            KiRemoveSchedulingGroupQueue(a1, v8, a3);
          }
        }
        else if ( *(_QWORD *)v8 >= *(_QWORD *)(v8 + 24) && (*(_BYTE *)(v8 + 112) & 2) == 0 )
        {
          KiRecomputeGroupSchedulingRank(v9, v8, a1);
        }
      }
      else
      {
        KiComputeGroupSchedulingRank(v9, a1, v8);
      }
      v27 += *(_DWORD *)(v8 + 116);
      v8 = *(_QWORD *)(v8 + 408);
      if ( !v8 )
        break;
      v9 = v8 - *(unsigned int *)(a1 + 216);
      v44 = v9;
    }
    v29 = *(unsigned int *)(v5 + 120);
    if ( (v29 & 0x200) == 0
      && *(char *)(v5 + 195) < 16
      && (unsigned __int8)KiShouldPreemptionBeDeferred(v5, v29, a3, v28)
      && v27
      && (v30 & 0xC00) == 0 )
    {
      _interlockedbittestandset((volatile signed __int32 *)(v5 + 120), 0xBu);
    }
  }
  v10 = 0LL;
  if ( *(char *)(v5 + 195) >= 16 || (*(_BYTE *)(a1 + 35) & 2) != 0 )
  {
    v32 = *(_QWORD *)(v5 + 104);
    if ( !v32 || (v33 = *(unsigned int *)(a1 + 216) + v32) == 0 || !(unsigned __int8)KiCheckForMaxOverQuotaScb(v33) )
      v10 = *(_QWORD *)(v5 + 576) & **(_QWORD **)(a1 + 192);
  }
  if ( (*(_DWORD *)(v5 + 120) & 0x1000) == 0 && !v10 )
  {
    *(_BYTE *)(v5 + 565) = 0;
    *(_DWORD *)(v5 + 436) = MEMORY[0xFFFFF78000000320];
    v11 = *(_QWORD *)(v5 + 104);
    if ( v11 )
      v11 += *(unsigned int *)(a1 + 216);
    v12 = *(_QWORD *)(a1 + 25016);
    if ( v12 )
      *(_BYTE *)(v12 + 8) = 0;
    v13 = 0;
    *(_BYTE *)(v5 + 388) = 1;
    v42 = 0;
    if ( v11 && (*(_DWORD *)(v5 + 120) & 0xC00) == 0 )
    {
      if ( (unsigned int)KiGetThreadEffectiveRankNonZero(v5, v11, a3, 0, (__int64)&v42) )
      {
        result = KiAddThreadToScbQueue(a1, v11, v5, v7);
LABEL_20:
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
        return result;
      }
      v13 = v42;
    }
    v14 = *(char *)(v5 + 195);
    v15 = *(_QWORD *)(a1 + 24896);
    if ( (*(_DWORD *)(v5 + 120) & 0x2000) != 0 && v15 && (v15 & *(_QWORD *)(v5 + 576)) == v15 && !v13 )
    {
      v22 = *(_QWORD *)(a1 + 24904);
      v23 = (_QWORD *)(v22 + 16 * (v14 + 1));
      v43 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v22, 0LL) )
      {
        do
          KeYieldProcessorEx(&v43);
        while ( *(_QWORD *)v22 );
      }
      v24 = (_QWORD *)(v5 + 216);
      if ( v7 )
      {
        v25 = *v23;
        if ( *(_QWORD **)(*v23 + 8LL) != v23 )
          __fastfail(3u);
        *v24 = v25;
        *(_QWORD *)(v5 + 224) = v23;
        *(_QWORD *)(v25 + 8) = v24;
        *v23 = v24;
        _bittestandreset((signed __int32 *)(a1 + 22812), v14);
      }
      else
      {
        v31 = (_QWORD *)v23[1];
        if ( (_QWORD *)*v31 != v23 )
          __fastfail(3u);
        *v24 = v23;
        *(_QWORD *)(v5 + 224) = v31;
        *v31 = v24;
        v23[1] = v24;
      }
      *(_DWORD *)(v22 + 8) |= 1 << v14;
      *(_DWORD *)(v5 + 536) |= 0x80000000;
      ++*(_DWORD *)(v22 + 608);
      result = *(unsigned int *)(v5 + 84);
      *(_DWORD *)(v5 + 2024) = result;
      *(_QWORD *)(v22 + 616) += result;
      _InterlockedAnd64((volatile signed __int64 *)v22, 0LL);
    }
    else
    {
      v16 = (_QWORD *)(v5 + 216);
      v17 = (_QWORD *)(a1 + 16 * (v14 + 1432));
      if ( v7 )
      {
        v18 = *v17;
        if ( *(_QWORD **)(*v17 + 8LL) != v17 )
          __fastfail(3u);
        *v16 = v18;
        *(_QWORD *)(v5 + 224) = v17;
        *(_QWORD *)(v18 + 8) = v16;
        *v17 = v16;
        _bittestandset((signed __int32 *)(a1 + 22812), v14);
      }
      else
      {
        v21 = (_QWORD *)v17[1];
        if ( (_QWORD *)*v21 != v17 )
          __fastfail(3u);
        *v16 = v17;
        *(_QWORD *)(v5 + 224) = v21;
        *v21 = v16;
        v17[1] = v16;
      }
      v19 = *(_DWORD *)(a1 + 22808);
      ++*(_DWORD *)(a1 + 23476);
      *(_DWORD *)(a1 + 22808) = v19 | (1 << v14);
      result = *(unsigned int *)(v5 + 84);
      *(_DWORD *)(v5 + 2024) = result;
      *(_QWORD *)(a1 + 23480) += result;
    }
    goto LABEL_20;
  }
  if ( *(_QWORD *)(a1 + 16) )
    v4 = 1;
  *(_BYTE *)(v5 + 388) = 7;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  _interlockedbittestandreset((volatile signed __int32 *)(v5 + 120), 0xCu);
  *(_BYTE *)(v5 + 565) = v7;
  result = KiDeferredReadyThread(a1, v5, a3);
  if ( !v4 )
  {
    result = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 8) != result )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        LOBYTE(v26) = 2;
        return KiRequestSoftwareInterrupt(a1, v26);
      }
    }
  }
  return result;
}
