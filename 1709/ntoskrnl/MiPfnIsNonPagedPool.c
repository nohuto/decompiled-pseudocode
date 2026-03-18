/*
 * XREFs of MiPfnIsNonPagedPool @ 0x1402214A8
 * Callers:
 *     MmAreMdlPagesLocked @ 0x1407A5AD4 (MmAreMdlPagesLocked.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 */

_BOOL8 __fastcall MiPfnIsNonPagedPool(__int64 a1)
{
  unsigned __int64 v2; // rdx

  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
    return 0LL;
  v2 = (__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16;
  return (*(_BYTE *)(a1 + 34) & 7) == 6
      && (unsigned int)MiGetSystemRegionType((__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16) == 5
      || (unsigned int)MiGetSystemRegionType(v2) == 13;
}
