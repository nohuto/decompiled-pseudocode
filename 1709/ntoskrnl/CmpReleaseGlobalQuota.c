/*
 * XREFs of CmpReleaseGlobalQuota @ 0x140479EB8
 * Callers:
 *     CmpInitializeHive @ 0x140470188 (CmpInitializeHive.c)
 *     HvFreeHive @ 0x140479C44 (HvFreeHive.c)
 *     CmpFree @ 0x140479E90 (CmpFree.c)
 *     CmpAllocate @ 0x14047D780 (CmpAllocate.c)
 *     HvFreeHivePartial @ 0x140565630 (HvFreeHivePartial.c)
 *     HvpViewMapViewOfPrimaryFile @ 0x1406A0870 (HvpViewMapViewOfPrimaryFile.c)
 *     HvpViewRemapViewOfPrimaryFile @ 0x1406A09A4 (HvpViewRemapViewOfPrimaryFile.c)
 *     HvpViewUnmapViewOfPrimaryFile @ 0x1406A0BAC (HvpViewUnmapViewOfPrimaryFile.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
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
