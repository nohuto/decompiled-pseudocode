/*
 * XREFs of BgpRasGetGlyphTextCellDimensions @ 0x140141558
 * Callers:
 *     BgpFoGetTextMetrics @ 0x140141528 (BgpFoGetTextMetrics.c)
 * Callees:
 *     BgpFmRoundUp @ 0x140142190 (BgpFmRoundUp.c)
 */

__int64 __fastcall BgpRasGetGlyphTextCellDimensions(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v3; // r10
  int v5; // r11d
  unsigned int v6; // ecx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  *a2 = BgpFmRoundUp(
          ((*(unsigned int *)(a1 + 16)
          * *(unsigned int *)(v3 + 96)
          * (__int64)(*(__int16 *)(v3 + 82) - *(__int16 *)(v3 + 84))) << 6)
        / (72LL
         * *(unsigned __int16 *)(v3 + 120)),
          ((*(unsigned int *)(a1 + 16)
          * *(unsigned int *)(v3 + 96)
          * (__int64)(*(__int16 *)(v3 + 82) - *(__int16 *)(v3 + 84))) << 6)
        % (72LL * *(unsigned __int16 *)(v3 + 120)))
      + 2;
  v6 = (v5 >> 6) | 0xFC000000;
  if ( v5 >= 0 )
    v6 = v5 >> 6;
  result = v6 + 1;
  if ( (v5 & 0x20) == 0 )
    result = v6;
  *a3 = result;
  return result;
}
