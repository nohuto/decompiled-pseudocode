/*
 * XREFs of IopAllocateIrpExReturn @ 0x1400FDE40
 * Callers:
 *     IoPageReadEx @ 0x140048610 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140048838 (IoSynchronousPageWriteEx.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140098370 (IopBuildAsynchronousFsdRequest.c)
 *     IoAsynchronousPageWrite @ 0x1400CCE90 (IoAsynchronousPageWrite.c)
 *     NtSetInformationFile @ 0x1400ECB00 (NtSetInformationFile.c)
 *     IopAllocateIrpMustSucceed @ 0x140106AA0 (IopAllocateIrpMustSucceed.c)
 *     IopBuildDeviceIoControlRequest @ 0x14012A300 (IopBuildDeviceIoControlRequest.c)
 *     IopAllocateBackpocketIrp @ 0x140231DA8 (IopAllocateBackpocketIrp.c)
 *     IopQueryXxxInformation @ 0x1404A51B8 (IopQueryXxxInformation.c)
 *     IopGetFileInformation @ 0x1404A5514 (IopGetFileInformation.c)
 *     NtQueryVolumeInformationFile @ 0x1404D0BE0 (NtQueryVolumeInformationFile.c)
 *     NtWriteFile @ 0x1404D10C0 (NtWriteFile.c)
 *     IopGetSetSecurityObject @ 0x1404D2090 (IopGetSetSecurityObject.c)
 *     NtLockFile @ 0x1404E39A0 (NtLockFile.c)
 *     NtReadFile @ 0x14052A160 (NtReadFile.c)
 *     NtUnlockFile @ 0x140557DC0 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x140560E8C (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x140564750 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140572550 (NtNotifyChangeDirectoryFileEx.c)
 *     NtWriteFileGather @ 0x140580364 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1405810E8 (NtReadFileScatter.c)
 *     BuildQueryDirectoryIrp @ 0x140596100 (BuildQueryDirectoryIrp.c)
 *     NtQueryInformationFile @ 0x140596F20 (NtQueryInformationFile.c)
 *     IopXxxControlFile @ 0x1405A1A20 (IopXxxControlFile.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 *     NtSetVolumeInformationFile @ 0x1405E59A0 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x1405E7BF0 (IoSetInformation.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14071AB3C (IopSetEaOrQuotaInformationFile.c)
 *     IoVerifyVolume @ 0x14071C9D0 (IoVerifyVolume.c)
 *     NtSetEaFile @ 0x14071DE80 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14071E4E0 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x140006144 (IopAllocateIrpWithExtension.c)
 *     IopAllocateIrpPrivate @ 0x1400FDE70 (IopAllocateIrpPrivate.c)
 *     IovAllocateIrp @ 0x1408115F0 (IovAllocateIrp.c)
 */

__int64 __fastcall IopAllocateIrpExReturn(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !IopDispatchAllocateIrp )
    return IopAllocateIrpPrivate(a1, a2);
  if ( IopDispatchAllocateIrp == 2 )
    return IopAllocateIrpWithExtension(a1, a2);
  return IovAllocateIrp(a1, a2, a3, a4);
}
