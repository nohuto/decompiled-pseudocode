/*
 * XREFs of CmpSyncNextBackupHive @ 0x14066B40C
 * Callers:
 *     NtInitializeRegistry @ 0x140585198 (NtInitializeRegistry.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     CmSetValueKey @ 0x14048F4F0 (CmSetValueKey.c)
 *     TryLockShutdownShared @ 0x14066A58C (TryLockShutdownShared.c)
 *     CmpFlushBackupHive @ 0x14066AB34 (CmpFlushBackupHive.c)
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
    v1 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    if ( !v1 )
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( CmpDoIdleProcessing && v1 )
    {
      do
      {
        v5 = CmpPeriodicBackupFlushHiveCount;
        if ( (unsigned int)CmpPeriodicBackupFlushHiveCount >= 5 )
          v4 = 0;
        else
          v4 = CmpPeriodicBackupFlushHiveCount + 1;
      }
      while ( _InterlockedCompareExchange(&CmpPeriodicBackupFlushHiveCount, v4, CmpPeriodicBackupFlushHiveCount) != v5 );
      if ( ((__int64)CmpMachineHiveList[19 * v4 + 4] & 1) == 0 && CmpMachineHiveList[19 * v4 + 6] )
        CmpFlushBackupHive(v4);
      if ( v4 == 5 )
      {
        v0 = -2147483622;
        if ( CmpConfigurationManagerKeyObject )
        {
          _InterlockedIncrement(&CmpBackupCount);
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          v1 = 0;
          CmSetValueKey(
            CmpConfigurationManagerKeyObject,
            (const UNICODE_STRING *)&CmpBackupCountValueName,
            4u,
            &CmpBackupCount,
            4u,
            0LL,
            0);
        }
      }
    }
    else
    {
      v0 = -1073741431;
    }
    ExReleasePushLockEx((ULONG_PTR)&CmpShutdownLock, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  else
  {
    v0 = -2147483622;
  }
  if ( v1 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v0;
}
