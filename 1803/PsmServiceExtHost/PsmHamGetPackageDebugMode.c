/*
 * XREFs of PsmHamGetPackageDebugMode @ 0x18000EB30
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvPackageGetDebugMode@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKPEAE@Z @ 0x18000EB60 (-HamSrvPackageGetDebugMode@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKPEAE@Z.c)
 */

int __fastcall PsmHamGetPackageDebugMode(void *a1, unsigned int a2, unsigned __int16 *a3, unsigned __int8 *a4)
{
  return HamSrvPackageGetDebugMode((struct _RM_SERVICE_GLOBALS *)((char *)RmSvcGlobals + 1312), a3, a1, a2, a4);
}
