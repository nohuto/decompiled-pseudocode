/*
 * XREFs of KiReadyDeferredReadyList @ 0x140112D18
 * Callers:
 *     KiExitThreadWait @ 0x140017FB0 (KiExitThreadWait.c)
 *     KeCpuSetReportParkedProcessors @ 0x14001A140 (KeCpuSetReportParkedProcessors.c)
 *     KeSetAffinityThread_0 @ 0x14001A5A4 (KeSetAffinityThread_0.c)
 *     KeSetLegacyAffinityThread @ 0x14001A720 (KeSetLegacyAffinityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x14001D2E4 (KeSetSchedulingGroupRankBias.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140026160 (KeRevertToUserGroupAffinityThread.c)
 *     KiQuantumEnd @ 0x140041B30 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x140064740 (KeSetBasePriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x140064A98 (KeSetPriorityAndQuantumProcess.c)
 *     KiProcessPendingForegroundBoosts @ 0x140064FB0 (KiProcessPendingForegroundBoosts.c)
 *     KeWaitForMultipleObjects @ 0x1400E8C50 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeSetSystemGroupAffinityThread @ 0x140112860 (KeSetSystemGroupAffinityThread.c)
 *     KiAbApplyWakeupBoost @ 0x140112AD4 (KiAbApplyWakeupBoost.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140114594 (KiAbThreadUnboostCpuPriority.c)
 *     KiAbDeferredProcessingWorker @ 0x14011EA00 (KiAbDeferredProcessingWorker.c)
 *     KeBoostPriorityThread @ 0x14012DD50 (KeBoostPriorityThread.c)
 *     KiAbForceProcessLockEntry @ 0x14014DA48 (KiAbForceProcessLockEntry.c)
 *     KeSetAffinityProcess @ 0x140165A2C (KeSetAffinityProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140202748 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetCpuSetsProcess @ 0x1402028C0 (KeSetCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140202AA0 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x14020467C (KiSetHeteroPolicyThread.c)
 *     KeTransitionProcessorParkState @ 0x14020739C (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiDeferredReadyThread @ 0x1400E05F0 (KiDeferredReadyThread.c)
 */

unsigned __int64 __fastcall KiReadyDeferredReadyList(__int64 a1, _QWORD **a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  __int64 v6; // rdx
  unsigned __int64 result; // rax

  v4 = *a2;
  while ( v4 )
  {
    v6 = (__int64)(v4 - 27);
    v4 = (_QWORD *)*v4;
    result = KiDeferredReadyThread(a1, v6, a3, a4);
  }
  return result;
}
