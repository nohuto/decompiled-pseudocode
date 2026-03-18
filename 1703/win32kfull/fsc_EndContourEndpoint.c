/*
 * XREFs of fsc_EndContourEndpoint @ 0x1C02CE128
 * Callers:
 *     fsc_FillGlyph @ 0x1C02C0850 (fsc_FillGlyph.c)
 * Callees:
 *     CheckHorizTopology @ 0x1C02CDEC0 (CheckHorizTopology.c)
 *     CheckVertTopology @ 0x1C02CDF84 (CheckVertTopology.c)
 */

__int64 __fastcall fsc_EndContourEndpoint(char a1)
{
  __int64 result; // rax

  if ( (dword_1C0338B1C & 0x3F) != 0x20
    || (result = CheckHorizTopology(dword_1C0338B20, dword_1C0338B24, a1), !(_DWORD)result) )
  {
    if ( (a1 & 2) != 0 )
      return 0LL;
    if ( (dword_1C0338B18 & 0x3F) != 0x20 )
      return 0LL;
    result = CheckVertTopology(dword_1C0338B20, dword_1C0338B24, a1);
    if ( !(_DWORD)result )
      return 0LL;
  }
  return result;
}
