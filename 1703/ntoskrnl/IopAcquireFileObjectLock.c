/*
 * XREFs of IopAcquireFileObjectLock @ 0x140561408
 * Callers:
 *     NtSetInformationFile @ 0x14004FBC0 (NtSetInformationFile.c)
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
 *     IopCloseFile @ 0x140527CA0 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x14052BAD0 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x14052EC70 (NtQueryInformationFile.c)
 *     IopQueryXxxInformation @ 0x14053E758 (IopQueryXxxInformation.c)
 *     NtReadFile @ 0x140566B00 (NtReadFile.c)
 *     NtSetVolumeInformationFile @ 0x140574C30 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14068A1D8 (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x14068D200 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14068D860 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     IopWaitForLockAlertable @ 0x14012C9E0 (IopWaitForLockAlertable.c)
 */

__int64 __fastcall IopAcquireFileObjectLock(char *Object, KPROCESSOR_MODE a2, char a3, _BYTE *a4)
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v10;
}
