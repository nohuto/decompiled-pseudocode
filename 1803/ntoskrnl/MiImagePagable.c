/*
 * XREFs of MiImagePagable @ 0x1405BB4C4
 * Callers:
 *     MmResetDriverPaging @ 0x1405BB0E0 (MmResetDriverPaging.c)
 *     MiEnablePagingOfDriver @ 0x14061C480 (MiEnablePagingOfDriver.c)
 *     MiLockPagableSections @ 0x14089C824 (MiLockPagableSections.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400160B0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MiLookupDataTableEntry @ 0x14013F6A8 (MiLookupDataTableEntry.c)
 */

__int64 __fastcall MiImagePagable(__int64 a1, unsigned __int64 a2)
{
  if ( (dword_14044B164 & 1) != 0 || (unsigned int)MI_IS_PHYSICAL_ADDRESS(a2) )
    return 0LL;
  if ( !a1 )
    a1 = MiLookupDataTableEntry(a2, 1LL);
  if ( (unsigned int)MiGetSystemRegionType(a2) == 1 )
    return 0LL;
  return a1;
}
