/*
 * XREFs of IopAcquireFileObjectLock @ 0x14056053C
 * Callers:
 *     NtSetInformationFile @ 0x14005F8B0 (NtSetInformationFile.c)
 *     NtSetEaFile @ 0x14044F5E0 (NtSetEaFile.c)
 *     IopQueryXxxInformation @ 0x14048FF44 (IopQueryXxxInformation.c)
 *     NtQueryVolumeInformationFile @ 0x140490C90 (NtQueryVolumeInformationFile.c)
 *     IopGetSetSecurityObject @ 0x140491160 (IopGetSetSecurityObject.c)
 *     NtLockFile @ 0x1404924A0 (NtLockFile.c)
 *     NtQueryInformationFile @ 0x14049A060 (NtQueryInformationFile.c)
 *     IopXxxControlFile @ 0x1404AD980 (IopXxxControlFile.c)
 *     IopCloseFile @ 0x1404BAD60 (IopCloseFile.c)
 *     BuildQueryDirectoryIrp @ 0x1404CB2D0 (BuildQueryDirectoryIrp.c)
 *     NtWriteFile @ 0x140505350 (NtWriteFile.c)
 *     NtReadFileScatter @ 0x1405616E4 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x140561D0C (NtWriteFileGather.c)
 *     NtReadFile @ 0x140562BE0 (NtReadFile.c)
 *     NtUnlockFile @ 0x14056D1B0 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x140572CD0 (NtQueryEaFile.c)
 *     NtFlushBuffersFileEx @ 0x140575154 (NtFlushBuffersFileEx.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140582FC0 (NtNotifyChangeDirectoryFileEx.c)
 *     IoSetInformation @ 0x14059BCF0 (IoSetInformation.c)
 *     NtSetVolumeInformationFile @ 0x1405E06C0 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406B5E40 (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x1406B9540 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     IopWaitForLockAlertable @ 0x1400FFEDC (IopWaitForLockAlertable.c)
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
