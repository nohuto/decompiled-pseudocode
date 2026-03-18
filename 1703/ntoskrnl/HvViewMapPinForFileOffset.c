/*
 * XREFs of HvViewMapPinForFileOffset @ 0x140675D44
 * Callers:
 *     HvWriteHivePrimaryFile @ 0x1404391D8 (HvWriteHivePrimaryFile.c)
 *     CmpReorganizeHive @ 0x140439CAC (CmpReorganizeHive.c)
 *     HvLoadHive @ 0x14043A6FC (HvLoadHive.c)
 *     HvpProtectBin @ 0x14048DBFC (HvpProtectBin.c)
 *     HvpSetRangeProtection @ 0x1405151A8 (HvpSetRangeProtection.c)
 *     HvpDropPagedBins @ 0x1405BCFDC (HvpDropPagedBins.c)
 *     CmpDoSystemCacheWrite @ 0x14066A6BC (CmpDoSystemCacheWrite.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x14066C518 (HvExtendHivePrimaryFileValidDataLength.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     HvpViewMapAcquireLockExclusive @ 0x1401E0FDC (HvpViewMapAcquireLockExclusive.c)
 *     HvpViewMapPinForFileOffset @ 0x1401E10D0 (HvpViewMapPinForFileOffset.c)
 */

__int64 __fastcall HvViewMapPinForFileOffset(__int64 a1, int a2, int a3)
{
  unsigned int v6; // ebx

  HvpViewMapAcquireLockExclusive(a1);
  v6 = HvpViewMapPinForFileOffset(a1, a2, a3);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8));
  KeAbPostRelease(a1 + 8);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v6;
}
