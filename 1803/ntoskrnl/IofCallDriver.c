/*
 * XREFs of IofCallDriver @ 0x1400FD990
 * Callers:
 *     CcSetValidData @ 0x1400074E4 (CcSetValidData.c)
 *     IoPageReadEx @ 0x140048610 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140048838 (IoSynchronousPageWriteEx.c)
 *     IoSynchronousCallDriver @ 0x1400C4040 (IoSynchronousCallDriver.c)
 *     IoAsynchronousPageWrite @ 0x1400CCE90 (IoAsynchronousPageWrite.c)
 *     IopCallDriverReference @ 0x1400EEF70 (IopCallDriverReference.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x14014BCC0 (FsRtlGetVirtualDiskNestingLevel.c)
 *     PopDequeueQuerySetIrp @ 0x140166088 (PopDequeueQuerySetIrp.c)
 *     PopQueueQuerySetIrp @ 0x140167738 (PopQueueQuerySetIrp.c)
 *     PoCallDriver @ 0x14016C610 (PoCallDriver.c)
 *     SmKmIssueVolumeIo @ 0x1402A73DC (SmKmIssueVolumeIo.c)
 *     IoShutdownSystem @ 0x1404812F8 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x140481518 (IopShutdownBaseFileSystems.c)
 *     NtApphelpCacheControl @ 0x140493478 (NtApphelpCacheControl.c)
 *     IopMountVolume @ 0x140493C24 (IopMountVolume.c)
 *     RawReadWriteDeviceControl @ 0x140494AB4 (RawReadWriteDeviceControl.c)
 *     IoVolumeDeviceToGuidPath @ 0x140495E00 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140495F50 (IoVolumeDeviceNameToGuidPath.c)
 *     IoVolumeDeviceToDosName @ 0x140496270 (IoVolumeDeviceToDosName.c)
 *     CmpGetVolumeClusterSize @ 0x140499488 (CmpGetVolumeClusterSize.c)
 *     CmpFileFlushAndPurge @ 0x14049968C (CmpFileFlushAndPurge.c)
 *     IopSynchronousCall @ 0x140499818 (IopSynchronousCall.c)
 *     IopQueryXxxInformation @ 0x1404A51B8 (IopQueryXxxInformation.c)
 *     IopGetFileInformation @ 0x1404A5514 (IopGetFileInformation.c)
 *     FsRtlGetFileSize @ 0x1404BF2F0 (FsRtlGetFileSize.c)
 *     IopGetSetSecurityObject @ 0x1404D2090 (IopGetSetSecurityObject.c)
 *     WmipForwardWmiIrp @ 0x14051BADC (WmipForwardWmiIrp.c)
 *     FsRtlSetFileSize @ 0x1405558FC (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x140555A10 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140555BA0 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140555EA0 (FsRtlQueryKernelEaFile.c)
 *     IopGetSetObjectId @ 0x14057E900 (IopGetSetObjectId.c)
 *     IopSynchronousServiceTail @ 0x14059D990 (IopSynchronousServiceTail.c)
 *     IopCloseFile @ 0x1405B12E0 (IopCloseFile.c)
 *     IopDeleteFile @ 0x1405B15A0 (IopDeleteFile.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 *     PnpQueryInterface @ 0x1405C5140 (PnpQueryInterface.c)
 *     IopFilterResourceRequirementsCall @ 0x1405DBF84 (IopFilterResourceRequirementsCall.c)
 *     FsRtlIssueDeviceIoControl @ 0x1405E1EB0 (FsRtlIssueDeviceIoControl.c)
 *     PnpAsynchronousCall @ 0x1405E2C94 (PnpAsynchronousCall.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x1405E3C04 (ExpHwidSendSynchronousIrpToDevice.c)
 *     FsRtlQueryCachedVdl @ 0x1405E60C0 (FsRtlQueryCachedVdl.c)
 *     IoSetInformation @ 0x1405E7BF0 (IoSetInformation.c)
 *     FsRtlBalanceReads @ 0x1405E9190 (FsRtlBalanceReads.c)
 *     ?Control@NT_DISK@@UEAAJKPEAXK0K@Z @ 0x1405F2000 (-Control@NT_DISK@@UEAAJKPEAXK0K@Z.c)
 *     IopInvalidateVolumesForDevice @ 0x1405F212C (IopInvalidateVolumesForDevice.c)
 *     IopLoadFileSystemDriver @ 0x1405F3F9C (IopLoadFileSystemDriver.c)
 *     IopCreateArcName @ 0x1406031D8 (IopCreateArcName.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140613450 (FsRtlIssueFileNotificationFsctl.c)
 *     PopThermalWorker @ 0x140643860 (PopThermalWorker.c)
 *     PopFanWorker @ 0x140643C80 (PopFanWorker.c)
 *     PiPagePathSetState @ 0x14064FDDC (PiPagePathSetState.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140714570 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlQueryInformationFile @ 0x140715A40 (FsRtlQueryInformationFile.c)
 *     IopGetVolumeId @ 0x140719D20 (IopGetVolumeId.c)
 *     IopSetRemoteLink @ 0x14071B3F8 (IopSetRemoteLink.c)
 *     IoVerifyVolume @ 0x14071C9D0 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentCallout @ 0x140721DE0 (IopIssueSystemEnvironmentCallout.c)
 *     IopFreeBandwidthContract @ 0x1407225F8 (IopFreeBandwidthContract.c)
 *     IopEjectDevice @ 0x14073A03C (IopEjectDevice.c)
 *     PopBatteryQueryStatus @ 0x140763EAC (PopBatteryQueryStatus.c)
 *     PopBatteryWaitTag @ 0x140764464 (PopBatteryWaitTag.c)
 *     RawPerformDevIoCtrl @ 0x140780CC4 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x140780E00 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x140781188 (RawQueryFileSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x14079C468 (SmStorePhysicalRequestIssue.c)
 *     SmKmSendDeviceControl @ 0x14079DD80 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x14079DE34 (SmKmSendUsageNotification.c)
 *     VhdiVerifyBootDisk @ 0x1407F608C (VhdiVerifyBootDisk.c)
 *     VfIrpSendSynchronousIrp @ 0x14081DB4C (VfIrpSendSynchronousIrp.c)
 *     ViFilterDispatchGeneric @ 0x1408301D0 (ViFilterDispatchGeneric.c)
 *     ViFilterDispatchPnp @ 0x1408302A0 (ViFilterDispatchPnp.c)
 *     IopAssignBootDriveLetter @ 0x1408B73FC (IopAssignBootDriveLetter.c)
 *     IopCreateArcNamesCd @ 0x1408C4DE0 (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x1408DE714 (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x1408E2874 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x1408E3160 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1408E3348 (SbpStartLanman.c)
 * Callees:
 *     IopPoHandleIrp @ 0x140166B0C (IopPoHandleIrp.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     IopPerfCallDriver @ 0x140238128 (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x140811AB4 (IovCallDriver.c)
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
