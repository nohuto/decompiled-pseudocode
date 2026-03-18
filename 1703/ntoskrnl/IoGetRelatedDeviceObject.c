/*
 * XREFs of IoGetRelatedDeviceObject @ 0x1400EDDF0
 * Callers:
 *     PnpGetRelatedTargetDevice @ 0x140005C74 (PnpGetRelatedTargetDevice.c)
 *     FsRtlReleaseFileForModWrite @ 0x1400153C0 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x140022B88 (FsRtlAcquireFileForModWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x1400369F8 (IoAsynchronousPageWrite.c)
 *     IoPageReadEx @ 0x14004AFE0 (IoPageReadEx.c)
 *     CcSetValidData @ 0x14008142C (CcSetValidData.c)
 *     IoSynchronousPageWriteEx @ 0x14012C59C (IoSynchronousPageWriteEx.c)
 *     FsRtlGetFileExtents @ 0x1401E2B1C (FsRtlGetFileExtents.c)
 *     FsRtlMdlReadComplete @ 0x1401E2C80 (FsRtlMdlReadComplete.c)
 *     NtUnlockFile @ 0x14043BA90 (NtUnlockFile.c)
 *     IopParseFile @ 0x14043E730 (IopParseFile.c)
 *     NtQueryEaFile @ 0x14043F120 (NtQueryEaFile.c)
 *     NtFlushBuffersFileEx @ 0x1404401B4 (NtFlushBuffersFileEx.c)
 *     FsRtlQueryKernelEaFile @ 0x1404418D0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1404427D0 (FsRtlKernelFsControlFile.c)
 *     NtNotifyChangeDirectoryFile @ 0x140445BB0 (NtNotifyChangeDirectoryFile.c)
 *     IopOpenLinkOrRenameTarget @ 0x140449118 (IopOpenLinkOrRenameTarget.c)
 *     IopGetBasicInformationFile @ 0x140449360 (IopGetBasicInformationFile.c)
 *     CcZeroData @ 0x14044A710 (CcZeroData.c)
 *     NtWriteFileGather @ 0x14044F2A0 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404507E0 (NtReadFileScatter.c)
 *     IopGetSetObjectId @ 0x140452EB8 (IopGetSetObjectId.c)
 *     CcMdlReadComplete @ 0x140452FD0 (CcMdlReadComplete.c)
 *     FsRtlSetKernelEaFile @ 0x140454DC0 (FsRtlSetKernelEaFile.c)
 *     FsRtlPrepareMdlWriteEx @ 0x140457D90 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlPrepareMdlWrite @ 0x140457E10 (FsRtlPrepareMdlWrite.c)
 *     FsRtlMdlReadEx @ 0x140457EB0 (FsRtlMdlReadEx.c)
 *     FsRtlMdlRead @ 0x140457F30 (FsRtlMdlRead.c)
 *     FsRtlSetFileSize @ 0x140459F80 (FsRtlSetFileSize.c)
 *     CcMdlWriteComplete @ 0x14045A440 (CcMdlWriteComplete.c)
 *     FsRtlQueryCachedVdl @ 0x14045D030 (FsRtlQueryCachedVdl.c)
 *     IoSetInformation @ 0x14045D250 (IoSetInformation.c)
 *     IopCopyOffloadCapable @ 0x14045D540 (IopCopyOffloadCapable.c)
 *     IoGetDeviceObjectPointer @ 0x1404630E0 (IoGetDeviceObjectPointer.c)
 *     BuildQueryDirectoryIrp @ 0x14047F470 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x1404812E0 (NtQueryVolumeInformationFile.c)
 *     NtWriteFile @ 0x1404818C0 (NtWriteFile.c)
 *     IopGetSetSecurityObject @ 0x140482710 (IopGetSetSecurityObject.c)
 *     NtLockFile @ 0x14048B220 (NtLockFile.c)
 *     FsRtlGetFileSize @ 0x140493F40 (FsRtlGetFileSize.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404C6C34 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404C6E70 (FsRtlAcquireFileForCcFlushEx.c)
 *     CmpFileFlushAndPurge @ 0x1404DB67C (CmpFileFlushAndPurge.c)
 *     IopGetFileInformation @ 0x1404FC060 (IopGetFileInformation.c)
 *     FsRtlReleaseFile @ 0x140510170 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x140510380 (FsRtlAcquireFileExclusiveCommon.c)
 *     IopDeleteFile @ 0x14051E790 (IopDeleteFile.c)
 *     IopCloseFile @ 0x140527CA0 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x14052BAD0 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x14052EC70 (NtQueryInformationFile.c)
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 *     IopQueryXxxInformation @ 0x14053E758 (IopQueryXxxInformation.c)
 *     NtReadFile @ 0x140566B00 (NtReadFile.c)
 *     NtSetVolumeInformationFile @ 0x140574C30 (NtSetVolumeInformationFile.c)
 *     WmipGetFilePDO @ 0x140584258 (WmipGetFilePDO.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14058537C (FsRtlIssueFileNotificationFsctl.c)
 *     MiCreatePagingFile @ 0x1405B967C (MiCreatePagingFile.c)
 *     PiPagePathSetState @ 0x1405D3A60 (PiPagePathSetState.c)
 *     PopGetPolicyDeviceObject @ 0x1405D6AA4 (PopGetPolicyDeviceObject.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x1406849D8 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlMdlWriteComplete @ 0x140684F20 (FsRtlMdlWriteComplete.c)
 *     FsRtlQueryInformationFile @ 0x140685B40 (FsRtlQueryInformationFile.c)
 *     IopGetVolumeId @ 0x14068908C (IopGetVolumeId.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14068A1D8 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetRemoteLink @ 0x14068AAC8 (IopSetRemoteLink.c)
 *     IoAttachDevice @ 0x14068B200 (IoAttachDevice.c)
 *     NtSetEaFile @ 0x14068D200 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14068D860 (NtQueryQuotaInformationFile.c)
 *     IopFreeBandwidthContract @ 0x1406918FC (IopFreeBandwidthContract.c)
 *     RawSetInformation @ 0x1406E5454 (RawSetInformation.c)
 *     SmKmIsVolumeIoPossible @ 0x140702254 (SmKmIsVolumeIoPossible.c)
 *     SmKmSendUsageNotification @ 0x140702B2C (SmKmSendUsageNotification.c)
 *     SmKmStoreFileOpenVolume @ 0x140703880 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x1407051FC (SmpUtilsGetControlDevice.c)
 *     VhdiMountVhdFile @ 0x1408368E4 (VhdiMountVhdFile.c)
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __stdcall IoGetRelatedDeviceObject(PFILE_OBJECT FileObject)
{
  PVPB Vpb; // rax
  PDEVICE_OBJECT result; // rax
  struct _DEVICE_OBJECT *AttachedDevice; // rcx
  _QWORD *FileObjectExtension; // r8
  PVPB v6; // rax
  PDEVICE_OBJECT *v7; // rdx

  Vpb = FileObject->Vpb;
  if ( (!Vpb || (result = Vpb->DeviceObject) == 0LL)
    && ((FileObject->Flags & 0x800) != 0
     || (v6 = FileObject->DeviceObject->Vpb) == 0LL
     || (result = v6->DeviceObject) == 0LL) )
  {
    result = FileObject->DeviceObject;
  }
  AttachedDevice = result->AttachedDevice;
  if ( AttachedDevice )
  {
    FileObjectExtension = FileObject->FileObjectExtension;
    if ( FileObjectExtension
      && FileObjectExtension != IopRevocationExtension
      && (v7 = (PDEVICE_OBJECT *)FileObjectExtension[2]) != 0LL
      && *v7 )
    {
      while ( result != *v7 )
      {
        result = result->AttachedDevice;
        if ( !result )
          goto LABEL_5;
      }
      return *v7;
    }
    else
    {
      do
      {
LABEL_5:
        result = AttachedDevice;
        AttachedDevice = AttachedDevice->AttachedDevice;
      }
      while ( AttachedDevice );
    }
  }
  return result;
}
