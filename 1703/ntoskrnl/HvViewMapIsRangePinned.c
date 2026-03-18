/*
 * XREFs of HvViewMapIsRangePinned @ 0x140675CE4
 * Callers:
 *     HvExtendHivePrimaryFileValidDataLength @ 0x14066C518 (HvExtendHivePrimaryFileValidDataLength.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     HvpViewMapAcquireLockShared @ 0x1401E1000 (HvpViewMapAcquireLockShared.c)
 *     HvpViewMapIsRangePinned @ 0x1401E1024 (HvpViewMapIsRangePinned.c)
 */

char __fastcall HvViewMapIsRangePinned(__int64 a1, int a2)
{
  char IsRangePinned; // bl

  HvpViewMapAcquireLockShared(a1);
  IsRangePinned = HvpViewMapIsRangePinned(a1, a2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 8));
  KeAbPostRelease(a1 + 8);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return IsRangePinned;
}
