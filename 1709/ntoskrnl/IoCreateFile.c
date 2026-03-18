/*
 * XREFs of IoCreateFile @ 0x140583760
 * Callers:
 *     NtCreateNamedPipeFile @ 0x140583618 (NtCreateNamedPipeFile.c)
 *     MiCreatePagingFile @ 0x1405D3FF0 (MiCreatePagingFile.c)
 *     NtCreateMailslotFile @ 0x1405E1BDC (NtCreateMailslotFile.c)
 *     PopCreateHiberFile @ 0x1406FB4BC (PopCreateHiberFile.c)
 *     SmKmStoreFileCreateForIoType @ 0x14073B37C (SmKmStoreFileCreateForIoType.c)
 *     IopInitCrashDumpRegCallback @ 0x140849F70 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     IopCreateFile @ 0x14053C790 (IopCreateFile.c)
 */

NTSTATUS __stdcall IoCreateFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG Disposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength,
        CREATE_FILE_TYPE CreateFileType,
        PVOID InternalParameters,
        ULONG Options)
{
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp-38h]

  LODWORD(NumberOfBytes) = EaLength;
  return IopCreateFile(
           FileHandle,
           DesiredAccess,
           (__int64)ObjectAttributes,
           (int *)&IoStatusBlock->0,
           (HANDLE *)AllocationSize,
           FileAttributes,
           ShareAccess,
           Disposition,
           CreateOptions,
           (char *)EaBuffer,
           NumberOfBytes,
           CreateFileType,
           (_SLIST_ENTRY *)InternalParameters,
           Options,
           0,
           0LL);
}
