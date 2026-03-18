/*
 * XREFs of IoBuildDeviceIoControlRequest @ 0x14012A5C0
 * Callers:
 *     NtApphelpCacheControl @ 0x140493478 (NtApphelpCacheControl.c)
 *     IoVolumeDeviceToGuidPath @ 0x140495E00 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140495F50 (IoVolumeDeviceNameToGuidPath.c)
 *     IoVolumeDeviceToDosName @ 0x140496270 (IoVolumeDeviceToDosName.c)
 *     IopGetSetObjectId @ 0x14057E900 (IopGetSetObjectId.c)
 *     FsRtlIssueDeviceIoControl @ 0x1405E1EB0 (FsRtlIssueDeviceIoControl.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x1405E3C04 (ExpHwidSendSynchronousIrpToDevice.c)
 *     FsRtlQueryCachedVdl @ 0x1405E60C0 (FsRtlQueryCachedVdl.c)
 *     FsRtlBalanceReads @ 0x1405E9190 (FsRtlBalanceReads.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x1405F2000 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopInvalidateVolumesForDevice @ 0x1405F212C (IopInvalidateVolumesForDevice.c)
 *     IopLoadFileSystemDriver @ 0x1405F3F9C (IopLoadFileSystemDriver.c)
 *     IopCreateArcName @ 0x1406031D8 (IopCreateArcName.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140613450 (FsRtlIssueFileNotificationFsctl.c)
 *     IopGetVolumeId @ 0x140719D20 (IopGetVolumeId.c)
 *     IopSetRemoteLink @ 0x14071B3F8 (IopSetRemoteLink.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140721E04 (IopIssueSystemEnvironmentRequest.c)
 *     RawPerformDevIoCtrl @ 0x140780CC4 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x140780E00 (RawQueryFsSizeInfo.c)
 *     SmKmSendDeviceControl @ 0x14079DD80 (SmKmSendDeviceControl.c)
 *     VhdiVerifyBootDisk @ 0x1407F608C (VhdiVerifyBootDisk.c)
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x14012A300 (IopBuildDeviceIoControlRequest.c)
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
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  return (PIRP)IopBuildDeviceIoControlRequest(
                 IoControlCode,
                 (__int64)DeviceObject,
                 InputBuffer,
                 InputBufferLength,
                 OutputBuffer,
                 OutputBufferLength,
                 InternalDeviceIoControl,
                 (__int64)Event,
                 (__int64)IoStatusBlock,
                 retaddr);
}
