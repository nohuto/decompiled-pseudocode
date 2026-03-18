/*
 * XREFs of MiPteBinsNeedTrimming @ 0x1400F0AD8
 * Callers:
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     MiAdjustPteBins @ 0x1400F09DC (MiAdjustPteBins.c)
 * Callees:
 *     MiGetNumberOfCachedPtes @ 0x1400F0B2C (MiGetNumberOfCachedPtes.c)
 */

_BOOL8 __fastcall MiPteBinsNeedTrimming(__int64 a1)
{
  unsigned int NumberOfCachedPtes; // eax
  _QWORD *v2; // r9

  NumberOfCachedPtes = MiGetNumberOfCachedPtes(a1);
  return NumberOfCachedPtes >= 0x400uLL && v2[12] + (unsigned __int64)NumberOfCachedPtes > (*v2 - v2[10]) / 0xAuLL;
}
