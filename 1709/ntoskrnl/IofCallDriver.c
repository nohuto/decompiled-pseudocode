/*
 * XREFs of IofCallDriver @ 0x140082560
 * Callers:
 *     IoCallDriverWithTracing @ 0x1400611F4 (IoCallDriverWithTracing.c)
 *     IoPageReadEx @ 0x140064A60 (IoPageReadEx.c)
 *     PopQueueQuerySetIrp @ 0x1400B38D4 (PopQueueQuerySetIrp.c)
 *     CcSetValidData @ 0x1400DE714 (CcSetValidData.c)
 *     IoSynchronousPageWriteEx @ 0x140114DBC (IoSynchronousPageWriteEx.c)
 *     PopDequeueQuerySetIrp @ 0x140123128 (PopDequeueQuerySetIrp.c)
 *     IoSynchronousCallDriver @ 0x140125800 (IoSynchronousCallDriver.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x14012B770 (FsRtlGetVirtualDiskNestingLevel.c)
 *     IoAsynchronousPageWrite @ 0x14012EDB0 (IoAsynchronousPageWrite.c)
 *     PoCallDriver @ 0x140131850 (PoCallDriver.c)
 *     SmKmIssueVolumeIo @ 0x140273624 (SmKmIssueVolumeIo.c)
 *     IoShutdownSystem @ 0x14042A6B4 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x14042A9E4 (IopShutdownBaseFileSystems.c)
 *     IopGetFileInformation @ 0x14048FE14 (IopGetFileInformation.c)
 *     IopQueryXxxInformation @ 0x14048FF44 (IopQueryXxxInformation.c)
 *     IopGetSetSecurityObject @ 0x140491160 (IopGetSetSecurityObject.c)
 *     NtQueryInformationFile @ 0x14049A060 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x1404AD220 (IopSynchronousServiceTail.c)
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     IopCloseFile @ 0x1404BAD60 (IopCloseFile.c)
 *     IopDeleteFile @ 0x1404BB010 (IopDeleteFile.c)
 *     CmpFileFlushAndPurge @ 0x1404E410C (CmpFileFlushAndPurge.c)
 *     CmpGetVolumeClusterSize @ 0x1404E4280 (CmpGetVolumeClusterSize.c)
 *     FsRtlGetFileSize @ 0x1404FA2F0 (FsRtlGetFileSize.c)
 *     PnpQueryInterface @ 0x14051AEB4 (PnpQueryInterface.c)
 *     IopSynchronousCall @ 0x14051CF64 (IopSynchronousCall.c)
 *     WmipForwardWmiIrp @ 0x14051F140 (WmipForwardWmiIrp.c)
 *     RawReadWriteDeviceControl @ 0x140547214 (RawReadWriteDeviceControl.c)
 *     PnpAsynchronousCall @ 0x1405532A4 (PnpAsynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x1405580F0 (IopFilterResourceRequirementsCall.c)
 *     IopGetSetObjectId @ 0x140558E64 (IopGetSetObjectId.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x14055FE74 (ExpHwidSendSynchronousIrpToDevice.c)
 *     IopMountVolume @ 0x14055FFAC (IopMountVolume.c)
 *     IoVolumeDeviceToGuidPath @ 0x140560690 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1405607E0 (IoVolumeDeviceNameToGuidPath.c)
 *     IoVolumeDeviceToDosName @ 0x140560B00 (IoVolumeDeviceToDosName.c)
 *     NtApphelpCacheControl @ 0x140560FD4 (NtApphelpCacheControl.c)
 *     FsRtlSetKernelEaFile @ 0x14056B890 (FsRtlSetKernelEaFile.c)
 *     FsRtlSetFileSize @ 0x14056C05C (FsRtlSetFileSize.c)
 *     FsRtlKernelFsControlFile @ 0x14056C170 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x14056C480 (FsRtlQueryKernelEaFile.c)
 *     FsRtlIssueDeviceIoControl @ 0x140589080 (FsRtlIssueDeviceIoControl.c)
 *     FsRtlQueryCachedVdl @ 0x140598F30 (FsRtlQueryCachedVdl.c)
 *     IoSetInformation @ 0x14059BCF0 (IoSetInformation.c)
 *     FsRtlBalanceReads @ 0x14059D8C0 (FsRtlBalanceReads.c)
 *     IopCreateArcName @ 0x1405C8AA8 (IopCreateArcName.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x1405C9450 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x1405D4884 (FsRtlIssueFileNotificationFsctl.c)
 *     IopInvalidateVolumesForDevice @ 0x1405E359C (IopInvalidateVolumesForDevice.c)
 *     PiPagePathSetState @ 0x1405F037C (PiPagePathSetState.c)
 *     IopLoadFileSystemDriver @ 0x1405F28C8 (IopLoadFileSystemDriver.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x1406AFDC8 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x1406B0F60 (FsRtlQueryInformationFile.c)
 *     IopGetVolumeId @ 0x1406B5074 (IopGetVolumeId.c)
 *     IopSetRemoteLink @ 0x1406B670C (IopSetRemoteLink.c)
 *     IoVerifyVolume @ 0x1406B7D20 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentCallout @ 0x1406BCE30 (IopIssueSystemEnvironmentCallout.c)
 *     IopFreeBandwidthContract @ 0x1406BD638 (IopFreeBandwidthContract.c)
 *     IopEjectDevice @ 0x1406D25EC (IopEjectDevice.c)
 *     PopBatteryQueryStatus @ 0x1406FE62C (PopBatteryQueryStatus.c)
 *     PopBatteryWaitTag @ 0x1406FEC60 (PopBatteryWaitTag.c)
 *     PopThermalWorker @ 0x140700090 (PopThermalWorker.c)
 *     PopFanWorker @ 0x140707450 (PopFanWorker.c)
 *     RawPerformDevIoCtrl @ 0x14071D494 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x14071D5D0 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x14071D9F8 (RawQueryFileSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x14073921C (SmStorePhysicalRequestIssue.c)
 *     SmKmSendDeviceControl @ 0x14073AD7C (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x14073AE30 (SmKmSendUsageNotification.c)
 *     VhdiVerifyBootDisk @ 0x140789BCC (VhdiVerifyBootDisk.c)
 *     VfIrpSendSynchronousIrp @ 0x1407B09A0 (VfIrpSendSynchronousIrp.c)
 *     ViFilterDispatchGeneric @ 0x1407C2C50 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x1407C2D20 (ViFilterDispatchPnp.c)
 *     IopAssignBootDriveLetter @ 0x14084468C (IopAssignBootDriveLetter.c)
 *     IopCreateArcNamesCd @ 0x140851E2C (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140869F24 (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x14086DB14 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x14086E400 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x14086E5E8 (SbpStartLanman.c)
 * Callees:
 *     IopPoHandleIrp @ 0x14012A7AC (IopPoHandleIrp.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     IopPerfCallDriver @ 0x1401FB3F4 (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x1407A4AE8 (IovCallDriver.c)
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
