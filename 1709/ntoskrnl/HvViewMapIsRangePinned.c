/*
 * XREFs of HvViewMapIsRangePinned @ 0x1406A021C
 * Callers:
 *     HvExtendHivePrimaryFileValidDataLength @ 0x140696B8C (HvExtendHivePrimaryFileValidDataLength.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     HvpViewMapAcquireLockShared @ 0x1401E513C (HvpViewMapAcquireLockShared.c)
 *     HvpViewMapIsRangePinned @ 0x1401E5168 (HvpViewMapIsRangePinned.c)
 */

char __fastcall HvViewMapIsRangePinned(__int64 a1, int a2)
{
  char IsRangePinned; // bl

  HvpViewMapAcquireLockShared(a1);
  IsRangePinned = HvpViewMapIsRangePinned(a1, a2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 8));
  KeAbPostRelease(a1 + 8);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return IsRangePinned;
}
