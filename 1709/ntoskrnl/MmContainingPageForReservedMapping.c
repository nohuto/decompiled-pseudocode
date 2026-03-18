/*
 * XREFs of MmContainingPageForReservedMapping @ 0x140216ED4
 * Callers:
 *     PnprCopyReservedMapping @ 0x1401FFC24 (PnprCopyReservedMapping.c)
 *     PnprRecopyMappingReserve @ 0x14020027C (PnprRecopyMappingReserve.c)
 * Callees:
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MmContainingPageForReservedMapping(unsigned __int64 a1)
{
  __int64 *v1; // rcx
  __int64 PteShadow; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  PteShadow = *v1;
  if ( (unsigned __int64)v1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v1 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow();
  v4 = PteShadow;
  return MI_GET_PAGE_FRAME_FROM_PTE(&v4);
}
