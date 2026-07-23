/*
 * XREFs of ZwCreateFile @ 0x14017E9E0
 * Callers:
 *     RtlFileMapInitializeByNtPath @ 0x14006D7F4 (RtlFileMapInitializeByNtPath.c)
 *     LdrpMapResourceFile @ 0x140165554 (LdrpMapResourceFile.c)
 *     PopFlushVolumeWorker @ 0x14040B800 (PopFlushVolumeWorker.c)
 *     PspIoRateEntryActivate @ 0x14041EE10 (PspIoRateEntryActivate.c)
 *     CmpOpenHiveFile @ 0x1404D7AAC (CmpOpenHiveFile.c)
 *     EtwpCreateDirectoryFile @ 0x1405586C8 (EtwpCreateDirectoryFile.c)
 *     CmpInitBackupHive @ 0x1405BCDC0 (CmpInitBackupHive.c)
 *     FsRtlpOpenDev @ 0x1405CE3E8 (FsRtlpOpenDev.c)
 *     PopGetPolicyDeviceObject @ 0x1405D6AA4 (PopGetPolicyDeviceObject.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140669F1C (CmpOpenFileWithExtremePrejudice.c)
 *     CmpSendBootDeviceUsageNotification @ 0x14066A940 (CmpSendBootDeviceUsageNotification.c)
 *     IopBootLogToFile @ 0x1406887C0 (IopBootLogToFile.c)
 *     SmKmStoreFileOpenVolume @ 0x140703880 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x1407051FC (SmpUtilsGetControlDevice.c)
 *     WheapWriteTriageDump @ 0x140724084 (WheapWriteTriageDump.c)
 *     KdPullRemoteFile @ 0x14078D0F8 (KdPullRemoteFile.c)
 *     EmInitSystem @ 0x140804CF0 (EmInitSystem.c)
 *     VhdiMountVhdFile @ 0x1408368E4 (VhdiMountVhdFile.c)
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
