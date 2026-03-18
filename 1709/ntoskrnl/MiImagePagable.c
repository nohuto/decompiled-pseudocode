/*
 * XREFs of MiImagePagable @ 0x140516BA8
 * Callers:
 *     MmResetDriverPaging @ 0x140516F70 (MmResetDriverPaging.c)
 *     MiEnablePagingOfDriver @ 0x1405B2C7C (MiEnablePagingOfDriver.c)
 *     MiLockPagableSections @ 0x1408296B4 (MiLockPagableSections.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLookupDataTableEntry @ 0x1400DCDF4 (MiLookupDataTableEntry.c)
 */

PVOID *__fastcall MiImagePagable(PVOID *a1, unsigned __int64 a2)
{
  if ( (dword_140400104 & 1) != 0 || (unsigned int)MI_IS_PHYSICAL_ADDRESS(a2) )
    return 0LL;
  if ( !a1 )
    a1 = MiLookupDataTableEntry(a2, 0);
  if ( (unsigned int)MiGetSystemRegionType(a2) == 1 )
    return 0LL;
  return a1;
}
