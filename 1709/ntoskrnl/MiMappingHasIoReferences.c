/*
 * XREFs of MiMappingHasIoReferences @ 0x140119C0C
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapContiguousMemory @ 0x1401199F4 (MiMapContiguousMemory.c)
 *     MmProtectMdlSystemAddress @ 0x140217160 (MmProtectMdlSystemAddress.c)
 *     MmMapMdl @ 0x14021A540 (MmMapMdl.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 */

signed __int64 __fastcall MiMappingHasIoReferences(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  int i; // eax
  signed __int64 PteShadow; // rax
  signed __int64 result; // rax
  signed __int64 v5; // rtt
  signed __int64 v6; // rdx

  v1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  for ( i = MI_IS_PHYSICAL_ADDRESS(a1); i; --i )
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  PteShadow = *(_QWORD *)v1;
  if ( v1 >= 0xFFFFF6FB7DBED000uLL && v1 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(v1, *(_QWORD *)v1);
  v5 = PteShadow;
  result = _InterlockedCompareExchange64((volatile signed __int64 *)v1, PteShadow | 0x200, PteShadow);
  if ( v5 != result )
  {
    do
    {
      v6 = result;
      result = _InterlockedCompareExchange64((volatile signed __int64 *)v1, result | 0x200, result);
    }
    while ( result != v6 );
  }
  return result;
}
