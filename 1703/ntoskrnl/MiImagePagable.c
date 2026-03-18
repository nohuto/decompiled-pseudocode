/*
 * XREFs of MiImagePagable @ 0x1404B2468
 * Callers:
 *     MmResetDriverPaging @ 0x1404B2340 (MmResetDriverPaging.c)
 *     MiEnablePagingOfDriver @ 0x1405A21C0 (MiEnablePagingOfDriver.c)
 *     MiLockPagableSections @ 0x140803B20 (MiLockPagableSections.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x14006CE70 (MiLookupDataTableEntry.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400A3C70 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 */

__int64 __fastcall MiImagePagable(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // r11
  __int64 v4; // r11

  if ( (dword_1403E3104 & 1) != 0 || (unsigned int)MI_IS_PHYSICAL_ADDRESS(a2) )
    return 0LL;
  if ( !v3 )
    MiLookupDataTableEntry(a2, 0);
  if ( (unsigned int)MiGetSystemRegionType(a2) == 1 )
    return 0LL;
  return v4;
}
