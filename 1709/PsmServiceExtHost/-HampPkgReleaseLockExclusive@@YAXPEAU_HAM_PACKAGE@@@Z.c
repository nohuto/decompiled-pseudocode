/*
 * XREFs of ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180046E78
 * Callers:
 *     ?HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001AB9C (-HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043390 (-HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800434F4 (-HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgEnterInsertion@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800467D8 (-HampPkgEnterInsertion@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgHandleBackgroundAccessStateChange@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@W4BACKGROUND_ACCESS_STATE@@@Z @ 0x180046A80 (-HampPkgHandleBackgroundAccessStateChange@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@.c)
 *     ?HampPkgQueryBackgroundAccessState@@YAJPEAU_HAM_PACKAGE@@@Z @ 0x180046E18 (-HampPkgQueryBackgroundAccessState@@YAJPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgUpdateApplicationStateCounters@@YAXPEAU_HAM_PACKAGE@@W4_HAM_EXTERNAL_APPLICATION_STATE@@1@Z @ 0x180046ECC (-HampPkgUpdateApplicationStateCounters@@YAXPEAU_HAM_PACKAGE@@W4_HAM_EXTERNAL_APPLICATION_STATE@@.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x180017F3C (CempLockTrackerMarkReleased.c)
 */

void __fastcall HampPkgReleaseLockExclusive(struct _HAM_PACKAGE *a1, __int64 a2)
{
  CempLockTrackerMarkReleased((__int64)a1, a2, 4u);
  *((_DWORD *)a1 + 66) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 256);
}
