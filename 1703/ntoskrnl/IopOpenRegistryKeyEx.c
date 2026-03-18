/*
 * XREFs of IopOpenRegistryKeyEx @ 0x14059C8A8
 * Callers:
 *     PnpBootDeviceWait @ 0x140153E58 (PnpBootDeviceWait.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x1407F6E38 (PipInitializeEarlyLaunchDrivers.c)
 *     PiInitCacheGroupInformation @ 0x1407F7F14 (PiInitCacheGroupInformation.c)
 *     PipInitDeviceOverrideCache @ 0x1407F8168 (PipInitDeviceOverrideCache.c)
 *     PipCheckSystemFirmwareUpdated @ 0x1407F84FC (PipCheckSystemFirmwareUpdated.c)
 *     PipInitializeCoreDriversByGroup @ 0x1407F887C (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x1407F8D84 (IopInitializeSystemDrivers.c)
 *     PipGetDriverTagPriority @ 0x1407F9010 (PipGetDriverTagPriority.c)
 *     IopInitializeBootDrivers @ 0x1407F91C4 (IopInitializeBootDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x1407F9B40 (IopInitializeBuiltinDriver.c)
 *     IopStoreSystemPartitionInformation @ 0x1407FA794 (IopStoreSystemPartitionInformation.c)
 *     IopInitializePlugPlayServices @ 0x1407FAEC0 (IopInitializePlugPlayServices.c)
 *     PipInitComputerIds @ 0x14080F160 (PipInitComputerIds.c)
 * Callees:
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
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
