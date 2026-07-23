/*
 * XREFs of TryLockShutdownShared @ 0x14066A58C
 * Callers:
 *     CmpSyncNextBackupHive @ 0x14066B40C (CmpSyncNextBackupHive.c)
 * Callees:
 *     ExfTryAcquirePushLockShared @ 0x140007170 (ExfTryAcquirePushLockShared.c)
 *     KeAbPostReleaseEx @ 0x14003FBE8 (KeAbPostReleaseEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 */

char TryLockShutdownShared()
{
  struct _KTHREAD *CurrentThread; // rax
  _KLOCK_ENTRY *v1; // rdi
  char v2; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = (_KLOCK_ENTRY *)KeAbPreAcquire((ULONG_PTR)&CmpShutdownLock, 0LL, 1);
  v2 = 0;
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&CmpShutdownLock, 17LL, 0LL)
    || ExfTryAcquirePushLockShared((signed __int64 *)&CmpShutdownLock) )
  {
    if ( v1 )
      v1->AcquiredByte |= 1u;
    return 1;
  }
  else
  {
    if ( v1 )
      KeAbPostReleaseEx((ULONG_PTR)&CmpShutdownLock, v1);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v2;
}
