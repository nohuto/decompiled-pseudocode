/*
 * XREFs of IopAllocateIrpCleanup @ 0x140719344
 * Callers:
 *     NtSetInformationFile @ 0x1400ECB00 (NtSetInformationFile.c)
 *     IopQueryXxxInformation @ 0x1404A51B8 (IopQueryXxxInformation.c)
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
 *     NtSetVolumeInformationFile @ 0x1405E59A0 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x1405E7BF0 (IoSetInformation.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14071AB3C (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x14071DE80 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14071E4E0 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall IopAllocateIrpCleanup(char *Object, PVOID a2)
{
  if ( a2 )
    ObfDereferenceObject(a2);
  if ( (*((_DWORD *)Object + 20) & 2) != 0 )
  {
    _InterlockedExchange((volatile __int32 *)Object + 29, 0);
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)(Object + 128), 0, 0);
    ObfDereferenceObject(Object);
    KeLeaveCriticalRegion();
  }
  return ObfDereferenceObject(Object);
}
