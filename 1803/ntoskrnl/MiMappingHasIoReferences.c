/*
 * XREFs of MiMappingHasIoReferences @ 0x14013CCF0
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14010AF00 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapContiguousMemory @ 0x14013A054 (MiMapContiguousMemory.c)
 *     MmProtectMdlSystemAddress @ 0x140254B70 (MmProtectMdlSystemAddress.c)
 *     MmMapMdl @ 0x140256AE0 (MmMapMdl.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400160B0 (MI_IS_PHYSICAL_ADDRESS.c)
 */

signed __int64 __fastcall MiMappingHasIoReferences(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  int i; // eax
  signed __int64 result; // rax
  signed __int64 v4; // rtt

  v1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  for ( i = MI_IS_PHYSICAL_ADDRESS(a1); i; --i )
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  result = MI_READ_PTE_LOCK_FREE(v1);
  do
  {
    v4 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)v1, result | 0x200, result);
  }
  while ( v4 != result );
  return result;
}
