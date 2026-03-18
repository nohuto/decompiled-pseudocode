/*
 * XREFs of IopOpenRegistryKeyEx @ 0x1405C9264
 * Callers:
 *     PnpBootDeviceWait @ 0x14014661C (PnpBootDeviceWait.c)
 *     IopInitializePlugPlayServices @ 0x14083F81C (IopInitializePlugPlayServices.c)
 *     IopStoreSystemPartitionInformation @ 0x140844774 (IopStoreSystemPartitionInformation.c)
 *     PiInitCacheGroupInformation @ 0x140844C14 (PiInitCacheGroupInformation.c)
 *     PipInitDeviceOverrideCache @ 0x140844E5C (PipInitDeviceOverrideCache.c)
 *     PipCheckSystemFirmwareUpdated @ 0x140845294 (PipCheckSystemFirmwareUpdated.c)
 *     PipInitializeCoreDriversByGroup @ 0x140845614 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x140845AEC (IopInitializeSystemDrivers.c)
 *     PipGetDriverTagPriority @ 0x140845D34 (PipGetDriverTagPriority.c)
 *     IopInitializeBootDrivers @ 0x140845EE8 (IopInitializeBootDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x140846850 (IopInitializeBuiltinDriver.c)
 *     PipInitComputerIds @ 0x1408470D0 (PipInitComputerIds.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x14084E428 (PipInitializeEarlyLaunchDrivers.c)
 * Callees:
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 */

NTSTATUS __fastcall IopOpenRegistryKeyEx(HANDLE *a1, void *a2, UNICODE_STRING *a3, ACCESS_MASK a4)
{
  OBJECT_ATTRIBUTES v5; // [rsp+20h] [rbp-38h] BYREF

  *a1 = 0LL;
  v5.RootDirectory = a2;
  v5.ObjectName = a3;
  *(_OWORD *)&v5.SecurityDescriptor = 0LL;
  v5.Length = 48;
  v5.Attributes = 576;
  return ZwOpenKey(a1, a4, &v5);
}
