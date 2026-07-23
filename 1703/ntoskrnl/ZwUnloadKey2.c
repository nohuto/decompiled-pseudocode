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

NTSTATUS __cdecl ZwUnloadKey2(POBJECT_ATTRIBUTES TargetKey, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
