/*
 * XREFs of NtFlushBuffersFile @ 0x140440190
 * Callers:
 *     <none>
 * Callees:
 *     NtFlushBuffersFileEx @ 0x1404401B4 (NtFlushBuffersFileEx.c)
 */

NTSTATUS __stdcall NtFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  return NtFlushBuffersFileEx((_DWORD)FileHandle, 0, 0, 0, (__int64)IoStatusBlock);
}
