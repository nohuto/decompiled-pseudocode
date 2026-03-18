/*
 * XREFs of CmpSyncNextBackupHive @ 0x1406F9524
 * Callers:
 *     NtInitializeRegistry @ 0x14061371C (NtInitializeRegistry.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     CmSetValueKey @ 0x1404A4924 (CmSetValueKey.c)
 *     CmpFlushBackupHive @ 0x1406F9154 (CmpFlushBackupHive.c)
 *     TryLockShutdownShared @ 0x1406FA7D8 (TryLockShutdownShared.c)
 */

__int64 CmpSyncNextBackupHive()
{
  unsigned int v0; // ebx
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v2; // di
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v6; // [rsp+50h] [rbp+8h]
  int v7; // [rsp+58h] [rbp+10h]

  if ( !(unsigned __int8)TryLockShutdownShared() )
    return (unsigned int)-2147483622;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( v2 )
  {
    if ( CmpDoIdleProcessing )
    {
      do
      {
        v7 = CmpPeriodicBackupFlushHiveCount;
        if ( (unsigned int)CmpPeriodicBackupFlushHiveCount >= 6 )
          v6 = 0;
        else
          v6 = CmpPeriodicBackupFlushHiveCount + 1;
      }
      while ( _InterlockedCompareExchange(&CmpPeriodicBackupFlushHiveCount, v6, CmpPeriodicBackupFlushHiveCount) != v7 );
      if ( ((__int64)CmpMachineHiveList[19 * v6 + 4] & 1) == 0 && CmpMachineHiveList[19 * v6 + 6] )
        CmpFlushBackupHive(v6);
      if ( v6 == 6 )
      {
        v0 = -2147483622;
        if ( CmpConfigurationManagerKeyObject )
        {
          _InterlockedIncrement(&CmpBackupCount);
          CmSetValueKey(
            (_QWORD *)CmpConfigurationManagerKeyObject,
            (const UNICODE_STRING *)&CmpBackupCountValueName,
            4,
            &CmpBackupCount,
            4u,
            0LL,
            0);
        }
      }
      else
      {
        v0 = 0;
      }
      goto LABEL_18;
    }
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  v0 = -1073741431;
LABEL_18:
  ExReleasePushLockEx((ULONG_PTR)&CmpShutdownLock, 0LL, v3, v4);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v2 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v0;
}
