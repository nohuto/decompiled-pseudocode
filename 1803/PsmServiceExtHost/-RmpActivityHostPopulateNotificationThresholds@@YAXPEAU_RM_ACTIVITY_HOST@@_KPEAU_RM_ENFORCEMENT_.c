/*
 * XREFs of ?RmpActivityHostPopulateNotificationThresholds@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEAU_RM_ENFORCEMENT_SETTINGS@@PEAW4_RM_COMMIT_LEVEL@@PEA_K@Z @ 0x1800546D0
 * Callers:
 *     ?RmpActivityHostComputeEnforcementSettings@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEAW4_RM_COMMIT_LEVEL@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18005405C (-RmpActivityHostComputeEnforcementSettings@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEAW4_RM_COMMIT_LEVEL@@P.c)
 * Callees:
 *     ?RmpActivityHostGetCommitLevel@@YA?AW4_RM_COMMIT_LEVEL@@PEAU_RM_COMMIT_THRESHOLDS@@_K@Z @ 0x180025E5C (-RmpActivityHostGetCommitLevel@@YA-AW4_RM_COMMIT_LEVEL@@PEAU_RM_COMMIT_THRESHOLDS@@_K@Z.c)
 *     ?RmpActivityHostGetCommitThresholds@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_KPEA_K22@Z @ 0x180025E80 (-RmpActivityHostGetCommitThresholds@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_KPEA_K22@Z.c)
 */

void __fastcall RmpActivityHostPopulateNotificationThresholds(
        struct _RM_ACTIVITY_HOST *a1,
        unsigned __int64 a2,
        struct _RM_ENFORCEMENT_SETTINGS *a3,
        enum _RM_COMMIT_LEVEL *a4,
        unsigned __int64 *a5)
{
  unsigned __int64 *v5; // rbx
  int CommitLevel; // eax
  unsigned __int64 *v9; // rcx
  unsigned __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v5 = (unsigned __int64 *)((char *)a1 + 1328);
  RmpActivityHostGetCommitThresholds(
    (struct _RM_ACTIVITY_HOST *)((char *)a1 + 1328),
    a2,
    (unsigned __int64 *)a3,
    (unsigned __int64 *)a3 + 1,
    &v10);
  CommitLevel = RmpActivityHostGetCommitLevel(v5, a2);
  v9 = a5;
  *(_DWORD *)a4 = CommitLevel;
  if ( v9 )
    *v9 = v10;
}
