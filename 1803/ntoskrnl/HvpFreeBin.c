/*
 * XREFs of HvpFreeBin @ 0x1405840EC
 * Callers:
 *     HvFreeHivePartial @ 0x14049A144 (HvFreeHivePartial.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1404E31E4 (HvpRemapAndEnlistHiveBins.c)
 *     HvHiveCleanup @ 0x140513E70 (HvHiveCleanup.c)
 *     HvpAddBin @ 0x140566210 (HvpAddBin.c)
 *     HvpDropPagedBins @ 0x1406334A0 (HvpDropPagedBins.c)
 *     HvpAddDummyBinToHive @ 0x1406F81F4 (HvpAddDummyBinToHive.c)
 *     HvpMapHiveImage @ 0x1406F8484 (HvpMapHiveImage.c)
 * Callees:
 *     CmpProtectPool @ 0x1400D24AC (CmpProtectPool.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HvpFreeBin(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  CmpProtectPool(a3, a2);
  return (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(a1 + 32))(a3, a2);
}
