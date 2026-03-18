/*
 * XREFs of MiMappingHasIoReferences @ 0x1401253CC
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapContiguousMemory @ 0x1401243E0 (MiMapContiguousMemory.c)
 *     MmProtectMdlSystemAddress @ 0x14020FE00 (MmProtectMdlSystemAddress.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400A3C70 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

signed __int64 __fastcall MiMappingHasIoReferences(unsigned __int64 a1)
{
  int i; // eax
  unsigned __int64 v2; // r11
  signed __int64 result; // rax
  volatile signed __int64 *v4; // r11
  signed __int64 v5; // rtt

  for ( i = MI_IS_PHYSICAL_ADDRESS(a1); i; --i )
    v2 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  result = MI_READ_PTE_LOCK_FREE(v2);
  do
  {
    v5 = result;
    result = _InterlockedCompareExchange64(v4, result | 0x200, result);
  }
  while ( v5 != result );
  return result;
}
