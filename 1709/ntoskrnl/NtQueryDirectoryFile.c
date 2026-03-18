/*
 * XREFs of NtQueryDirectoryFile @ 0x1404CB170
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryDirectoryFileEx @ 0x1404CB200 (NtQueryDirectoryFileEx.c)
 */

NTSTATUS __stdcall NtQueryDirectoryFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass,
        BOOLEAN ReturnSingleEntry,
        PUNICODE_STRING FileName,
        BOOLEAN RestartScan)
{
  char v11; // r10

  v11 = (ReturnSingleEntry != 0 ? 2 : 0) | 1;
  if ( !RestartScan )
    v11 = ReturnSingleEntry != 0 ? 2 : 0;
  return NtQueryDirectoryFileEx(
           (_DWORD)FileHandle,
           (_DWORD)Event,
           (_DWORD)ApcRoutine,
           (_DWORD)ApcContext,
           (__int64)IoStatusBlock,
           (__int64)FileInformation,
           Length,
           FileInformationClass,
           v11,
           (__int64)FileName);
}
