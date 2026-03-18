/*
 * XREFs of IoBuildDeviceIoControlRequest @ 0x140060810
 * Callers:
 *     IopGetSetObjectId @ 0x140558E64 (IopGetSetObjectId.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x14055FE74 (ExpHwidSendSynchronousIrpToDevice.c)
 *     IoVolumeDeviceToGuidPath @ 0x140560690 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1405607E0 (IoVolumeDeviceNameToGuidPath.c)
 *     IoVolumeDeviceToDosName @ 0x140560B00 (IoVolumeDeviceToDosName.c)
 *     NtApphelpCacheControl @ 0x140560FD4 (NtApphelpCacheControl.c)
 *     FsRtlIssueDeviceIoControl @ 0x140589080 (FsRtlIssueDeviceIoControl.c)
 *     FsRtlQueryCachedVdl @ 0x140598F30 (FsRtlQueryCachedVdl.c)
 *     FsRtlBalanceReads @ 0x14059D8C0 (FsRtlBalanceReads.c)
 *     IopCreateArcName @ 0x1405C8AA8 (IopCreateArcName.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x1405C9450 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x1405D4884 (FsRtlIssueFileNotificationFsctl.c)
 *     IopInvalidateVolumesForDevice @ 0x1405E359C (IopInvalidateVolumesForDevice.c)
 *     IopLoadFileSystemDriver @ 0x1405F28C8 (IopLoadFileSystemDriver.c)
 *     IopGetVolumeId @ 0x1406B5074 (IopGetVolumeId.c)
 *     IopSetRemoteLink @ 0x1406B670C (IopSetRemoteLink.c)
 *     IopIssueSystemEnvironmentRequest @ 0x1406BCE54 (IopIssueSystemEnvironmentRequest.c)
 *     RawPerformDevIoCtrl @ 0x14071D494 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x14071D5D0 (RawQueryFsSizeInfo.c)
 *     SmKmSendDeviceControl @ 0x14073AD7C (SmKmSendDeviceControl.c)
 *     VhdiVerifyBootDisk @ 0x140789BCC (VhdiVerifyBootDisk.c)
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x140060870 (IopBuildDeviceIoControlRequest.c)
 */

PIRP __stdcall IoBuildDeviceIoControlRequest(
        ULONG IoControlCode,
        PDEVICE_OBJECT DeviceObject,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        BOOLEAN InternalDeviceIoControl,
        PKEVENT Event,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  void *retaddr; // [rsp+58h] [rbp+0h]

  return (PIRP)IopBuildDeviceIoControlRequest(
                 IoControlCode,
                 DeviceObject,
                 InputBuffer,
                 InputBufferLength,
                 OutputBuffer,
                 OutputBufferLength,
                 InternalDeviceIoControl,
                 Event,
                 IoStatusBlock,
                 retaddr);
}
