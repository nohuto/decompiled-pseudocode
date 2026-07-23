/*
 * XREFs of ZwUnloadKey2 @ 0x140181080
 * Callers:
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1405964E0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiDrvDbLoadHive @ 0x1405966B4 (PiDrvDbLoadHive.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1406A5150 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpUnloadDifferencingHive @ 0x1406A92F8 (VrpUnloadDifferencingHive.c)
 *     BiUnloadHiveByName @ 0x140779940 (BiUnloadHiveByName.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x140856CD0 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnloadKey2(POBJECT_ATTRIBUTES TargetKey, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
