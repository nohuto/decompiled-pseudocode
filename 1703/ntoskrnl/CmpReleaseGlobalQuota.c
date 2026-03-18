/*
 * XREFs of CmpReleaseGlobalQuota @ 0x1404D2918
 * Callers:
 *     CmpInitializeHive @ 0x1404395AC (CmpInitializeHive.c)
 *     CmpAllocate @ 0x14048DD10 (CmpAllocate.c)
 *     HvFreeHivePartial @ 0x1404B7EDC (HvFreeHivePartial.c)
 *     HvFreeHive @ 0x1404D2664 (HvFreeHive.c)
 *     CmpFree @ 0x1404D28F0 (CmpFree.c)
 *     HvpViewMapViewOfPrimaryFile @ 0x140676330 (HvpViewMapViewOfPrimaryFile.c)
 *     HvpViewRemapViewOfPrimaryFile @ 0x140676464 (HvpViewRemapViewOfPrimaryFile.c)
 *     HvpViewUnmapViewOfPrimaryFile @ 0x14067666C (HvpViewUnmapViewOfPrimaryFile.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
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
