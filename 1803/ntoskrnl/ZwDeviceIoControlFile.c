/*
 * XREFs of ZwDeviceIoControlFile @ 0x1401A75A0
 * Callers:
 *     PopFlushAndHold @ 0x14027A740 (PopFlushAndHold.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x14048FE7C (PfSnVolumeCheckSeekPenalty.c)
 *     SiGetDiskPartitionInformation @ 0x140569C34 (SiGetDiskPartitionInformation.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14057BFE0 (EtwpUpdateFileInfoDriverRegistration.c)
 *     SiGetDriveLayoutInformation @ 0x1405F1430 (SiGetDriveLayoutInformation.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140609BD8 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetPartitionInformation @ 0x140609CFC (BiGetPartitionInformation.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x140609EA0 (BiIssueGetDriveLayoutIoctl.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140609F70 (BiIsVolumePartitionInformationRetained.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14063418C (PnpHardwareConfigCreateBootDriverFlags.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x140653C70 (ExpGetSystemWriteConstraintInformation.c)
 *     PfSnVolumeCheckIsSdBus @ 0x14075CBC4 (PfSnVolumeCheckIsSdBus.c)
 *     ExpGetDriveGeometry @ 0x1407BFF48 (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x1407C0164 (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x1407C21D4 (ExpTranslateNtPath.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x1407E2A48 (BiGetVolumeDiskExtentsInformation.c)
 *     SiGetDeviceNumberInformation @ 0x1407E5F30 (SiGetDeviceNumberInformation.c)
 *     SiIssueSynchronousIoctl @ 0x1407E605C (SiIssueSynchronousIoctl.c)
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 *     VhdiGetVolumeNumber @ 0x1408E241C (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x1408E2570 (VhdiInitializeBootDisk.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x1408E2D74 (VhdiQueryVolumeVhdFilePath.c)
 *     RamdiskStart @ 0x1408E2E3C (RamdiskStart.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeviceIoControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG IoControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
