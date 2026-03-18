/*
 * XREFs of NtFsControlFile @ 0x14055ED70
 * Callers:
 *     <none>
 * Callees:
 *     IopXxxControlFile @ 0x1405A1A20 (IopXxxControlFile.c)
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
  SIZE_T Length; // [rsp+48h] [rbp-20h]

  LODWORD(Length) = OutputBufferLength;
  return IopXxxControlFile(
           FileHandle,
           (__int64)IoStatusBlock,
           FsControlCode,
           InputBuffer,
           InputBufferLength,
           OutputBuffer,
           Length,
           0);
}
