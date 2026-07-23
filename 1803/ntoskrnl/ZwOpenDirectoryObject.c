/*
 * XREFs of ZwOpenDirectoryObject @ 0x1401A7FC0
 * Callers:
 *     IopGetLegacyVetoListDrivers @ 0x1404D45D0 (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14056FE18 (SepCleanupLUIDDeviceMapDirectory.c)
 *     ObpInitializeRootNamespace @ 0x14061CB80 (ObpInitializeRootNamespace.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x140623D78 (PiDrvDbEnumDriverStoreNodes.c)
 *     ExpFindArcName @ 0x1407BF834 (ExpFindArcName.c)
 *     SiGetEfiSystemDevice @ 0x1407E62CC (SiGetEfiSystemDevice.c)
 *     ObCreateSiloRootDirectory @ 0x1407F63F0 (ObCreateSiloRootDirectory.c)
 *     CmGetSystemDriverList @ 0x1408B7D44 (CmGetSystemDriverList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle);
}
