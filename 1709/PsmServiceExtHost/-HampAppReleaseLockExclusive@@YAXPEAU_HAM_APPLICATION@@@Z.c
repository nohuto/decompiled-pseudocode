/*
 * XREFs of ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180046404
 * Callers:
 *     ?HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001AB9C (-HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18001B480 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800434F4 (-HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800438BC (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppTryChangeExternalState@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x180046450 (-HampAppTryChangeExternalState@@YAXPEAU_HAM_APPLICATION@@W4_HAM_EXTERNAL_APPLICATION_STATE@@@Z.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x180017F3C (CempLockTrackerMarkReleased.c)
 */

void __fastcall HampAppReleaseLockExclusive(struct _HAM_APPLICATION *a1, __int64 a2)
{
  CempLockTrackerMarkReleased((__int64)a1, a2, 3u);
  *((_DWORD *)a1 + 26) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 96);
}
