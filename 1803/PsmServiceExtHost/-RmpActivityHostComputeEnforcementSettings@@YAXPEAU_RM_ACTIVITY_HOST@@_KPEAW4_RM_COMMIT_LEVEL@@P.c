/*
 * XREFs of ?RmpActivityHostComputeEnforcementSettings@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEAW4_RM_COMMIT_LEVEL@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18005405C
 * Callers:
 *     RmpHandlePsmRetrieveHostMemoryLimit @ 0x18000B78C (RmpHandlePsmRetrieveHostMemoryLimit.c)
 * Callees:
 *     ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180024FD0 (-RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostPopulateRunnabilitySettings@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x1800251CC (-RmpActivityHostPopulateRunnabilitySettings@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTI.c)
 *     ?RmpActivityHostComputeCommitLimit@@YA_KPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180025A60 (-RmpActivityHostComputeCommitLimit@@YA_KPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     ?RmpActivityHostPopulateNotificationThresholds@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEAU_RM_ENFORCEMENT_SETTINGS@@PEAW4_RM_COMMIT_LEVEL@@PEA_K@Z @ 0x1800546D0 (-RmpActivityHostPopulateNotificationThresholds@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEAU_RM_ENFORCEMENT_.c)
 */

void __fastcall RmpActivityHostComputeEnforcementSettings(
        struct _RM_ACTIVITY_HOST *a1,
        unsigned __int64 a2,
        enum _RM_COMMIT_LEVEL *a3,
        struct _RM_ENFORCEMENT_SETTINGS *a4)
{
  int v8; // [rsp+50h] [rbp+18h] BYREF

  RmpActivityHostAggregateCommitValues(a1);
  memset_0(a4, 0, 0x28uLL);
  *((_DWORD *)a4 + 6) = 1;
  *((_DWORD *)a4 + 7) = 100;
  *((_QWORD *)a4 + 2) = RmpActivityHostComputeCommitLimit(a1);
  RmpActivityHostPopulateNotificationThresholds(a1, a2, a4, (enum _RM_COMMIT_LEVEL *)&v8, 0LL);
  RmpActivityHostPopulateRunnabilitySettings(a1, a4);
  if ( a3 )
    *(_DWORD *)a3 = v8;
}
