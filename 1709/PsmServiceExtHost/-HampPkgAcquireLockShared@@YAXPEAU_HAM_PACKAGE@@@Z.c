/*
 * XREFs of ?HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800465E8
 * Callers:
 *     ?HampPkgWaitForInitializationComplete@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180046F54 (-HampPkgWaitForInitializationComplete@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 * Callees:
 *     CempLockTrackerMarkAcquired @ 0x180017F7C (CempLockTrackerMarkAcquired.c)
 */

void __fastcall HampPkgAcquireLockShared(struct _HAM_PACKAGE *a1, __int64 a2)
{
  CempLockTrackerMarkAcquired((__int64)a1, a2, 4u, 0);
  RtlAcquireSRWLockShared((char *)a1 + 256);
}
