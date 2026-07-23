/*
 * XREFs of ZwCreateFile @ 0x14017E360
 * Callers:
 *     LdrpMapResourceFile @ 0x1400B58D4 (LdrpMapResourceFile.c)
 *     RtlFileMapInitializeByNtPath @ 0x1400F9EF4 (RtlFileMapInitializeByNtPath.c)
 *     PopFlushVolumeWorker @ 0x140436680 (PopFlushVolumeWorker.c)
 *     PspIoRateEntryActivate @ 0x140445410 (PspIoRateEntryActivate.c)
 *     CmpOpenHiveFile @ 0x1404E0664 (CmpOpenHiveFile.c)
 *     EtwpCreateDirectoryFile @ 0x14057844C (EtwpCreateDirectoryFile.c)
 *     CmpInitBackupHive @ 0x1405BECEC (CmpInitBackupHive.c)
 *     FsRtlpOpenDev @ 0x1405E5860 (FsRtlpOpenDev.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140694600 (CmpOpenFileWithExtremePrejudice.c)
 *     CmpSendBootDeviceUsageNotification @ 0x140694FC4 (CmpSendBootDeviceUsageNotification.c)
 *     IopBootLogToFile @ 0x1406B47A0 (IopBootLogToFile.c)
 *     PopGetPolicyDeviceObject @ 0x140706E40 (PopGetPolicyDeviceObject.c)
 *     SmKmStoreFileOpenVolume @ 0x14073BB84 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x14073D4CC (SmpUtilsGetControlDevice.c)
 *     WheapWriteTriageDump @ 0x140763B4C (WheapWriteTriageDump.c)
 *     KdPullRemoteFile @ 0x14079A314 (KdPullRemoteFile.c)
 *     EmInitSystem @ 0x14083306C (EmInitSystem.c)
 *     VhdiMountVhdFile @ 0x14086DB14 (VhdiMountVhdFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG CreateDisposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
