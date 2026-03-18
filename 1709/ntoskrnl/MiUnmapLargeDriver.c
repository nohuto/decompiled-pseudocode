/*
 * XREFs of MiUnmapLargeDriver @ 0x1406EC428
 * Callers:
 *     MiUnloadSystemImage @ 0x140515B1C (MiUnloadSystemImage.c)
 *     MiUseLargeDriverPage @ 0x140542AC8 (MiUseLargeDriverPage.c)
 * Callees:
 *     MiFreeContiguousPages @ 0x140118318 (MiFreeContiguousPages.c)
 *     MiGetPdeAddress @ 0x1401322DC (MiGetPdeAddress.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiUnmapLargePages @ 0x14022E928 (MiUnmapLargePages.c)
 */

unsigned __int64 __fastcall MiUnmapLargeDriver(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 *PdeAddress; // rax
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r10

  PdeAddress = (unsigned __int64 *)MiGetPdeAddress(a1);
  v4 = (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  v5 = MI_GET_PAGE_FRAME_FROM_PTE(PdeAddress);
  MiUnmapLargePages(v6, v4 << 12, 12);
  return MiFreeContiguousPages((__int64)&MiSystemPartition, v5, v4);
}
