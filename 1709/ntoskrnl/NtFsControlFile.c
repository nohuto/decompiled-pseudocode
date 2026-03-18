/*
 * XREFs of NtFsControlFile @ 0x14056F410
 * Callers:
 *     <none>
 * Callees:
 *     IopXxxControlFile @ 0x1404AD980 (IopXxxControlFile.c)
 */

NTSTATUS __stdcall NtFsControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG FsControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  char v13; // [rsp+50h] [rbp-18h]

  v13 = 0;
  return IopXxxControlFile(
           FileHandle,
           Event,
           (LARGE_INTEGER)ApcRoutine,
           (__int64)ApcContext,
           IoStatusBlock,
           FsControlCode,
           (char *)InputBuffer,
           InputBufferLength,
           OutputBuffer,
           OutputBufferLength,
           v13);
}
