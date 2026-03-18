/*
 * XREFs of MiMappingHasIoTracker @ 0x14011880C
 * Callers:
 *     MmUnmapIoSpace @ 0x1401186A0 (MmUnmapIoSpace.c)
 *     MmProtectMdlSystemAddress @ 0x140217160 (MmProtectMdlSystemAddress.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 */

__int64 __fastcall MiMappingHasIoTracker(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  int i; // eax
  unsigned __int64 PteShadow; // rax

  v1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  for ( i = MI_IS_PHYSICAL_ADDRESS(a1); i; --i )
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  PteShadow = *(_QWORD *)v1;
  if ( v1 >= 0xFFFFF6FB7DBED000uLL && v1 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(v1, *(_QWORD *)v1);
  return (PteShadow >> 9) & 1;
}
