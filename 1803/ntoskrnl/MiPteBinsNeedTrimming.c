/*
 * XREFs of MiPteBinsNeedTrimming @ 0x140080E4C
 * Callers:
 *     MiAdjustPteBins @ 0x140080D50 (MiAdjustPteBins.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 * Callees:
 *     MiGetNumberOfCachedPtes @ 0x140080EA0 (MiGetNumberOfCachedPtes.c)
 */

_BOOL8 __fastcall MiPteBinsNeedTrimming(__int64 a1)
{
  unsigned int NumberOfCachedPtes; // eax
  _QWORD *v2; // r9

  NumberOfCachedPtes = MiGetNumberOfCachedPtes(a1);
  return NumberOfCachedPtes >= 0x400uLL && v2[11] + (unsigned __int64)NumberOfCachedPtes > (*v2 - v2[9]) / 0xAuLL;
}
