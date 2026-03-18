/*
 * XREFs of IopAllocateIrpExReturn @ 0x1400ED980
 * Callers:
 *     IoAsynchronousPageWrite @ 0x1400369F8 (IoAsynchronousPageWrite.c)
 *     IopBuildDeviceIoControlRequest @ 0x14004A740 (IopBuildDeviceIoControlRequest.c)
 *     IoPageReadEx @ 0x14004AFE0 (IoPageReadEx.c)
 *     NtSetInformationFile @ 0x14004FBC0 (NtSetInformationFile.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140081250 (IopBuildAsynchronousFsdRequest.c)
 *     IopAllocateIrpMustSucceed @ 0x1400ED940 (IopAllocateIrpMustSucceed.c)
 *     IoSynchronousPageWriteEx @ 0x14012C59C (IoSynchronousPageWriteEx.c)
 *     IopAllocateBackpocketIrp @ 0x1401EF168 (IopAllocateBackpocketIrp.c)
 *     NtUnlockFile @ 0x14043BA90 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x14043F120 (NtQueryEaFile.c)
 *     NtFlushBuffersFileEx @ 0x1404401B4 (NtFlushBuffersFileEx.c)
 *     NtNotifyChangeDirectoryFile @ 0x140445BB0 (NtNotifyChangeDirectoryFile.c)
 *     NtWriteFileGather @ 0x14044F2A0 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404507E0 (NtReadFileScatter.c)
 *     IoSetInformation @ 0x14045D250 (IoSetInformation.c)
 *     BuildQueryDirectoryIrp @ 0x14047F470 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x1404812E0 (NtQueryVolumeInformationFile.c)
 *     NtWriteFile @ 0x1404818C0 (NtWriteFile.c)
 *     IopGetSetSecurityObject @ 0x140482710 (IopGetSetSecurityObject.c)
 *     NtLockFile @ 0x14048B220 (NtLockFile.c)
 *     IopGetFileInformation @ 0x1404FC060 (IopGetFileInformation.c)
 *     IopXxxControlFile @ 0x14052BAD0 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x14052EC70 (NtQueryInformationFile.c)
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 *     IopQueryXxxInformation @ 0x14053E758 (IopQueryXxxInformation.c)
 *     NtReadFile @ 0x140566B00 (NtReadFile.c)
 *     NtSetVolumeInformationFile @ 0x140574C30 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14068A1D8 (IopSetEaOrQuotaInformationFile.c)
 *     IoVerifyVolume @ 0x14068BEE0 (IoVerifyVolume.c)
 *     NtSetEaFile @ 0x14068D200 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14068D860 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x14012BFC8 (IopAllocateIrpWithExtension.c)
 *     IovAllocateIrp @ 0x140762990 (IovAllocateIrp.c)
 */

__int64 __fastcall IopAllocateIrpExReturn(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( !IopDispatchAllocateIrp )
    return IopAllocateIrpPrivate(a1, a2, a3, a4);
  if ( IopDispatchAllocateIrp == 2 )
    return IopAllocateIrpWithExtension(a1, a2, a3, a4);
  return IovAllocateIrp(a1, a2, a3, a4);
}
