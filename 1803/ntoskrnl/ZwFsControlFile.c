/*
 * XREFs of ZwFsControlFile @ 0x1401A7BE0
 * Callers:
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14025FF60 (MiTrimUnusedPageFileRegionsWorker.c)
 *     CmpOpenHiveFile @ 0x14049E1B8 (CmpOpenHiveFile.c)
 *     RtlUnlockBootStatusData @ 0x14060F250 (RtlUnlockBootStatusData.c)
 *     PopSanityCheckHiberFile @ 0x140613D44 (PopSanityCheckHiberFile.c)
 *     PopClearHiberFileSignature @ 0x14061422C (PopClearHiberFileSignature.c)
 *     PopCreateHiberFile @ 0x140625404 (PopCreateHiberFile.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x14064BBDC (FsRtlpRegisterProviderWithMUP.c)
 *     PfpQueryFileExtentsRequest @ 0x14075BDB8 (PfpQueryFileExtentsRequest.c)
 *     SmKmStoreFileGetExtents @ 0x14079E690 (SmKmStoreFileGetExtents.c)
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
