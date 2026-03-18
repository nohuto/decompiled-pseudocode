/*
 * XREFs of KiReadyDeferredReadyList @ 0x1400A8694
 * Callers:
 *     KeWaitForMultipleObjects @ 0x14006B570 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KiQuantumEnd @ 0x140090E30 (KiQuantumEnd.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1400A7184 (KiAbThreadUnboostCpuPriority.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400A73D0 (KeSetSystemGroupAffinityThread.c)
 *     KiAbDeferredProcessingWorker @ 0x1400A79A0 (KiAbDeferredProcessingWorker.c)
 *     KeSetActualBasePriorityThread @ 0x1400A7A70 (KeSetActualBasePriorityThread.c)
 *     KiAbApplyWakeupBoost @ 0x1400A8420 (KiAbApplyWakeupBoost.c)
 *     KiProcessPendingForegroundBoosts @ 0x1400AA990 (KiProcessPendingForegroundBoosts.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400AAD30 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetLegacyAffinityThread @ 0x1400AC100 (KeSetLegacyAffinityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x1400D208C (KeSetSchedulingGroupRankBias.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400D34C8 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetBasePriorityThread @ 0x1400D38F0 (KeSetBasePriorityThread.c)
 *     KeBoostPriorityThread @ 0x1400FE440 (KeBoostPriorityThread.c)
 *     KiExitThreadWait @ 0x14011B140 (KiExitThreadWait.c)
 *     KeCpuSetReportParkedProcessors @ 0x14011F5C8 (KeCpuSetReportParkedProcessors.c)
 *     KeSetAffinityThread @ 0x140129ED4 (KeSetAffinityThread.c)
 *     KiAbForceProcessLockEntry @ 0x14013F9F0 (KiAbForceProcessLockEntry.c)
 *     KiSetHeteroPolicyThread @ 0x140150BC8 (KiSetHeteroPolicyThread.c)
 *     KeSetCpuSetsProcess @ 0x140153D04 (KeSetCpuSetsProcess.c)
 *     KeSetAffinityProcess @ 0x1401580FC (KeSetAffinityProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140208E70 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140208FF0 (KeSetSelectedCpuSetsThread.c)
 *     KeTransitionProcessorParkState @ 0x14020DD2C (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiDeferredReadyThread @ 0x140072C60 (KiDeferredReadyThread.c)
 */

unsigned __int64 __fastcall KiReadyDeferredReadyList(__int64 a1, _QWORD **a2, __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rdx
  unsigned __int64 result; // rax

  v3 = *a2;
  while ( v3 )
  {
    v5 = (__int64)(v3 - 27);
    v3 = (_QWORD *)*v3;
    result = KiDeferredReadyThread(a1, v5, a3);
  }
  return result;
}
