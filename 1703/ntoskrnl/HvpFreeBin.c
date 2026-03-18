/*
 * XREFs of HvpFreeBin @ 0x1404D289C
 * Callers:
 *     HvSynchronizeAndDropTemporaryBins @ 0x14003B8EC (HvSynchronizeAndDropTemporaryBins.c)
 *     HvpMapHiveImageFromSystemCache @ 0x1401E1AC0 (HvpMapHiveImageFromSystemCache.c)
 *     HvpAddBin @ 0x14043A920 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14048D724 (HvpRemapAndEnlistHiveBins.c)
 *     HvpMapHiveImage @ 0x14048DA2C (HvpMapHiveImage.c)
 *     HvFreeHivePartial @ 0x1404B7EDC (HvFreeHivePartial.c)
 *     HvFreeHive @ 0x1404D2664 (HvFreeHive.c)
 *     HvpDropPagedBins @ 0x1405BCFDC (HvpDropPagedBins.c)
 *     HvpFreeAllocatedBins @ 0x14066A270 (HvpFreeAllocatedBins.c)
 *     HvpReviveDiscardedBin @ 0x140676AA8 (HvpReviveDiscardedBin.c)
 *     HvpAddDummyBinToHive @ 0x140678468 (HvpAddDummyBinToHive.c)
 *     HvpAddLoadedBinToHive @ 0x1406785FC (HvpAddLoadedBinToHive.c)
 * Callees:
 *     CmpProtectPool @ 0x14007FD38 (CmpProtectPool.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
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
