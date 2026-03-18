/*
 * XREFs of HvViewMapUnpinFile @ 0x1401E50B8
 * Callers:
 *     HvInitializeHive @ 0x140470A40 (HvInitializeHive.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     HvpViewMapAcquireLockExclusive @ 0x1401E5110 (HvpViewMapAcquireLockExclusive.c)
 *     HvpViewMapUnpinForFileOffset @ 0x1401E53E8 (HvpViewMapUnpinForFileOffset.c)
 */

_QWORD *__fastcall HvViewMapUnpinFile(volatile signed __int64 *a1)
{
  HvpViewMapAcquireLockExclusive();
  HvpViewMapUnpinForFileOffset(a1, 0LL, *(unsigned int *)a1);
  if ( (_InterlockedExchangeAdd64(a1 + 1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 1);
  KeAbPostRelease((ULONG_PTR)(a1 + 1));
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
