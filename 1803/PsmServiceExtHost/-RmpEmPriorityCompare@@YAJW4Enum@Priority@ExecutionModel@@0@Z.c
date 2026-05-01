/*
 * XREFs of ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x18004E8F0
 * Callers:
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@3PEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVATOR@@PEAV12@8PEAPEAV12@@Z @ 0x18001EF50 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU.c)
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N5@Z @ 0x1800204B0 (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_U.c)
 *     ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x18002E054 (-RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@.c)
 *     ?RmpResourceSetIsEligibleForCustomTarget@@YAJPEAU_RM_RESOURCE_SET@@_K@Z @ 0x180052858 (-RmpResourceSetIsEligibleForCustomTarget@@YAJPEAU_RM_RESOURCE_SET@@_K@Z.c)
 *     ?RmpActivityHostGetSponsorSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180054674 (-RmpActivityHostGetSponsorSet@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostQueryEffectivePriority@@YAJPEAU_RM_ACTIVITY_HOST@@_KPEAW4Enum@Priority@ExecutionModel@@@Z @ 0x18005479C (-RmpActivityHostQueryEffectivePriority@@YAJPEAU_RM_ACTIVITY_HOST@@_KPEAW4Enum@Priority@Execution.c)
 *     ?RmpPolicyCompareActivityHostsByPriorityAndCommitEx@@YAHPEAU_RM_POLICY_RECLAIM_CONTEXT@@PEBU_RM_ACTIVITY_HOST_METRICS@@1@Z @ 0x180059FDC (-RmpPolicyCompareActivityHostsByPriorityAndCommitEx@@YAHPEAU_RM_POLICY_RECLAIM_CONTEXT@@PEBU_RM_.c)
 *     ?RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_RM_ACTIVITY_HOST@@_KW4Enum@Priority@ExecutionModel@@W4_RM_REVOKE_POLICY@@@Z @ 0x18005A1F8 (-RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_R.c)
 *     ?RmpPolicyReclaimContextInitialize@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@_KW4_RM_REVOKE_POLICY@@PEAU_RM_POLICY_RECLAIM_CONTEXT@@@Z @ 0x18005A5D0 (-RmpPolicyReclaimContextInitialize@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@_KW4_RM_RE.c)
 *     ?SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z @ 0x18005B774 (-SetTransitionalPriorities@ResourceSet@ExecutionModel@@IEAAXW4Enum@Priority@2@0@Z.c)
 *     ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x18005E7CC (-RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_ME.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpEmPriorityCompare(int a1, int a2)
{
  if ( a1 <= a2 )
    return a1 != a2;
  else
    return 0xFFFFFFFFLL;
}
