/*
 * XREFs of HvViewMapAddressForFileOffset @ 0x1406759AC
 * Callers:
 *     HvViewMapCopyToFileOffset @ 0x1401E0E98 (HvViewMapCopyToFileOffset.c)
 *     HvpMapHiveImageFromSystemCache @ 0x1401E1AC0 (HvpMapHiveImageFromSystemCache.c)
 *     HvWriteHivePrimaryFile @ 0x1404391D8 (HvWriteHivePrimaryFile.c)
 *     CmpReorganizeHive @ 0x140439CAC (CmpReorganizeHive.c)
 *     HvpAllocateBin @ 0x14048DC6C (HvpAllocateBin.c)
 *     CmpDoSystemCacheRead @ 0x14066A624 (CmpDoSystemCacheRead.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x14066C518 (HvExtendHivePrimaryFileValidDataLength.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     HvpViewMapAcquireLockShared @ 0x1401E1000 (HvpViewMapAcquireLockShared.c)
 */

unsigned __int64 __fastcall HvViewMapAddressForFileOffset(__int64 a1, unsigned int a2)
{
  unsigned __int64 v4; // rbx

  HvpViewMapAcquireLockShared(a1);
  v4 = (a2 & 0x3FFFF)
     + (*(_QWORD *)(32LL * ((a2 >> 18) & 0x3F) + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * (HIBYTE(a2) & 0x7F))) & 0xFFFFFFFFFFFFFFFEuLL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 8));
  KeAbPostRelease(a1 + 8);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v4;
}
