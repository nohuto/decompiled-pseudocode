/*
 * XREFs of PsmHamTerminatePackage @ 0x1800038F0
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@Z @ 0x180003920 (-HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@.c)
 */

__int64 __fastcall PsmHamTerminatePackage(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  return HamSrvTerminatePackageForBi((char *)RmSvcGlobals + 1312, a3, a1, a2, a4);
}
