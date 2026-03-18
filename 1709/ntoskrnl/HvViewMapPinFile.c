/*
 * XREFs of HvViewMapPinFile @ 0x1401E5050
 * Callers:
 *     HvpApplyLogEntry @ 0x1406A2C58 (HvpApplyLogEntry.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     HvpViewMapAcquireLockExclusive @ 0x1401E5110 (HvpViewMapAcquireLockExclusive.c)
 *     HvpViewMapPinForFileOffset @ 0x1401E5208 (HvpViewMapPinForFileOffset.c)
 */

__int64 __fastcall HvViewMapPinFile(volatile signed __int64 *a1)
{
  unsigned int v2; // edi

  HvpViewMapAcquireLockExclusive();
  v2 = HvpViewMapPinForFileOffset(a1, 0LL, *(unsigned int *)a1);
  if ( (_InterlockedExchangeAdd64(a1 + 1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 1);
  KeAbPostRelease((ULONG_PTR)(a1 + 1));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v2;
}
