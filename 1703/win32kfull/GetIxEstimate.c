/*
 * XREFs of GetIxEstimate @ 0x1C02CD054
 * Callers:
 *     fsc_MeasureGlyph @ 0x1C02C0E00 (fsc_MeasureGlyph.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetIxEstimate(_WORD *a1)
{
  __int16 v1; // ax
  _WORD *v2; // r8
  unsigned int v3; // edx

  v1 = *a1;
  v2 = a1;
  v3 = 0;
  while ( v1 != 0x7FFF )
  {
    if ( v2[1] == 1 )
      v3 -= v1;
    else
      v3 += v1;
    v2 = (_WORD *)*((_QWORD *)v2 + 1);
    v1 = *v2;
  }
  return v3;
}
