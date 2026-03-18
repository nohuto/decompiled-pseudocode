/*
 * XREFs of IoCreateFile @ 0x140446D90
 * Callers:
 *     NtCreateMailslotFile @ 0x140446B48 (NtCreateMailslotFile.c)
 *     NtCreateNamedPipeFile @ 0x140446C48 (NtCreateNamedPipeFile.c)
 *     MiCreatePagingFile @ 0x1405B967C (MiCreatePagingFile.c)
 *     PopCreateHiberFile @ 0x1405D7378 (PopCreateHiberFile.c)
 *     SmKmStoreFileCreateForIoType @ 0x140703078 (SmKmStoreFileCreateForIoType.c)
 *     IopInitCrashDumpRegCallback @ 0x1408138F0 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     IopCreateFile @ 0x140541AA0 (IopCreateFile.c)
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
           (int)FileHandle,
           DesiredAccess,
           (int)ObjectAttributes,
           (int)IoStatusBlock,
           (__int64)AllocationSize,
           FileAttributes,
           ShareAccess,
           Disposition,
           CreateOptions,
           EaBuffer,
           NumberOfBytes,
           CreateFileType,
           (__int64)InternalParameters,
           Options,
           0,
           0LL);
}
