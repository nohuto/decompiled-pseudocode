/*
 * XREFs of fsc_AddYReversal @ 0x1C02C71F8
 * Callers:
 *     fsc_CheckYReversal @ 0x1C02BA2FC (fsc_CheckYReversal.c)
 *     fsc_MeasureGlyph @ 0x1C02BAC28 (fsc_MeasureGlyph.c)
 * Callees:
 *     AddReversal @ 0x1C02C6854 (AddReversal.c)
 */

__int64 __fastcall fsc_AddYReversal(_QWORD *a1, int a2, __int16 a3)
{
  __int64 v4; // rdx
  __int64 v6; // r11

  v4 = a1[2];
  if ( (unsigned __int64)(v4 + 16) > a1[3] )
    return 6656LL;
  AddReversal(a1, v4, a2, a3);
  *(_QWORD *)(v6 + 16) += 16LL;
  return 0LL;
}
