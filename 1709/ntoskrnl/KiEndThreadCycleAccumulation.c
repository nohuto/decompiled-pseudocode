/*
 * XREFs of KiEndThreadCycleAccumulation @ 0x14008DB10
 * Callers:
 *     KeUpdateThreadTag @ 0x14000B720 (KeUpdateThreadTag.c)
 *     KeRemovePriQueue @ 0x140061A80 (KeRemovePriQueue.c)
 *     KeWaitForMultipleObjects @ 0x14006B570 (KeWaitForMultipleObjects.c)
 *     KeRemoveQueueEx @ 0x14006C920 (KeRemoveQueueEx.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KiGroupSchedulingGenerationEnd @ 0x14008AEE4 (KiGroupSchedulingGenerationEnd.c)
 *     KeSetPriorityBoost @ 0x14008BBA0 (KeSetPriorityBoost.c)
 *     KeSetPriorityThread @ 0x14008BE00 (KeSetPriorityThread.c)
 *     KiIdleSchedule @ 0x14008CB50 (KiIdleSchedule.c)
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
 *     KeRemovePriorityBoost @ 0x140202884 (KeRemovePriorityBoost.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140208E70 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140208FF0 (KeSetSelectedCpuSetsThread.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x14008E4D0 (KiEndThreadAccountingPeriod.c)
 */

unsigned __int64 __fastcall KiEndThreadCycleAccumulation(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  bool v9; // zf
  unsigned __int64 result; // rax

  *(_BYTE *)(a1 + 32) = 1;
  v5 = __rdtsc();
  v6 = v5 - *(_QWORD *)(a1 + 23488);
  v7 = v6 + *(_QWORD *)(a2 + 72);
  v8 = v6 + *(unsigned int *)(a2 + 80);
  *(_QWORD *)(a2 + 72) = v7;
  *(_QWORD *)(a1 + 23488) = v5;
  if ( v8 > 0xFFFFFFFF )
    LODWORD(v8) = -1;
  v9 = (*(_BYTE *)(a2 + 2) & 0x3E) == 0;
  *(_DWORD *)(a2 + 80) = v8;
  if ( !v9 )
    KiEndThreadAccountingPeriod(a1, a2);
  result = v7;
  if ( a3 )
    *a3 = v5;
  return result;
}
