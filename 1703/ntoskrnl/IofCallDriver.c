/*
 * XREFs of IofCallDriver @ 0x1400F1390
 * Callers:
 *     IoSynchronousCallDriver @ 0x14002FA10 (IoSynchronousCallDriver.c)
 *     IoAsynchronousPageWrite @ 0x1400369F8 (IoAsynchronousPageWrite.c)
 *     IoCallDriverWithTracing @ 0x14004AEC4 (IoCallDriverWithTracing.c)
 *     IoPageReadEx @ 0x14004AFE0 (IoPageReadEx.c)
 *     CcSetValidData @ 0x14008142C (CcSetValidData.c)
 *     IoSynchronousPageWriteEx @ 0x14012C59C (IoSynchronousPageWriteEx.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140135BE0 (FsRtlGetVirtualDiskNestingLevel.c)
 *     PopDequeueQuerySetIrp @ 0x140144CE4 (PopDequeueQuerySetIrp.c)
 *     PopQueueQuerySetIrp @ 0x140146394 (PopQueueQuerySetIrp.c)
 *     PoCallDriver @ 0x14014A0B0 (PoCallDriver.c)
 *     SmKmIssueVolumeIo @ 0x14024DE44 (SmKmIssueVolumeIo.c)
 *     IoShutdownSystem @ 0x140415678 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1404159A4 (IopShutdownBaseFileSystems.c)
 *     RawReadWriteDeviceControl @ 0x140421BE8 (RawReadWriteDeviceControl.c)
 *     NtApphelpCacheControl @ 0x1404291C4 (NtApphelpCacheControl.c)
 *     FsRtlQueryKernelEaFile @ 0x1404418D0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1404427D0 (FsRtlKernelFsControlFile.c)
 *     IopGetSetObjectId @ 0x140452EB8 (IopGetSetObjectId.c)
 *     FsRtlSetKernelEaFile @ 0x140454DC0 (FsRtlSetKernelEaFile.c)
 *     FsRtlSetFileSize @ 0x140459F80 (FsRtlSetFileSize.c)
 *     FsRtlQueryCachedVdl @ 0x14045D030 (FsRtlQueryCachedVdl.c)
 *     IoSetInformation @ 0x14045D250 (IoSetInformation.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x140462D04 (ExpHwidSendSynchronousIrpToDevice.c)
 *     IoVolumeDeviceToDosName @ 0x140462E40 (IoVolumeDeviceToDosName.c)
 *     IopGetSetSecurityObject @ 0x140482710 (IopGetSetSecurityObject.c)
 *     FsRtlGetFileSize @ 0x140493F40 (FsRtlGetFileSize.c)
 *     WmipForwardWmiIrp @ 0x1404BEDA0 (WmipForwardWmiIrp.c)
 *     CmpGetVolumeClusterSize @ 0x1404D8B8C (CmpGetVolumeClusterSize.c)
 *     CmpFileFlushAndPurge @ 0x1404DB67C (CmpFileFlushAndPurge.c)
 *     PnpAsynchronousCall @ 0x1404DB8E0 (PnpAsynchronousCall.c)
 *     PnpQueryInterface @ 0x1404DDD80 (PnpQueryInterface.c)
 *     IopSynchronousCall @ 0x1404DDF94 (IopSynchronousCall.c)
 *     IopGetFileInformation @ 0x1404FC060 (IopGetFileInformation.c)
 *     IopDeleteFile @ 0x14051E790 (IopDeleteFile.c)
 *     IopCloseFile @ 0x140527CA0 (IopCloseFile.c)
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 *     IopSynchronousServiceTail @ 0x14053A760 (IopSynchronousServiceTail.c)
 *     IopQueryXxxInformation @ 0x14053E758 (IopQueryXxxInformation.c)
 *     IopFilterResourceRequirementsCall @ 0x14055BFFC (IopFilterResourceRequirementsCall.c)
 *     IopMountVolume @ 0x140560E6C (IopMountVolume.c)
 *     IoVolumeDeviceToGuidPath @ 0x140570EA0 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140570FF0 (IoVolumeDeviceNameToGuidPath.c)
 *     FsRtlIssueDeviceIoControl @ 0x1405734E0 (FsRtlIssueDeviceIoControl.c)
 *     FsRtlBalanceReads @ 0x1405754E0 (FsRtlBalanceReads.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14058537C (FsRtlIssueFileNotificationFsctl.c)
 *     RawQueryFileSystemInformation @ 0x14059ACD8 (RawQueryFileSystemInformation.c)
 *     RawPerformDevIoCtrl @ 0x14059AE74 (RawPerformDevIoCtrl.c)
 *     IopLoadFileSystemDriver @ 0x14059B690 (IopLoadFileSystemDriver.c)
 *     IopCreateArcName @ 0x14059C120 (IopCreateArcName.c)
 *     ?Control@PC_ENVIRONMENT@@SAJPEAXK0K0K@Z @ 0x1405C24F8 (-Control@PC_ENVIRONMENT@@SAJPEAXK0K0K@Z.c)
 *     PiPagePathSetState @ 0x1405D3A60 (PiPagePathSetState.c)
 *     PopThermalWorker @ 0x1405D7C20 (PopThermalWorker.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x1406849D8 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x140685B40 (FsRtlQueryInformationFile.c)
 *     IopGetVolumeId @ 0x14068908C (IopGetVolumeId.c)
 *     IopInvalidateVolumesForDevice @ 0x1406894B8 (IopInvalidateVolumesForDevice.c)
 *     IopSetRemoteLink @ 0x14068AAC8 (IopSetRemoteLink.c)
 *     IoVerifyVolume @ 0x14068BEE0 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentCallout @ 0x1406910F0 (IopIssueSystemEnvironmentCallout.c)
 *     IopFreeBandwidthContract @ 0x1406918FC (IopFreeBandwidthContract.c)
 *     IopEjectDevice @ 0x1406A792C (IopEjectDevice.c)
 *     PopBatteryQueryStatus @ 0x1406CA7FC (PopBatteryQueryStatus.c)
 *     PopBatteryWaitTag @ 0x1406CAD44 (PopBatteryWaitTag.c)
 *     PopFanWorker @ 0x1406CF830 (PopFanWorker.c)
 *     RawQueryFsSizeInfo @ 0x1406E5124 (RawQueryFsSizeInfo.c)
 *     SmStorePhysicalRequestIssue @ 0x140701150 (SmStorePhysicalRequestIssue.c)
 *     SmKmSendDeviceControl @ 0x140702A78 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x140702B2C (SmKmSendUsageNotification.c)
 *     VhdiVerifyBootDisk @ 0x1407473A0 (VhdiVerifyBootDisk.c)
 *     VfIrpSendSynchronousIrp @ 0x14076EB80 (VfIrpSendSynchronousIrp.c)
 *     ViFilterDispatchGeneric @ 0x140780AA0 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x140780B70 (ViFilterDispatchPnp.c)
 *     IopCreateArcNamesCd @ 0x1407F6A7C (IopCreateArcNamesCd.c)
 *     IopAssignBootDriveLetter @ 0x1407FAA40 (IopAssignBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140832E04 (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x1408368E4 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x1408371D0 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1408373B8 (SbpStartLanman.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     IopPerfCallDriver @ 0x1401F5614 (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x140762E58 (IovCallDriver.c)
 */

NTSTATUS __stdcall IofCallDriver(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *v2; // rax
  UCHAR MajorFunction; // r8

  if ( IopDispatchCallDriver )
  {
    if ( IopDispatchCallDriver == 3 )
      return IopPerfCallDriver(DeviceObject);
    else
      return IovCallDriver(DeviceObject);
  }
  else
  {
    if ( --Irp->CurrentLocation <= 0 )
      KeBugCheckEx(0x35u, (ULONG_PTR)Irp, 0LL, 0LL, 0LL);
    v2 = Irp->Tail.Overlay.CurrentStackLocation - 1;
    Irp->Tail.Overlay.CurrentStackLocation = v2;
    MajorFunction = v2->MajorFunction;
    v2->DeviceObject = DeviceObject;
    if ( MajorFunction == 22 && (unsigned __int8)(v2->MinorFunction - 2) <= 1u )
      return IopPoHandleIrp(Irp);
    else
      return ((__int64 (__fastcall *)(PDEVICE_OBJECT))DeviceObject->DriverObject->MajorFunction[MajorFunction])(DeviceObject);
  }
}
