/*
 * XREFs of PfLockSharedTryAcquire @ 0x1400A2528
 * Callers:
 *     PfCheckDeprioritizeFile @ 0x14054FA08 (PfCheckDeprioritizeFile.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x14007C82C (KeAbPostReleaseEx.c)
 *     ExfTryAcquirePushLockShared @ 0x1400A27C0 (ExfTryAcquirePushLockShared.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 */

__int64 __fastcall PfLockSharedTryAcquire(volatile signed __int64 *BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rax
  _KLOCK_ENTRY *v3; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (_KLOCK_ENTRY *)KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 1);
  if ( !_InterlockedCompareExchange64(BugCheckParameter2, 17LL, 0LL)
    || (unsigned __int8)ExfTryAcquirePushLockShared(BugCheckParameter2) )
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
