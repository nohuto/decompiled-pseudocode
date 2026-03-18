/*
 * XREFs of MiPfnIsNonPagedPool @ 0x140260408
 * Callers:
 *     MmAreMdlPagesLocked @ 0x140812AA4 (MmAreMdlPagesLocked.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 */

_BOOL8 __fastcall MiPfnIsNonPagedPool(__int64 a1)
{
  __int64 v1; // rdx

  return (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0
      && (((unsigned int)MiGetSystemRegionType((__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16) - 5) & 0xFFFFFFF7) == 0
      && (*(_BYTE *)(v1 + 34) & 7) == 6;
}
