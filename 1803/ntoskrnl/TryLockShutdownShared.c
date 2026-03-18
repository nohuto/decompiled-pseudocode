/*
 * XREFs of TryLockShutdownShared @ 0x1406FA7D8
 * Callers:
 *     CmpSyncNextBackupHive @ 0x1406F9524 (CmpSyncNextBackupHive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x14007C82C (KeAbPostReleaseEx.c)
 *     ExfTryAcquirePushLockShared @ 0x1400A27C0 (ExfTryAcquirePushLockShared.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
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
    || ExfTryAcquirePushLockShared(&CmpShutdownLock) )
  {
    if ( v1 )
      v1->AcquiredByte |= 1u;
    return 1;
  }
  else
  {
    if ( v1 )
      KeAbPostReleaseEx((ULONG_PTR)&CmpShutdownLock, v1);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v2;
}
