/*
 * XREFs of PspReferenceSystemDll @ 0x14049C278
 * Callers:
 *     PspMapSystemDll @ 0x14049C0D0 (PspMapSystemDll.c)
 *     DbgkCreateThread @ 0x1404F8500 (DbgkCreateThread.c)
 *     MmInitSystemDll @ 0x140808CEC (MmInitSystemDll.c)
 *     PspInitPhase3 @ 0x1408269D4 (PspInitPhase3.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x1400445AC (ObFastReferenceObjectLocked.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObFastReferenceObject @ 0x1400EE6B0 (ObFastReferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 */

unsigned __int64 __fastcall PspReferenceSystemDll(signed __int64 *a1)
{
  unsigned __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rbp

  v2 = ObFastReferenceObject(a1);
  if ( !v2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)(a1 + 1), 0LL);
    v2 = ObFastReferenceObjectLocked(a1);
    if ( _InterlockedCompareExchange64(a1 + 1, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a1 + 1);
    KeAbPostRelease((ULONG_PTR)(a1 + 1));
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  return v2;
}
