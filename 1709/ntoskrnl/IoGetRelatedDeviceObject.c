/*
 * XREFs of IoGetRelatedDeviceObject @ 0x1400828F0
 * Callers:
 *     IoPageReadEx @ 0x140064A60 (IoPageReadEx.c)
 *     CcSetValidData @ 0x1400DE714 (CcSetValidData.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x1400EF610 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x1400EFF28 (FsRtlReleaseFileForModWrite.c)
 *     PnpGetRelatedTargetDevice @ 0x1400FBC60 (PnpGetRelatedTargetDevice.c)
 *     IoSynchronousPageWriteEx @ 0x140114DBC (IoSynchronousPageWriteEx.c)
 *     CcZeroData @ 0x14011E9B0 (CcZeroData.c)
 *     IoAsynchronousPageWrite @ 0x14012EDB0 (IoAsynchronousPageWrite.c)
 *     FsRtlGetFileExtents @ 0x1401E6CEC (FsRtlGetFileExtents.c)
 *     FsRtlMdlReadComplete @ 0x1401E6E50 (FsRtlMdlReadComplete.c)
 *     NtSetEaFile @ 0x14044F5E0 (NtSetEaFile.c)
 *     IopGetFileInformation @ 0x14048FE14 (IopGetFileInformation.c)
 *     IopQueryXxxInformation @ 0x14048FF44 (IopQueryXxxInformation.c)
 *     NtQueryVolumeInformationFile @ 0x140490C90 (NtQueryVolumeInformationFile.c)
 *     IopGetSetSecurityObject @ 0x140491160 (IopGetSetSecurityObject.c)
 *     NtLockFile @ 0x1404924A0 (NtLockFile.c)
 *     NtQueryInformationFile @ 0x14049A060 (NtQueryInformationFile.c)
 *     FsRtlReleaseFile @ 0x14049C430 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x14049C600 (FsRtlAcquireFileExclusiveCommon.c)
 *     IopXxxControlFile @ 0x1404AD980 (IopXxxControlFile.c)
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     IopCloseFile @ 0x1404BAD60 (IopCloseFile.c)
 *     IopDeleteFile @ 0x1404BB010 (IopDeleteFile.c)
 *     BuildQueryDirectoryIrp @ 0x1404CB2D0 (BuildQueryDirectoryIrp.c)
 *     CmpFileFlushAndPurge @ 0x1404E410C (CmpFileFlushAndPurge.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404E736C (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404E75A8 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlGetFileSize @ 0x1404FA2F0 (FsRtlGetFileSize.c)
 *     NtWriteFile @ 0x140505350 (NtWriteFile.c)
 *     IopGetSetObjectId @ 0x140558E64 (IopGetSetObjectId.c)
 *     IoGetDeviceObjectPointer @ 0x140560DB0 (IoGetDeviceObjectPointer.c)
 *     NtReadFileScatter @ 0x1405616E4 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x140561D0C (NtWriteFileGather.c)
 *     NtReadFile @ 0x140562BE0 (NtReadFile.c)
 *     FsRtlSetKernelEaFile @ 0x14056B890 (FsRtlSetKernelEaFile.c)
 *     FsRtlSetFileSize @ 0x14056C05C (FsRtlSetFileSize.c)
 *     FsRtlKernelFsControlFile @ 0x14056C170 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x14056C480 (FsRtlQueryKernelEaFile.c)
 *     NtUnlockFile @ 0x14056D1B0 (NtUnlockFile.c)
 *     IopParseFile @ 0x140570560 (IopParseFile.c)
 *     NtQueryEaFile @ 0x140572CD0 (NtQueryEaFile.c)
 *     NtFlushBuffersFileEx @ 0x140575154 (NtFlushBuffersFileEx.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140582FC0 (NtNotifyChangeDirectoryFileEx.c)
 *     IopOpenLinkOrRenameTarget @ 0x140587A24 (IopOpenLinkOrRenameTarget.c)
 *     IopGetBasicInformationFile @ 0x140587C5C (IopGetBasicInformationFile.c)
 *     CcMdlReadComplete @ 0x1405981C0 (CcMdlReadComplete.c)
 *     FsRtlQueryCachedVdl @ 0x140598F30 (FsRtlQueryCachedVdl.c)
 *     IoSetInformation @ 0x14059BCF0 (IoSetInformation.c)
 *     FsRtlPrepareMdlWriteEx @ 0x14059C6D0 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlPrepareMdlWrite @ 0x14059C750 (FsRtlPrepareMdlWrite.c)
 *     FsRtlMdlReadEx @ 0x14059C7F0 (FsRtlMdlReadEx.c)
 *     FsRtlMdlRead @ 0x14059C870 (FsRtlMdlRead.c)
 *     CcMdlWriteComplete @ 0x14059D840 (CcMdlWriteComplete.c)
 *     IopCopyOffloadCapable @ 0x14059E01C (IopCopyOffloadCapable.c)
 *     MiCreatePagingFile @ 0x1405D3FF0 (MiCreatePagingFile.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x1405D4884 (FsRtlIssueFileNotificationFsctl.c)
 *     NtSetVolumeInformationFile @ 0x1405E06C0 (NtSetVolumeInformationFile.c)
 *     WmipGetFilePDO @ 0x1405E5190 (WmipGetFilePDO.c)
 *     PiPagePathSetState @ 0x1405F037C (PiPagePathSetState.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x1406AFDC8 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlMdlWriteComplete @ 0x1406B0310 (FsRtlMdlWriteComplete.c)
 *     FsRtlQueryInformationFile @ 0x1406B0F60 (FsRtlQueryInformationFile.c)
 *     IopGetVolumeId @ 0x1406B5074 (IopGetVolumeId.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406B5E40 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetRemoteLink @ 0x1406B670C (IopSetRemoteLink.c)
 *     IoAttachDevice @ 0x1406B6EA0 (IoAttachDevice.c)
 *     NtQueryQuotaInformationFile @ 0x1406B9540 (NtQueryQuotaInformationFile.c)
 *     IopFreeBandwidthContract @ 0x1406BD638 (IopFreeBandwidthContract.c)
 *     PopGetPolicyDeviceObject @ 0x140706E40 (PopGetPolicyDeviceObject.c)
 *     RawSetInformation @ 0x14071D900 (RawSetInformation.c)
 *     SmKmIsVolumeIoPossible @ 0x14073A558 (SmKmIsVolumeIoPossible.c)
 *     SmKmSendUsageNotification @ 0x14073AE30 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileOpenVolume @ 0x14073BB84 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x14073D4CC (SmpUtilsGetControlDevice.c)
 *     VhdiMountVhdFile @ 0x14086DB14 (VhdiMountVhdFile.c)
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
