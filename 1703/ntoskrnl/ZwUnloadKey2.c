/*
 * XREFs of ZwUnloadKey2 @ 0x140181680
 * Callers:
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140457020 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiDrvDbLoadHive @ 0x1404571F4 (PiDrvDbLoadHive.c)
 *     BiUnloadHiveByName @ 0x14057BA0C (BiUnloadHiveByName.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14067AA04 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpUnloadDifferencingHive @ 0x14067E278 (VrpUnloadDifferencingHive.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x14081F7BC (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnloadKey2(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
