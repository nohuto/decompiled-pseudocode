/*
 * XREFs of ZwFlushBuffersFileEx @ 0x1401A90A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFlushBuffersFileEx(
        HANDLE FileHandle,
        ULONG Flags,
        PVOID Parameters,
        ULONG ParametersSize,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
