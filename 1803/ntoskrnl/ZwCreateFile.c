/*
 * XREFs of ZwCreateFile @ 0x1401A7F60
 * Callers:
 *     RtlFileMapInitializeByNtPath @ 0x14016195C (RtlFileMapInitializeByNtPath.c)
 *     LdrpMapResourceFile @ 0x14016D15C (LdrpMapResourceFile.c)
 *     PopFlushVolumeWorker @ 0x1404708F0 (PopFlushVolumeWorker.c)
 *     PspIoRateEntryActivate @ 0x140489D84 (PspIoRateEntryActivate.c)
 *     CmpOpenHiveFile @ 0x14049E1B8 (CmpOpenHiveFile.c)
 *     EtwpCreateDirectoryFile @ 0x1405882A8 (EtwpCreateDirectoryFile.c)
 *     PopGetPolicyDeviceObject @ 0x140626D60 (PopGetPolicyDeviceObject.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x140632BCC (CmpVolumeManagerGetContextForFilePath.c)
 *     CmpInitBackupHive @ 0x140633278 (CmpInitBackupHive.c)
 *     FsRtlpOpenDev @ 0x14064BCC0 (FsRtlpOpenDev.c)
 *     CmpVolumeContextStart @ 0x140651A04 (CmpVolumeContextStart.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x140653C70 (ExpGetSystemWriteConstraintInformation.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x1406F7790 (CmpOpenFileWithExtremePrejudice.c)
 *     IopBootLogToFile @ 0x1407193D0 (IopBootLogToFile.c)
 *     PiCreateDirectoryPath @ 0x14072497C (PiCreateDirectoryPath.c)
 *     SmKmStoreFileOpenVolume @ 0x14079EB88 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x1407A04CC (SmpUtilsGetControlDevice.c)
 *     WheapWriteTriageDump @ 0x1407CB834 (WheapWriteTriageDump.c)
 *     KdPullRemoteFile @ 0x140807430 (KdPullRemoteFile.c)
 *     BapdpProcessVsmKeyBlobs @ 0x1408A2EC0 (BapdpProcessVsmKeyBlobs.c)
 *     EmInitSystem @ 0x1408A92A4 (EmInitSystem.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x1408C0F30 (PiCreateDriverDataDirectoryRoot.c)
 *     VhdiMountVhdFile @ 0x1408E2874 (VhdiMountVhdFile.c)
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
