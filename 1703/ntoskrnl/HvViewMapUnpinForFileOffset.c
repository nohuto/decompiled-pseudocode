/*
 * XREFs of HvViewMapUnpinForFileOffset @ 0x140675F9C
 * Callers:
 *     HvSynchronizeAndDropTemporaryBins @ 0x14003B8EC (HvSynchronizeAndDropTemporaryBins.c)
 *     CmpDoSystemCacheWrite @ 0x14066A6BC (CmpDoSystemCacheWrite.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x14066C518 (HvExtendHivePrimaryFileValidDataLength.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     HvpViewMapAcquireLockExclusive @ 0x1401E0FDC (HvpViewMapAcquireLockExclusive.c)
 *     HvpViewMapUnpinForFileOffset @ 0x1401E12D0 (HvpViewMapUnpinForFileOffset.c)
 */

__int64 __fastcall HvViewMapUnpinForFileOffset(__int64 a1, int a2, int a3)
{
  HvpViewMapAcquireLockExclusive(a1);
  HvpViewMapUnpinForFileOffset(a1, a2, a3);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8));
  KeAbPostRelease(a1 + 8);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
