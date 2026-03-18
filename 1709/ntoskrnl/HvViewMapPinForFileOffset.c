/*
 * XREFs of HvViewMapPinForFileOffset @ 0x1406A027C
 * Callers:
 *     CmpReorganizeHive @ 0x140470880 (CmpReorganizeHive.c)
 *     HvpSetRangeProtection @ 0x14047CF98 (HvpSetRangeProtection.c)
 *     HvpProtectBin @ 0x14047D67C (HvpProtectBin.c)
 *     HvWriteHivePrimaryFile @ 0x1404E4520 (HvWriteHivePrimaryFile.c)
 *     HvLoadHive @ 0x1404E4CD0 (HvLoadHive.c)
 *     HvpDropPagedBins @ 0x1405BEF08 (HvpDropPagedBins.c)
 *     CmpDoSystemCacheWrite @ 0x140694D44 (CmpDoSystemCacheWrite.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x140696B8C (HvExtendHivePrimaryFileValidDataLength.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     HvpViewMapAcquireLockExclusive @ 0x1401E5110 (HvpViewMapAcquireLockExclusive.c)
 *     HvpViewMapPinForFileOffset @ 0x1401E5208 (HvpViewMapPinForFileOffset.c)
 */

__int64 __fastcall HvViewMapPinForFileOffset(__int64 a1, int a2, int a3)
{
  unsigned int v6; // ebx

  HvpViewMapAcquireLockExclusive(a1);
  v6 = HvpViewMapPinForFileOffset(a1, a2, a3);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8));
  KeAbPostRelease(a1 + 8);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v6;
}
