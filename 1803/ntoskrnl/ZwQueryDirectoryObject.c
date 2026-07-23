/*
 * XREFs of ZwQueryDirectoryObject @ 0x1401A9C20
 * Callers:
 *     IopGetLegacyVetoListDrivers @ 0x1404D45D0 (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14056FE18 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x140623D78 (PiDrvDbEnumDriverStoreNodes.c)
 *     ExpFindArcName @ 0x1407BF834 (ExpFindArcName.c)
 *     SiGetEfiSystemDevice @ 0x1407E62CC (SiGetEfiSystemDevice.c)
 *     CmGetSystemDriverList @ 0x1408B7D44 (CmGetSystemDriverList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryDirectoryObject(
        HANDLE DirectoryHandle,
        PVOID Buffer,
        ULONG BufferLength,
        BOOLEAN ReturnSingleEntry,
        BOOLEAN RestartScan,
        PULONG Context,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle);
}
