/*
 * XREFs of NtFsControlFile @ 0x14043CC70
 * Callers:
 *     <none>
 * Callees:
 *     IopXxxControlFile @ 0x14052BAD0 (IopXxxControlFile.c)
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
  SIZE_T NumberOfBytes; // [rsp+38h] [rbp-30h]

  LODWORD(NumberOfBytes) = InputBufferLength;
  return IopXxxControlFile(
           FileHandle,
           (__int64)IoStatusBlock,
           FsControlCode,
           InputBuffer,
           NumberOfBytes,
           OutputBuffer,
           OutputBufferLength,
           0);
}
