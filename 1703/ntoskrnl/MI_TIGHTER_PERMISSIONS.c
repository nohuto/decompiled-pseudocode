/*
 * XREFs of MI_TIGHTER_PERMISSIONS @ 0x14006C6F4
 * Callers:
 *     MiSetSystemCodeProtection @ 0x14006C1E0 (MiSetSystemCodeProtection.c)
 *     MiProtectPool @ 0x1400A5D90 (MiProtectPool.c)
 *     MmSetAddressRangeModifiedEx @ 0x140101470 (MmSetAddressRangeModifiedEx.c)
 *     MmProtectSystemCacheView @ 0x1402126D8 (MmProtectSystemCacheView.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_TIGHTER_PERMISSIONS(unsigned __int64 a1, unsigned __int64 a2)
{
  return (a2 & 0x40) == 0 && (a1 & 0x40) != 0
      || (a2 & 2) == 0 && (a1 & 2) != 0
      || a1 < 0x8000000000000000uLL && a2 >= 0x8000000000000000uLL;
}
