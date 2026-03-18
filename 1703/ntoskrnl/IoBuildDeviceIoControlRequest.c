/*
 * XREFs of IoBuildDeviceIoControlRequest @ 0x14004AAA0
 * Callers:
 *     NtApphelpCacheControl @ 0x1404291C4 (NtApphelpCacheControl.c)
 *     IopGetSetObjectId @ 0x140452EB8 (IopGetSetObjectId.c)
 *     FsRtlQueryCachedVdl @ 0x14045D030 (FsRtlQueryCachedVdl.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x140462D04 (ExpHwidSendSynchronousIrpToDevice.c)
 *     IoVolumeDeviceToDosName @ 0x140462E40 (IoVolumeDeviceToDosName.c)
 *     IoVolumeDeviceToGuidPath @ 0x140570EA0 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140570FF0 (IoVolumeDeviceNameToGuidPath.c)
 *     FsRtlIssueDeviceIoControl @ 0x1405734E0 (FsRtlIssueDeviceIoControl.c)
 *     FsRtlBalanceReads @ 0x1405754E0 (FsRtlBalanceReads.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14058537C (FsRtlIssueFileNotificationFsctl.c)
 *     RawPerformDevIoCtrl @ 0x14059AE74 (RawPerformDevIoCtrl.c)
 *     IopLoadFileSystemDriver @ 0x14059B690 (IopLoadFileSystemDriver.c)
 *     IopCreateArcName @ 0x14059C120 (IopCreateArcName.c)
 *     ?Control@PC_ENVIRONMENT@@SAJPEAXK0K0K@Z @ 0x1405C24F8 (-Control@PC_ENVIRONMENT@@SAJPEAXK0K0K@Z.c)
 *     IopGetVolumeId @ 0x14068908C (IopGetVolumeId.c)
 *     IopInvalidateVolumesForDevice @ 0x1406894B8 (IopInvalidateVolumesForDevice.c)
 *     IopSetRemoteLink @ 0x14068AAC8 (IopSetRemoteLink.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140691114 (IopIssueSystemEnvironmentRequest.c)
 *     RawQueryFsSizeInfo @ 0x1406E5124 (RawQueryFsSizeInfo.c)
 *     SmKmSendDeviceControl @ 0x140702A78 (SmKmSendDeviceControl.c)
 *     VhdiVerifyBootDisk @ 0x1407473A0 (VhdiVerifyBootDisk.c)
 * Callees:
 *     IopBuildDeviceIoControlRequest @ 0x14004A740 (IopBuildDeviceIoControlRequest.c)
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

  return IopBuildDeviceIoControlRequest(
           IoControlCode,
           (__int64)DeviceObject,
           InputBuffer,
           InputBufferLength,
           OutputBuffer,
           OutputBufferLength,
           InternalDeviceIoControl,
           Event,
           IoStatusBlock,
           retaddr);
}
