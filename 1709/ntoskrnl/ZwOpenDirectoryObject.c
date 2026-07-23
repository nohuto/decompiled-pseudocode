/*
 * XREFs of ZwOpenDirectoryObject @ 0x14017E3C0
 * Callers:
 *     IopGetLegacyVetoListDrivers @ 0x140483F0C (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1405A7C54 (SepCleanupLUIDDeviceMapDirectory.c)
 *     ObpInitializeRootNamespace @ 0x1405B1FD8 (ObpInitializeRootNamespace.c)
 *     ExpFindArcName @ 0x140758BA4 (ExpFindArcName.c)
 *     SiGetEfiSystemDevice @ 0x14077D8D0 (SiGetEfiSystemDevice.c)
 *     ObCreateSiloRootDirectory @ 0x140789F30 (ObCreateSiloRootDirectory.c)
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
