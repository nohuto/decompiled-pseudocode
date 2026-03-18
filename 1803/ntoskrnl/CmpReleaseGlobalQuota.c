/*
 * XREFs of CmpReleaseGlobalQuota @ 0x140514098
 * Callers:
 *     HvFreeHivePartial @ 0x14049A144 (HvFreeHivePartial.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1404E31E4 (HvpRemapAndEnlistHiveBins.c)
 *     CmpFree @ 0x140513D20 (CmpFree.c)
 *     HvHiveCleanup @ 0x140513E70 (HvHiveCleanup.c)
 *     CmpAllocate @ 0x140514D70 (CmpAllocate.c)
 *     CmpDeleteHive @ 0x14054D76C (CmpDeleteHive.c)
 *     HvpAddBin @ 0x140566210 (HvpAddBin.c)
 *     HvpDropPagedBins @ 0x1406334A0 (HvpDropPagedBins.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall CmpReleaseGlobalQuota(unsigned int a1)
{
  __int64 result; // rax

  result = a1;
  if ( a1 > (unsigned __int64)CmpGlobalQuotaUsed )
    KeBugCheckEx(0x51u, 0xDuLL, 1uLL, 0LL, 0LL);
  _InterlockedExchangeAdd((volatile signed __int32 *)&CmpGlobalQuotaUsed, -a1);
  return result;
}
