/*
 * XREFs of CmpSyncNextBackupHive @ 0x140695A78
 * Callers:
 *     NtInitializeRegistry @ 0x1405AD498 (NtInitializeRegistry.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     CmSetValueKey @ 0x14047B690 (CmSetValueKey.c)
 *     TryLockShutdownShared @ 0x140694C14 (TryLockShutdownShared.c)
 *     CmpFlushBackupHive @ 0x1406951B8 (CmpFlushBackupHive.c)
 */

__int64 CmpSyncNextBackupHive()
{
  unsigned int v0; // ebx
  BOOLEAN v1; // di
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // [rsp+50h] [rbp+8h]
  int v5; // [rsp+58h] [rbp+10h]

  v0 = 0;
  v1 = 0;
  if ( TryLockShutdownShared() )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v1 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    if ( !v1 )
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( CmpDoIdleProcessing && v1 )
    {
      do
      {
        v5 = CmpPeriodicBackupFlushHiveCount;
        if ( (unsigned int)CmpPeriodicBackupFlushHiveCount >= 6 )
          v4 = 0;
        else
          v4 = CmpPeriodicBackupFlushHiveCount + 1;
      }
      while ( _InterlockedCompareExchange(&CmpPeriodicBackupFlushHiveCount, v4, CmpPeriodicBackupFlushHiveCount) != v5 );
      if ( ((__int64)CmpMachineHiveList[19 * v4 + 4] & 1) == 0 && CmpMachineHiveList[19 * v4 + 6] )
        CmpFlushBackupHive(v4);
      if ( v4 == 6 )
      {
        v0 = -2147483622;
        if ( CmpConfigurationManagerKeyObject )
        {
          _InterlockedIncrement(&CmpBackupCount);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v1 = 0;
          CmSetValueKey(CmpConfigurationManagerKeyObject, CmpBackupCountValueName, 4, &CmpBackupCount, 4u, 0LL, 0);
        }
      }
    }
    else
    {
      v0 = -1073741431;
    }
    ExReleasePushLockEx((ULONG_PTR)&CmpShutdownLock, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    v0 = -2147483622;
  }
  if ( v1 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v0;
}
