/*
 * XREFs of ?RmpResourceSetGetEnforcedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x1800271E0
 * Callers:
 *     ?RmpActivityHostAggregateResourceSetCommitValues@@YAXPEAVResourceSet@ExecutionModel@@PEAU_RM_COMMIT_THRESHOLDS@@1PEA_K2@Z @ 0x180025B90 (-RmpActivityHostAggregateResourceSetCommitValues@@YAXPEAVResourceSet@ExecutionModel@@PEAU_RM_COM.c)
 *     ?RmpResourceSetTrySetPpleTarget@@YAJPEAU_RM_RESOURCE_SET@@_KK@Z @ 0x180052F08 (-RmpResourceSetTrySetPpleTarget@@YAJPEAU_RM_RESOURCE_SET@@_KK@Z.c)
 *     ?RmpRsEnforcedThresholdsAreNecessary@@YAKPEAU_RM_RESOURCE_SET@@0PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x1800533A4 (-RmpRsEnforcedThresholdsAreNecessary@@YAKPEAU_RM_RESOURCE_SET@@0PEAU_RM_COMMIT_THRESHOLDS@@@Z.c)
 *     ?RmpRsEnforcedThresholdsCheckTransition@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x180053688 (-RmpRsEnforcedThresholdsCheckTransition@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEA.c)
 *     ?RmpActivityHostAggregateHamCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180053C20 (-RmpActivityHostAggregateHamCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpResourceSetGetEnforcedCommitThresholds(
        struct _RM_RESOURCE_SET *a1,
        struct _RM_COMMIT_THRESHOLDS *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)a1 + 19);
  if ( v2 )
  {
    *(_OWORD *)a2 = *(_OWORD *)(v2 + 8);
    *((_OWORD *)a2 + 1) = *(_OWORD *)(v2 + 24);
  }
  else
  {
    RmpResourceSetGetReportedCommitThresholds(a1, a2);
  }
}
