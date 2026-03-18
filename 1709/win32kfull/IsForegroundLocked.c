/*
 * XREFs of IsForegroundLocked @ 0x1C00CC014
 * Callers:
 *     ?CheckLegacyForegroundAccess@@YAHXZ @ 0x1C00CB9BC (-CheckLegacyForegroundAccess@@YAHXZ.c)
 *     CheckForegroundRight @ 0x1C00CBD2C (CheckForegroundRight.c)
 *     ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C00CC03C (-FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z.c)
 *     xxxActiveWindowTracking @ 0x1C01C11D8 (xxxActiveWindowTracking.c)
 * Callees:
 *     <none>
 */

__int64 IsForegroundLocked()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( guSFWLockCount || gppiLockSFW )
    return 1;
  return v0;
}
