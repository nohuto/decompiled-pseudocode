/*
 * XREFs of HvViewMapPinFile @ 0x1401E0F1C
 * Callers:
 *     HvpApplyLogEntry @ 0x1406786E0 (HvpApplyLogEntry.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     HvpViewMapAcquireLockExclusive @ 0x1401E0FDC (HvpViewMapAcquireLockExclusive.c)
 *     HvpViewMapPinForFileOffset @ 0x1401E10D0 (HvpViewMapPinForFileOffset.c)
 */

__int64 __fastcall HvViewMapPinFile(volatile signed __int64 *a1)
{
  unsigned int v2; // edi

  HvpViewMapAcquireLockExclusive();
  v2 = HvpViewMapPinForFileOffset(a1, 0LL, *(unsigned int *)a1);
  if ( (_InterlockedExchangeAdd64(a1 + 1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 1);
  KeAbPostRelease((ULONG_PTR)(a1 + 1));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v2;
}
