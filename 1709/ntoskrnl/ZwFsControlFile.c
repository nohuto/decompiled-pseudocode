/*
 * XREFs of ZwFsControlFile @ 0x14017DFE0
 * Callers:
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140226E40 (MiTrimUnusedPageFileRegionsWorker.c)
 *     CmpOpenHiveFile @ 0x1404E0664 (CmpOpenHiveFile.c)
 *     RtlUnlockBootStatusData @ 0x1405AC670 (RtlUnlockBootStatusData.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1405E577C (FsRtlpRegisterProviderWithMUP.c)
 *     PfpQueryFileExtentsRequest @ 0x1406F2EF8 (PfpQueryFileExtentsRequest.c)
 *     PopClearHiberFileSignature @ 0x1406FB3D4 (PopClearHiberFileSignature.c)
 *     PopCreateHiberFile @ 0x1406FB4BC (PopCreateHiberFile.c)
 *     PopSanityCheckHiberFile @ 0x1406FC1F4 (PopSanityCheckHiberFile.c)
 *     SmKmStoreFileGetExtents @ 0x14073B688 (SmKmStoreFileGetExtents.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFsControlFile(
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
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
