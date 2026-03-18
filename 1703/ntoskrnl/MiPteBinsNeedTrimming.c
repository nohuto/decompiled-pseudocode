/*
 * XREFs of MiPteBinsNeedTrimming @ 0x140084B90
 * Callers:
 *     MiAdjustPteBins @ 0x1400843F0 (MiAdjustPteBins.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 * Callees:
 *     MiGetNumberOfCachedPtes @ 0x1400850EC (MiGetNumberOfCachedPtes.c)
 */

_BOOL8 __fastcall MiPteBinsNeedTrimming(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int NumberOfCachedPtes; // eax
  _QWORD *v4; // r9

  NumberOfCachedPtes = MiGetNumberOfCachedPtes(a1, a2, a3, a1);
  return NumberOfCachedPtes >= 0x400uLL && v4[12] + (unsigned __int64)NumberOfCachedPtes > (*v4 - v4[10]) / 0xAuLL;
}
