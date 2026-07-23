/*
 * XREFs of ZwOpenFile @ 0x14017E5A0
 * Callers:
 *     KsepShimDbChanged @ 0x14015689C (KsepShimDbChanged.c)
 *     DbgkPostModuleMessage @ 0x1401E1D28 (DbgkPostModuleMessage.c)
 *     BiLogFileOwnerProcess @ 0x140265F0C (BiLogFileOwnerProcess.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1404356CC (EtwpUpdateFileInfoDriverRegistration.c)
 *     MiCreateSectionForDriver @ 0x14045044C (MiCreateSectionForDriver.c)
 *     NtGetNlsSectionPtr @ 0x1404618FC (NtGetNlsSectionPtr.c)
 *     IoGetDeviceObjectPointer @ 0x1404630E0 (IoGetDeviceObjectPointer.c)
 *     ExpGetGlobalLocaleSection @ 0x14049A020 (ExpGetGlobalLocaleSection.c)
 *     KsepShimDbMapToMemory @ 0x1404AF86C (KsepShimDbMapToMemory.c)
 *     PiLookupInDDB @ 0x1404B3F94 (PiLookupInDDB.c)
 *     SiGetDiskPartitionInformation @ 0x140569A08 (SiGetDiskPartitionInformation.c)
 *     PopValidateHiberFileSize @ 0x14057B598 (PopValidateHiberFileSize.c)
 *     RtlLockBootStatusData @ 0x140585800 (RtlLockBootStatusData.c)
 *     BiGetNtPartitionPath @ 0x140589EB0 (BiGetNtPartitionPath.c)
 *     BiCreatePartitionDevice @ 0x14058C52C (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x14058C7F4 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetDriveLayoutInformation @ 0x14058CA00 (BiGetDriveLayoutInformation.c)
 *     BiIsVolumePartitionInformationRetained @ 0x14058CB8C (BiIsVolumePartitionInformationRetained.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14059828C (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PopDeleteHiberFile @ 0x14059BA44 (PopDeleteHiberFile.c)
 *     PspLocateSystemDll @ 0x1405B8A80 (PspLocateSystemDll.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140669F1C (CmpOpenFileWithExtremePrejudice.c)
 *     DbgkSendSystemDllMessages @ 0x14067E910 (DbgkSendSystemDllMessages.c)
 *     DbgkpSectionToFileHandle @ 0x140681A94 (DbgkpSectionToFileHandle.c)
 *     IopIsNotNativeDriverImage @ 0x140689768 (IopIsNotNativeDriverImage.c)
 *     IopValidateJunctionTarget @ 0x14068AC90 (IopValidateJunctionTarget.c)
 *     IoAttachDevice @ 0x14068B200 (IoAttachDevice.c)
 *     PpLastGoodDeleteFilesCallback @ 0x1406953E0 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x1406A8F58 (IopFileUtilClearAttributes.c)
 *     ExpGetDriveGeometry @ 0x140719858 (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x140719A74 (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x14071B9C4 (ExpTranslateNtPath.c)
 *     CMFFlushHitsFile @ 0x14072162C (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140721D50 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x1407252CC (ApiSetpLoadSchemaImage.c)
 *     BiGetPhysicalDriveName @ 0x140735AEC (BiGetPhysicalDriveName.c)
 *     SiGetDeviceNumberInformation @ 0x140738C54 (SiGetDeviceNumberInformation.c)
 *     SiGetDriveLayoutInformation @ 0x140738D80 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140738EE8 (SiIssueSynchronousIoctl.c)
 *     IopMarkBootPartition @ 0x1407FA5A0 (IopMarkBootPartition.c)
 *     IoInitSystemPreDrivers @ 0x1407FD20C (IoInitSystemPreDrivers.c)
 *     IopFileUtilRename @ 0x14080CD24 (IopFileUtilRename.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140826ABC (PopPdcCsCheckSystemVolumeDevice.c)
 *     IopApplySystemPartitionProt @ 0x1408332A0 (IopApplySystemPartitionProt.c)
 *     VhdiGetVolumeNumber @ 0x140836488 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x1408365E0 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x140836EAC (RamdiskStart.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG ShareAccess,
        ULONG OpenOptions)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
