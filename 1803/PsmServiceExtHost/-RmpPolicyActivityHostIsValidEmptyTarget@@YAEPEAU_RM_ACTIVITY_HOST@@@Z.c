/*
 * XREFs of ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180059F78
 * Callers:
 *     ?RmpPolicyFilterActivityHostWithFlags@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18002DA40 (-RmpPolicyFilterActivityHostWithFlags@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x18005DAD0 (-RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRIC.c)
 *     ?RmpMemoryMonitorCompareActivityHostsForCommitSave@@YAHPEBX0@Z @ 0x18005DB50 (-RmpMemoryMonitorCompareActivityHostsForCommitSave@@YAHPEBX0@Z.c)
 *     ?RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z @ 0x18005DBF0 (-RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z.c)
 *     ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x18005DD40 (-RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_ME.c)
 *     ?RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18005E040 (-RmpMemoryMonitorEmptyPolicyFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z @ 0x18005E0D4 (-RmpMemoryMonitorEmptyPolicyProcessHostArray@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@KK@Z.c)
 * Callees:
 *     ?RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18002DC44 (-RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostIsJobFrozen@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DC64 (-RmpActivityHostIsJobFrozen@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x18002DEA8 (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 */

bool __fastcall RmpPolicyActivityHostIsValidEmptyTarget(struct _RM_ACTIVITY_HOST *a1)
{
  int v1; // ebx
  __int64 v3; // rsi
  BOOL IsJobFrozen; // eax
  int IsRunnable; // eax
  char v6; // dl
  int v7; // eax

  v1 = *((_DWORD *)a1 + 289);
  v3 = *((_QWORD *)a1 + 6);
  IsJobFrozen = RmpActivityHostIsJobFrozen(a1);
  IsRunnable = RmpActivityHostIsRunnable(a1, IsJobFrozen);
  v6 = 0;
  if ( !IsRunnable )
  {
    v7 = RmpPolicyComputeDesiredEmptyState(v3 + 424, (__int64)a1, 2);
    return ((unsigned __int8)v1 & (unsigned __int8)v7 & 0x27) != v7;
  }
  return v6;
}
