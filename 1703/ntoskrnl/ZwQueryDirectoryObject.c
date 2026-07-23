/*
 * XREFs of ZwQueryDirectoryObject @ 0x140180600
 * Callers:
 *     IopGetLegacyVetoListDrivers @ 0x1404F3A00 (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14057DC20 (SepCleanupLUIDDeviceMapDirectory.c)
 *     ExpFindArcName @ 0x1407193A4 (ExpFindArcName.c)
 *     SiGetEfiSystemDevice @ 0x140739078 (SiGetEfiSystemDevice.c)
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
