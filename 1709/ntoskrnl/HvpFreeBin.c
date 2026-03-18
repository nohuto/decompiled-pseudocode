/*
 * XREFs of HvpFreeBin @ 0x140479E34
 * Callers:
 *     HvSynchronizeAndDropTemporaryBins @ 0x140130A30 (HvSynchronizeAndDropTemporaryBins.c)
 *     HvpMapHiveImageFromSystemCache @ 0x1401E5BC4 (HvpMapHiveImageFromSystemCache.c)
 *     HvFreeHive @ 0x140479C44 (HvFreeHive.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14047C538 (HvpRemapAndEnlistHiveBins.c)
 *     HvpMapHiveImage @ 0x14047C83C (HvpMapHiveImage.c)
 *     HvpAddBin @ 0x1404E4EF8 (HvpAddBin.c)
 *     HvFreeHivePartial @ 0x140565630 (HvFreeHivePartial.c)
 *     HvpDropPagedBins @ 0x1405BEF08 (HvpDropPagedBins.c)
 *     HvpFreeAllocatedBins @ 0x140694950 (HvpFreeAllocatedBins.c)
 *     HvpReviveDiscardedBin @ 0x1406A0FE8 (HvpReviveDiscardedBin.c)
 *     HvpAddDummyBinToHive @ 0x1406A29E0 (HvpAddDummyBinToHive.c)
 *     HvpAddLoadedBinToHive @ 0x1406A2B74 (HvpAddLoadedBinToHive.c)
 * Callees:
 *     CmpProtectPool @ 0x140016570 (CmpProtectPool.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HvpFreeBin(__int64 a1, unsigned int a2, int a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 124) & 4) == 0 || a3 || (a4 = a5) != 0 )
  {
    CmpProtectPool(a4, a2);
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 32))(a4, a2);
  }
  return result;
}
