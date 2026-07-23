/*
 * XREFs of PfLockSharedTryAcquire @ 0x140061B34
 * Callers:
 *     PfCheckDeprioritizeFile @ 0x1404984E4 (PfCheckDeprioritizeFile.c)
 * Callees:
 *     ExfTryAcquirePushLockShared @ 0x140007170 (ExfTryAcquirePushLockShared.c)
 *     KeAbPostReleaseEx @ 0x14003FBE8 (KeAbPostReleaseEx.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 */

__int64 __fastcall PfLockSharedTryAcquire(volatile signed __int64 *BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rax
  _KLOCK_ENTRY *v3; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (_KLOCK_ENTRY *)KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL);
  if ( !_InterlockedCompareExchange64(BugCheckParameter2, 17LL, 0LL)
    || ExfTryAcquirePushLockShared((signed __int64 *)BugCheckParameter2) )
  {
    if ( v3 )
      v3->AcquiredByte |= 1u;
    return 1LL;
  }
  else
  {
    if ( v3 )
      KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, v3);
    KeLeaveCriticalRegion();
    return 0LL;
  }
}
