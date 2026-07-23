/*
 * XREFs of ZwDeviceIoControlFile @ 0x14017E020
 * Callers:
 *     PopFlushAndHold @ 0x14022F7E0 (PopFlushAndHold.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1404356CC (EtwpUpdateFileInfoDriverRegistration.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x14046688C (PfSnVolumeCheckSeekPenalty.c)
 *     SiGetDiskPartitionInformation @ 0x140569A08 (SiGetDiskPartitionInformation.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x14058C7F4 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetPartitionInformation @ 0x14058C918 (BiGetPartitionInformation.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x14058CABC (BiIssueGetDriveLayoutIoctl.c)
 *     BiIsVolumePartitionInformationRetained @ 0x14058CB8C (BiIsVolumePartitionInformationRetained.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x1405B66DC (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1406C4D34 (PfSnVolumeCheckIsSdBus.c)
 *     ExpGetDriveGeometry @ 0x140719858 (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x140719A74 (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x14071B9C4 (ExpTranslateNtPath.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x140735C30 (BiGetVolumeDiskExtentsInformation.c)
 *     SiGetDeviceNumberInformation @ 0x140738C54 (SiGetDeviceNumberInformation.c)
 *     SiGetDriveLayoutInformation @ 0x140738D80 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140738EE8 (SiIssueSynchronousIoctl.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140826ABC (PopPdcCsCheckSystemVolumeDevice.c)
 *     VhdiGetVolumeNumber @ 0x140836488 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x1408365E0 (VhdiInitializeBootDisk.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x140836DE4 (VhdiQueryVolumeVhdFilePath.c)
 *     RamdiskStart @ 0x140836EAC (RamdiskStart.c)
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
