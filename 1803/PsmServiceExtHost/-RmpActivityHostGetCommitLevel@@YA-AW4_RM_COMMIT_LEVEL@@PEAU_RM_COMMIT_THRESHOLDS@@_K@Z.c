/*
 * XREFs of ?RmpActivityHostGetCommitLevel@@YA?AW4_RM_COMMIT_LEVEL@@PEAU_RM_COMMIT_THRESHOLDS@@_K@Z @ 0x180025E5C
 * Callers:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180025D6C (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostPopulateNotificationThresholds@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEAU_RM_ENFORCEMENT_SETTINGS@@PEAW4_RM_COMMIT_LEVEL@@PEA_K@Z @ 0x1800546D0 (-RmpActivityHostPopulateNotificationThresholds@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEAU_RM_ENFORCEMENT_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityHostGetCommitLevel(unsigned __int64 *a1, unsigned __int64 a2)
{
  if ( a2 < *a1 )
    return 1LL;
  if ( a2 < a1[1] )
    return 2LL;
  return 4 - (unsigned int)(a2 < a1[2]);
}
