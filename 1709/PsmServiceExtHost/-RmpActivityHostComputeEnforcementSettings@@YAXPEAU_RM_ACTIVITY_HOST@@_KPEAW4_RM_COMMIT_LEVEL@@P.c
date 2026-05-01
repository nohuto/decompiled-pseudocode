/*
 * XREFs of ?RmpActivityHostComputeEnforcementSettings@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEAW4_RM_COMMIT_LEVEL@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180005BC4
 * Callers:
 *     RmpHandlePsmRetrieveHostMemoryLimit @ 0x1800179D4 (RmpHandlePsmRetrieveHostMemoryLimit.c)
 * Callees:
 *     ?RmpActivityHostGetCommitThresholds@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEA_K22@Z @ 0x180007A94 (-RmpActivityHostGetCommitThresholds@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEA_K22@Z.c)
 *     ?RmpActivityHostPopulateRunnabilitySettings@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180007C00 (-RmpActivityHostPopulateRunnabilitySettings@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTI.c)
 *     ?RmpActivityHostComputeCommitLimit@@YA_KPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007F60 (-RmpActivityHostComputeCommitLimit@@YA_KPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180008140 (-RmpActivityHostAggregateCommitValues@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

void __fastcall RmpActivityHostComputeEnforcementSettings(
        struct _RM_ACTIVITY_HOST *a1,
        unsigned __int64 a2,
        enum _RM_COMMIT_LEVEL *a3,
        struct _RM_ENFORCEMENT_SETTINGS *a4)
{
  int v8; // ebx
  unsigned __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  RmpActivityHostAggregateCommitValues(a1);
  memset_0(a4, 0, 0x38uLL);
  v8 = 1;
  *((_DWORD *)a4 + 12) = 100;
  *((_DWORD *)a4 + 10) = 1;
  *((_QWORD *)a4 + 2) = RmpActivityHostComputeCommitLimit(a1);
  RmpActivityHostGetCommitThresholds(a1, a2, (unsigned __int64 *)a4, (unsigned __int64 *)a4 + 1, &v9);
  if ( a2 >= *((_QWORD *)a1 + 148) )
  {
    if ( a2 >= *((_QWORD *)a1 + 149) )
      v8 = 4 - (a2 < *((_QWORD *)a1 + 150));
    else
      v8 = 2;
  }
  RmpActivityHostPopulateRunnabilitySettings(a1, a4);
  if ( a3 )
    *(_DWORD *)a3 = v8;
}
