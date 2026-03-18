/*
 * XREFs of MiUnmapLargeDriver @ 0x140755F38
 * Callers:
 *     MiUnloadSystemImage @ 0x1405BCA9C (MiUnloadSystemImage.c)
 *     MiUseLargeDriverPage @ 0x1405F83BC (MiUseLargeDriverPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPdeAddress @ 0x14003B3E0 (MiGetPdeAddress.c)
 *     MiFreeContiguousPages @ 0x1400C98C4 (MiFreeContiguousPages.c)
 *     MiUnmapLargePages @ 0x140268FF4 (MiUnmapLargePages.c)
 */

unsigned __int64 __fastcall MiUnmapLargeDriver(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 PdeAddress; // rax
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r10

  PdeAddress = MiGetPdeAddress(a1);
  v4 = (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  v5 = MI_READ_PTE_LOCK_FREE(PdeAddress);
  MiUnmapLargePages(v6, v4 << 12, 12);
  return MiFreeContiguousPages((__int64)&MiSystemPartition, (v5 >> 12) & 0xFFFFFFFFFLL, v4);
}
