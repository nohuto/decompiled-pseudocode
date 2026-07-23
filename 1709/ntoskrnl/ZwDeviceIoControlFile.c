/*
 * XREFs of ZwDeviceIoControlFile @ 0x14017D9A0
 * Callers:
 *     PopFlushAndHold @ 0x140243F58 (PopFlushAndHold.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x14044382C (PfSnVolumeCheckSeekPenalty.c)
 *     SiGetDiskPartitionInformation @ 0x14057DF74 (SiGetDiskPartitionInformation.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1405972DC (EtwpUpdateFileInfoDriverRegistration.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x1405B0F00 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetPartitionInformation @ 0x1405B1024 (BiGetPartitionInformation.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x1405B1298 (BiIssueGetDriveLayoutIoctl.c)
 *     BiIsVolumePartitionInformationRetained @ 0x1405B143C (BiIsVolumePartitionInformationRetained.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x1405C88A0 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1406F4854 (PfSnVolumeCheckIsSdBus.c)
 *     ExpGetDriveGeometry @ 0x14075905C (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x140759278 (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x14075B25C (ExpTranslateNtPath.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x14077A074 (BiGetVolumeDiskExtentsInformation.c)
 *     SiGetDeviceNumberInformation @ 0x14077D3CC (SiGetDeviceNumberInformation.c)
 *     SiGetDriveLayoutInformation @ 0x14077D4F8 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x14077D660 (SiIssueSynchronousIoctl.c)
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 *     VhdiGetVolumeNumber @ 0x14086D6C0 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x14086D810 (VhdiInitializeBootDisk.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x14086E014 (VhdiQueryVolumeVhdFilePath.c)
 *     RamdiskStart @ 0x14086E0DC (RamdiskStart.c)
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
