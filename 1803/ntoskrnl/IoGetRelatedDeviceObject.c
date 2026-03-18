/*
 * XREFs of IoGetRelatedDeviceObject @ 0x1400FE1C0
 * Callers:
 *     PnpGetRelatedTargetDevice @ 0x140006DB4 (PnpGetRelatedTargetDevice.c)
 *     CcSetValidData @ 0x1400074E4 (CcSetValidData.c)
 *     IoPageReadEx @ 0x140048610 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140048838 (IoSynchronousPageWriteEx.c)
 *     CcZeroData @ 0x140098570 (CcZeroData.c)
 *     IoAsynchronousPageWrite @ 0x1400CCE90 (IoAsynchronousPageWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x1401346A0 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x1401352E8 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlGetFileExtents @ 0x140224358 (FsRtlGetFileExtents.c)
 *     FsRtlMdlReadComplete @ 0x1402244C0 (FsRtlMdlReadComplete.c)
 *     IoGetDeviceObjectPointer @ 0x140496520 (IoGetDeviceObjectPointer.c)
 *     CmpFileFlushAndPurge @ 0x14049968C (CmpFileFlushAndPurge.c)
 *     IopQueryXxxInformation @ 0x1404A51B8 (IopQueryXxxInformation.c)
 *     IopGetFileInformation @ 0x1404A5514 (IopGetFileInformation.c)
 *     FsRtlGetFileSize @ 0x1404BF2F0 (FsRtlGetFileSize.c)
 *     FsRtlReleaseFile @ 0x1404C1550 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1404C1720 (FsRtlAcquireFileExclusiveCommon.c)
 *     NtQueryVolumeInformationFile @ 0x1404D0BE0 (NtQueryVolumeInformationFile.c)
 *     NtWriteFile @ 0x1404D10C0 (NtWriteFile.c)
 *     IopGetSetSecurityObject @ 0x1404D2090 (IopGetSetSecurityObject.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404E0808 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404E0A44 (FsRtlAcquireFileForCcFlushEx.c)
 *     NtLockFile @ 0x1404E39A0 (NtLockFile.c)
 *     NtReadFile @ 0x14052A160 (NtReadFile.c)
 *     FsRtlSetFileSize @ 0x1405558FC (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x140555A10 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140555BA0 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140555EA0 (FsRtlQueryKernelEaFile.c)
 *     NtUnlockFile @ 0x140557DC0 (NtUnlockFile.c)
 *     IopParseFile @ 0x140560200 (IopParseFile.c)
 *     NtFlushBuffersFileEx @ 0x140560E8C (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x140564750 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140572550 (NtNotifyChangeDirectoryFileEx.c)
 *     IopOpenLinkOrRenameTarget @ 0x140576138 (IopOpenLinkOrRenameTarget.c)
 *     IopGetBasicInformationFile @ 0x14057637C (IopGetBasicInformationFile.c)
 *     FsRtlPrepareMdlWriteEx @ 0x14057C7F0 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlPrepareMdlWrite @ 0x14057C870 (FsRtlPrepareMdlWrite.c)
 *     FsRtlMdlReadEx @ 0x14057C910 (FsRtlMdlReadEx.c)
 *     FsRtlMdlRead @ 0x14057C990 (FsRtlMdlRead.c)
 *     CcMdlReadComplete @ 0x14057D310 (CcMdlReadComplete.c)
 *     IopGetSetObjectId @ 0x14057E900 (IopGetSetObjectId.c)
 *     CcMdlWriteComplete @ 0x14057F0C0 (CcMdlWriteComplete.c)
 *     NtWriteFileGather @ 0x140580364 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1405810E8 (NtReadFileScatter.c)
 *     IopCopyOffloadCapable @ 0x140583A90 (IopCopyOffloadCapable.c)
 *     BuildQueryDirectoryIrp @ 0x140596100 (BuildQueryDirectoryIrp.c)
 *     NtQueryInformationFile @ 0x140596F20 (NtQueryInformationFile.c)
 *     IopXxxControlFile @ 0x1405A1A20 (IopXxxControlFile.c)
 *     IopCloseFile @ 0x1405B12E0 (IopCloseFile.c)
 *     IopDeleteFile @ 0x1405B15A0 (IopDeleteFile.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 *     NtSetVolumeInformationFile @ 0x1405E59A0 (NtSetVolumeInformationFile.c)
 *     FsRtlQueryCachedVdl @ 0x1405E60C0 (FsRtlQueryCachedVdl.c)
 *     IoSetInformation @ 0x1405E7BF0 (IoSetInformation.c)
 *     WmipGetFilePDO @ 0x140613250 (WmipGetFilePDO.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140613450 (FsRtlIssueFileNotificationFsctl.c)
 *     PopGetPolicyDeviceObject @ 0x140626D60 (PopGetPolicyDeviceObject.c)
 *     MiCreatePagingFile @ 0x14063BE50 (MiCreatePagingFile.c)
 *     PiPagePathSetState @ 0x14064FDDC (PiPagePathSetState.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140714570 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlMdlWriteComplete @ 0x140714AB0 (FsRtlMdlWriteComplete.c)
 *     FsRtlQueryInformationFile @ 0x140715A40 (FsRtlQueryInformationFile.c)
 *     IopGetVolumeId @ 0x140719D20 (IopGetVolumeId.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14071AB3C (IopSetEaOrQuotaInformationFile.c)
 *     IopSetRemoteLink @ 0x14071B3F8 (IopSetRemoteLink.c)
 *     IoAttachDevice @ 0x14071BB20 (IoAttachDevice.c)
 *     NtSetEaFile @ 0x14071DE80 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14071E4E0 (NtQueryQuotaInformationFile.c)
 *     IopFreeBandwidthContract @ 0x1407225F8 (IopFreeBandwidthContract.c)
 *     RawSetInformation @ 0x14078108C (RawSetInformation.c)
 *     SmKmIsVolumeIoPossible @ 0x14079D55C (SmKmIsVolumeIoPossible.c)
 *     SmKmSendUsageNotification @ 0x14079DE34 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileOpenVolume @ 0x14079EB88 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x1407A04CC (SmpUtilsGetControlDevice.c)
 *     VhdiMountVhdFile @ 0x1408E2874 (VhdiMountVhdFile.c)
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __stdcall IoGetRelatedDeviceObject(PFILE_OBJECT FileObject)
{
  PVPB Vpb; // rax
  PDEVICE_OBJECT result; // rax
  struct _DEVICE_OBJECT *AttachedDevice; // rdx
  _QWORD *FileObjectExtension; // r8
  PVPB v5; // rax
  PDEVICE_OBJECT *v6; // rcx

  Vpb = FileObject->Vpb;
  if ( (!Vpb || (result = Vpb->DeviceObject) == 0LL)
    && ((FileObject->Flags & 0x800) != 0
     || (v5 = FileObject->DeviceObject->Vpb) == 0LL
     || (result = v5->DeviceObject) == 0LL) )
  {
    result = FileObject->DeviceObject;
  }
  AttachedDevice = result->AttachedDevice;
  if ( AttachedDevice )
  {
    FileObjectExtension = FileObject->FileObjectExtension;
    if ( FileObjectExtension
      && FileObjectExtension != IopRevocationExtension
      && (v6 = (PDEVICE_OBJECT *)FileObjectExtension[2]) != 0LL
      && *v6 )
    {
      while ( result != *v6 )
      {
        result = result->AttachedDevice;
        if ( !result )
          goto LABEL_5;
      }
      return *v6;
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
