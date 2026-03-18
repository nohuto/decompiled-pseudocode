/*
 * XREFs of IopAcquireFileObjectLock @ 0x1404941E4
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
 *     IopCloseFile @ 0x1405B12E0 (IopCloseFile.c)
 *     NtSetVolumeInformationFile @ 0x1405E59A0 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x1405E7BF0 (IoSetInformation.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14071AB3C (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x14071DE80 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14071E4E0 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IopWaitForLockAlertable @ 0x1400061DC (IopWaitForLockAlertable.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 */

__int64 __fastcall IopAcquireFileObjectLock(char *Object, char a2, char a3, _BYTE *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v9; // eax
  unsigned int v10; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  *a4 = 0;
  _InterlockedIncrement((volatile signed __int32 *)Object + 28);
  do
  {
    if ( !*((_DWORD *)Object + 29) && !_InterlockedExchange((volatile __int32 *)Object + 29, 1) )
    {
      ObfReferenceObject(Object);
      _InterlockedAdd((volatile signed __int32 *)Object + 28, 0xFFFFFFFF);
      return 0LL;
    }
    v9 = IopWaitForLockAlertable(Object + 128, a2, a3);
    v10 = v9;
  }
  while ( v9 != 192 && v9 != 257 );
  _InterlockedAdd((volatile signed __int32 *)Object + 28, 0xFFFFFFFF);
  if ( !*((_DWORD *)Object + 29) )
  {
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)(Object + 128), 0, 0);
  }
  *a4 = 1;
  KeLeaveCriticalRegion();
  return v10;
}
