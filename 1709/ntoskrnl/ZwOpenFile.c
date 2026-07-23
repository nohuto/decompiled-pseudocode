/*
 * XREFs of ZwOpenFile @ 0x14017DF20
 * Callers:
 *     KsepShimDbChanged @ 0x1400B5B1C (KsepShimDbChanged.c)
 *     DbgkPostModuleMessage @ 0x1401E5EF4 (DbgkPostModuleMessage.c)
 *     BiLogFileOwnerProcess @ 0x1402901A4 (BiLogFileOwnerProcess.c)
 *     ExpGetGlobalLocaleSection @ 0x14045DD20 (ExpGetGlobalLocaleSection.c)
 *     KsepShimDbMapToMemory @ 0x1404F55B4 (KsepShimDbMapToMemory.c)
 *     MiCreateSectionForDriver @ 0x140542E78 (MiCreateSectionForDriver.c)
 *     PiLookupInDDB @ 0x14054487C (PiLookupInDDB.c)
 *     IoGetDeviceObjectPointer @ 0x140560DB0 (IoGetDeviceObjectPointer.c)
 *     SiGetDiskPartitionInformation @ 0x14057DF74 (SiGetDiskPartitionInformation.c)
 *     NtGetNlsSectionPtr @ 0x140593170 (NtGetNlsSectionPtr.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1405972DC (EtwpUpdateFileInfoDriverRegistration.c)
 *     RtlLockBootStatusData @ 0x1405ACB30 (RtlLockBootStatusData.c)
 *     PopDeleteHiberFile @ 0x1405ADA44 (PopDeleteHiberFile.c)
 *     BiGetNtPartitionPath @ 0x1405B0860 (BiGetNtPartitionPath.c)
 *     BiCreatePartitionDevice @ 0x1405B0C38 (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x1405B0F00 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetDriveLayoutInformation @ 0x1405B11DC (BiGetDriveLayoutInformation.c)
 *     BiIsVolumePartitionInformationRetained @ 0x1405B143C (BiIsVolumePartitionInformationRetained.c)
 *     PspLocateSystemDll @ 0x1405BF580 (PspLocateSystemDll.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1405E7F0C (IopFileUtilWalkDirectoryTreeHelper.c)
 *     CMFFlushHitsFile @ 0x1405EE9D0 (CMFFlushHitsFile.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140694600 (CmpOpenFileWithExtremePrejudice.c)
 *     DbgkSendSystemDllMessages @ 0x1406A9A4C (DbgkSendSystemDllMessages.c)
 *     DbgkpSectionToFileHandle @ 0x1406ACD5C (DbgkpSectionToFileHandle.c)
 *     IopIsNotNativeDriverImage @ 0x1406B5468 (IopIsNotNativeDriverImage.c)
 *     IopValidateJunctionTarget @ 0x1406B68DC (IopValidateJunctionTarget.c)
 *     IoAttachDevice @ 0x1406B6EA0 (IoAttachDevice.c)
 *     PpLastGoodDeleteFilesCallback @ 0x1406C11A0 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x1406D3ABC (IopFileUtilClearAttributes.c)
 *     PopValidateHiberFileSize @ 0x1406FC634 (PopValidateHiberFileSize.c)
 *     ExpGetDriveGeometry @ 0x14075905C (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x140759278 (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x14075B25C (ExpTranslateNtPath.c)
 *     CMFSystemThreadRoutine @ 0x1407618F0 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x140764D9C (ApiSetpLoadSchemaImage.c)
 *     BiGetPhysicalDriveName @ 0x140779F30 (BiGetPhysicalDriveName.c)
 *     SiGetDeviceNumberInformation @ 0x14077D3CC (SiGetDeviceNumberInformation.c)
 *     SiGetDriveLayoutInformation @ 0x14077D4F8 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x14077D660 (SiIssueSynchronousIoctl.c)
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140841C30 (IoInitSystemPreDrivers.c)
 *     IopMarkBootPartition @ 0x140844A20 (IopMarkBootPartition.c)
 *     IopFileUtilRename @ 0x140853724 (IopFileUtilRename.c)
 *     IopApplySystemPartitionProt @ 0x14086A3C0 (IopApplySystemPartitionProt.c)
 *     VhdiGetVolumeNumber @ 0x14086D6C0 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x14086D810 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x14086E0DC (RamdiskStart.c)
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
