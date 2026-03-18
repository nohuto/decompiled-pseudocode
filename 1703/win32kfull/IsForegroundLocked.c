/*
 * XREFs of IsForegroundLocked @ 0x1C00B45FC
 * Callers:
 *     ?CheckLegacyForegroundAccess@@YAHXZ @ 0x1C00B3D10 (-CheckLegacyForegroundAccess@@YAHXZ.c)
 *     CheckForegroundRight @ 0x1C00B431C (CheckForegroundRight.c)
 *     ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C00B4718 (-FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z.c)
 *     xxxActiveWindowTracking @ 0x1C01BD2BC (xxxActiveWindowTracking.c)
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
