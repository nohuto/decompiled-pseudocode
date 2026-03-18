/*
 * XREFs of ZwUnloadKey2 @ 0x1401AACC0
 * Callers:
 *     PiDrvDbUnloadHive @ 0x140578894 (PiDrvDbUnloadHive.c)
 *     PiDrvDbLoadHive @ 0x1405788DC (PiDrvDbLoadHive.c)
 *     BiUnloadHiveByName @ 0x1405EE3C0 (BiUnloadHiveByName.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1407097C0 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpUnloadDifferencingHive @ 0x14070DA14 (VrpUnloadDifferencingHive.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x1408C8E68 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnloadKey2(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
