/*
 * XREFs of CalcActualGlyphIntensity @ 0x1C02522B0
 * Callers:
 *     AdjustGlyphIntenisty @ 0x1C025216C (AdjustGlyphIntenisty.c)
 * Callees:
 *     <none>
 */

__m128 __fastcall CalcActualGlyphIntensity(__int64 a1, unsigned int a2)
{
  int v2; // r9d
  int v3; // r11d
  _BYTE *v4; // r8
  __int64 v5; // r10
  int v6; // eax
  __int128 v7; // xmm1

  v2 = 0;
  v3 = 0;
  if ( !a2 )
    return (__m128)0LL;
  v4 = (_BYTE *)(a1 + 16);
  v5 = a2;
  do
  {
    if ( *v4 )
    {
      v6 = dword_1C02E3E20[(unsigned __int8)*v4];
      v3 += BYTE1(v6) + BYTE2(v6) + (unsigned __int8)v6;
      ++v2;
    }
    ++v4;
    --v5;
  }
  while ( v5 );
  if ( !v2 )
    return (__m128)0LL;
  v7 = 0LL;
  *(float *)&v7 = (float)v3 / (float)v2;
  return (__m128)v7;
}
