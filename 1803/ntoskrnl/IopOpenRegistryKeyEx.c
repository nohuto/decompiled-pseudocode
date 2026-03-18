/*
 * XREFs of IopOpenRegistryKeyEx @ 0x1406343E4
 * Callers:
 *     PnpBootDeviceWait @ 0x14017973C (PnpBootDeviceWait.c)
 *     IopInitializePlugPlayServices @ 0x1408A3B0C (IopInitializePlugPlayServices.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x1408B3654 (PipInitializeEarlyLaunchDrivers.c)
 *     PipCheckSystemFirmwareUpdated @ 0x1408B4D64 (PipCheckSystemFirmwareUpdated.c)
 *     PiInitCacheGroupInformation @ 0x1408B50C8 (PiInitCacheGroupInformation.c)
 *     PipInitDeviceOverrideCache @ 0x1408B5318 (PipInitDeviceOverrideCache.c)
 *     PipInitializeCoreDriversByGroup @ 0x1408B5658 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x1408B5994 (IopInitializeSystemDrivers.c)
 *     PipGetDriverTagPriority @ 0x1408B5BD8 (PipGetDriverTagPriority.c)
 *     IopInitializeBootDrivers @ 0x1408B5D8C (IopInitializeBootDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x1408B670C (IopInitializeBuiltinDriver.c)
 *     IopStoreSystemPartitionInformation @ 0x1408B7144 (IopStoreSystemPartitionInformation.c)
 *     PnpInitializePnpWatchdogs @ 0x1408B786C (PnpInitializePnpWatchdogs.c)
 * Callees:
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
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
