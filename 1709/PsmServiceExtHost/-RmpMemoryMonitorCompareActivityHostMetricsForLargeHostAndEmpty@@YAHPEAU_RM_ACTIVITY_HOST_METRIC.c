/*
 * XREFs of ?RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty@@YAHPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x18003E944
 * Callers:
 *     ?RmpMemoryMonitorCompareActivityHostsForCommitSave@@YAHPEBX0@Z @ 0x18003E9D0 (-RmpMemoryMonitorCompareActivityHostsForCommitSave@@YAHPEBX0@Z.c)
 *     ?RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z @ 0x18003EA70 (-RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z.c)
 * Callees:
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003B66C (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyCompareActivityHostsByPriorityAndCommitEx@@YAHPEAU_RM_POLICY_RECLAIM_CONTEXT@@PEBU_RM_ACTIVITY_HOST_METRICS@@1@Z @ 0x18003B6D0 (-RmpPolicyCompareActivityHostsByPriorityAndCommitEx@@YAHPEAU_RM_POLICY_RECLAIM_CONTEXT@@PEBU_RM_.c)
 */

__int64 __fastcall RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        struct _RM_ACTIVITY_HOST_METRICS *a2)
{
  __int16 v2; // ax
  struct _RM_ACTIVITY_HOST *v3; // rdi
  struct _RM_ACTIVITY_HOST *v4; // rbx

  v2 = *((_WORD *)a1 + 30);
  v3 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)a1 + 6);
  v4 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)a2 + 6);
  if ( v2 >= 0 )
  {
    if ( *((__int16 *)a2 + 30) < 0 )
      return 1LL;
  }
  else if ( *((__int16 *)a2 + 30) >= 0 )
  {
    return 0xFFFFFFFFLL;
  }
  if ( v2 < 0 )
    return RmpPolicyCompareActivityHostsByPriorityAndCommitEx(0LL, a1, a2);
  if ( RmpPolicyActivityHostIsValidEmptyTarget(*((struct _RM_ACTIVITY_HOST **)a1 + 6))
    && !RmpPolicyActivityHostIsValidEmptyTarget(v4) )
  {
    return 0xFFFFFFFFLL;
  }
  return !RmpPolicyActivityHostIsValidEmptyTarget(v3) && RmpPolicyActivityHostIsValidEmptyTarget(v4);
}
