/*
 * XREFs of HvViewMapUnpinFile @ 0x1401E0F84
 * Callers:
 *     HvInitializeHive @ 0x140439E6C (HvInitializeHive.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     HvpViewMapAcquireLockExclusive @ 0x1401E0FDC (HvpViewMapAcquireLockExclusive.c)
 *     HvpViewMapUnpinForFileOffset @ 0x1401E12D0 (HvpViewMapUnpinForFileOffset.c)
 */

__int64 __fastcall HvViewMapUnpinFile(volatile signed __int64 *a1)
{
  HvpViewMapAcquireLockExclusive();
  HvpViewMapUnpinForFileOffset(a1, 0LL, *(unsigned int *)a1);
  if ( (_InterlockedExchangeAdd64(a1 + 1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 1);
  KeAbPostRelease((ULONG_PTR)(a1 + 1));
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
