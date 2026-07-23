/*
 * XREFs of ZwOpenFile @ 0x1401A7B20
 * Callers:
 *     KsepShimDbChanged @ 0x140170554 (KsepShimDbChanged.c)
 *     DbgkPostModuleMessage @ 0x140223554 (DbgkPostModuleMessage.c)
 *     BiLogFileOwnerProcess @ 0x1402C5E00 (BiLogFileOwnerProcess.c)
 *     IoGetDeviceObjectPointer @ 0x140496520 (IoGetDeviceObjectPointer.c)
 *     NtGetNlsSectionPtr @ 0x14053EF74 (NtGetNlsSectionPtr.c)
 *     SiGetDiskPartitionInformation @ 0x140569C34 (SiGetDiskPartitionInformation.c)
 *     ExpGetGlobalLocaleSection @ 0x14056CBE0 (ExpGetGlobalLocaleSection.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14057BFE0 (EtwpUpdateFileInfoDriverRegistration.c)
 *     PopValidateHiberFileSize @ 0x1405F06DC (PopValidateHiberFileSize.c)
 *     SiGetDriveLayoutInformation @ 0x1405F1430 (SiGetDriveLayoutInformation.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1405F3118 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     MiCreateSectionForDriver @ 0x1405F98FC (MiCreateSectionForDriver.c)
 *     PiLookupInDDB @ 0x1405FBCF4 (PiLookupInDDB.c)
 *     KsepShimDbMapToMemory @ 0x1405FFEA0 (KsepShimDbMapToMemory.c)
 *     BiGetNtPartitionPath @ 0x14060729C (BiGetNtPartitionPath.c)
 *     BiCreatePartitionDevice @ 0x140609914 (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140609BD8 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetDriveLayoutInformation @ 0x140609DE4 (BiGetDriveLayoutInformation.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140609F70 (BiIsVolumePartitionInformationRetained.c)
 *     RtlLockBootStatusData @ 0x14060F700 (RtlLockBootStatusData.c)
 *     PspLocateSystemDll @ 0x14063B288 (PspLocateSystemDll.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x1406F7790 (CmpOpenFileWithExtremePrejudice.c)
 *     DbgkSendSystemDllMessages @ 0x14070E1AC (DbgkSendSystemDllMessages.c)
 *     DbgkpSectionToFileHandle @ 0x140711604 (DbgkpSectionToFileHandle.c)
 *     IopIsNotNativeDriverImage @ 0x14071A118 (IopIsNotNativeDriverImage.c)
 *     IopValidateJunctionTarget @ 0x14071B5BC (IopValidateJunctionTarget.c)
 *     IoAttachDevice @ 0x14071BB20 (IoAttachDevice.c)
 *     PiCreateDirectoryRootAndPath @ 0x140724C64 (PiCreateDirectoryRootAndPath.c)
 *     PiGetDriverImageDirectory @ 0x140725044 (PiGetDriverImageDirectory.c)
 *     PpLastGoodDeleteFilesCallback @ 0x140726E80 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x14073BE98 (IopFileUtilClearAttributes.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x14073D35C (PiDrvDbQuerySystemPathWin32.c)
 *     PopDeleteHiberFile @ 0x1407625E8 (PopDeleteHiberFile.c)
 *     ExpGetDriveGeometry @ 0x1407BFF48 (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x1407C0164 (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x1407C21D4 (ExpTranslateNtPath.c)
 *     CMFFlushHitsFile @ 0x1407C8998 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1407C92E0 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x1407CCA7C (ApiSetpLoadSchemaImage.c)
 *     AslDoesFileExistNtPath @ 0x1407D933C (AslDoesFileExistNtPath.c)
 *     AslpPathWildcardAllocMatchNode @ 0x1407DB5F8 (AslpPathWildcardAllocMatchNode.c)
 *     BiGetPhysicalDriveName @ 0x1407E2904 (BiGetPhysicalDriveName.c)
 *     SiGetDeviceNumberInformation @ 0x1407E5F30 (SiGetDeviceNumberInformation.c)
 *     SiIssueSynchronousIoctl @ 0x1407E605C (SiIssueSynchronousIoctl.c)
 *     IoInitSystemPreDrivers @ 0x1408A1BE4 (IoInitSystemPreDrivers.c)
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 *     IopMarkBootPartition @ 0x1408B6F50 (IopMarkBootPartition.c)
 *     IopFileUtilRename @ 0x1408C55D8 (IopFileUtilRename.c)
 *     IopApplySystemPartitionProt @ 0x1408DEBB0 (IopApplySystemPartitionProt.c)
 *     VhdiGetVolumeNumber @ 0x1408E241C (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x1408E2570 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x1408E2E3C (RamdiskStart.c)
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
