/*
 * XREFs of ?HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180045F90
 * Callers:
 *     ?HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x180046184 (-HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampPkgGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x1800469C4 (-HampPkgGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 * Callees:
 *     CempLockTrackerMarkAcquired @ 0x180017F7C (CempLockTrackerMarkAcquired.c)
 */

void __fastcall HampAppAcquireLockShared(struct _HAM_APPLICATION *a1, __int64 a2)
{
  CempLockTrackerMarkAcquired((__int64)a1, a2, 3u, 0);
  RtlAcquireSRWLockShared((char *)a1 + 96);
}
