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

__int64 __fastcall ZwUnloadKey2(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
