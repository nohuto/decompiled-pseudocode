/*
 * XREFs of ?RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18002DC44
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001A400 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpTelemetryLogPartitionState@@YAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18002D610 (-RmpTelemetryLogPartitionState@@YAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?RmpPolicyComputeDesiredState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DB50 (-RmpPolicyComputeDesiredState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180059F78 (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyGetFastCommitFromMetrics@@YA_KPEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x18005A484 (-RmpPolicyGetFastCommitFromMetrics@@YA_KPEAU_RM_ACTIVITY_HOST_METRICS@@@Z.c)
 *     ?RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18005D590 (-RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityHostIsRunnable(struct _RM_ACTIVITY_HOST *a1, int a2)
{
  __int64 result; // rax

  if ( (*((_BYTE *)a1 + 1056) & 4) == 0 )
    return 1LL;
  if ( (*((_BYTE *)a1 + 1058) & 4) == 0 )
    return 1LL;
  result = 0LL;
  if ( !a2 )
    return 1LL;
  return result;
}
