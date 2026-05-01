/*
 * XREFs of ?RmpActivityHostAggregateResourceSetCommitValues@@YAXPEAVResourceSet@ExecutionModel@@PEAU_RM_COMMIT_THRESHOLDS@@1PEA_K2@Z @ 0x180025B90
 * Callers:
 *     ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180024FD0 (-RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostAggregateHamCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180053C20 (-RmpActivityHostAggregateHamCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpCommitThresholdsAdd@@YAXPEAU_RM_COMMIT_THRESHOLDS@@00@Z @ 0x180025C3C (-RmpCommitThresholdsAdd@@YAXPEAU_RM_COMMIT_THRESHOLDS@@00@Z.c)
 *     ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x180025C9C (-RmpCommitValuesAdd@@YAJ_K0PEA_K@Z.c)
 *     ?RmpResourceSetGetEnforcedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x1800271E0 (-RmpResourceSetGetEnforcedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@.c)
 *     ?RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x1800271F8 (-RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

void __fastcall RmpActivityHostAggregateResourceSetCommitValues(
        struct ExecutionModel::ResourceSet *a1,
        struct _RM_COMMIT_THRESHOLDS *a2,
        struct _RM_COMMIT_THRESHOLDS *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5)
{
  unsigned __int64 *v8; // r11
  _BYTE v9[32]; // [rsp+20h] [rbp-48h] BYREF

  RmpCommitValuesAdd(*a5, *(_QWORD *)(*((_QWORD *)a1 + 179) + 64LL), a5);
  RmpCommitValuesAdd(*v8, *(_QWORD *)(*((_QWORD *)a1 + 179) + 72LL), v8);
  RmpResourceSetGetEnforcedCommitThresholds(*((struct _RM_RESOURCE_SET **)a1 + 179), (struct _RM_COMMIT_THRESHOLDS *)v9);
  RmpCommitThresholdsAdd(a2, (struct _RM_COMMIT_THRESHOLDS *)v9, a2);
  RmpResourceSetGetReportedCommitThresholds(*((struct _RM_RESOURCE_SET **)a1 + 179), (struct _RM_COMMIT_THRESHOLDS *)v9);
  RmpCommitThresholdsAdd(a3, (struct _RM_COMMIT_THRESHOLDS *)v9, a3);
}
