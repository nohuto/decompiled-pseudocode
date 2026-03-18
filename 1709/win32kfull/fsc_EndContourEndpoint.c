/*
 * XREFs of fsc_EndContourEndpoint @ 0x1C02C7EF4
 * Callers:
 *     fsc_FillGlyph @ 0x1C02BA658 (fsc_FillGlyph.c)
 * Callees:
 *     CheckHorizTopology @ 0x1C02C7C94 (CheckHorizTopology.c)
 *     CheckVertTopology @ 0x1C02C7D58 (CheckVertTopology.c)
 */

__int64 __fastcall fsc_EndContourEndpoint(char a1)
{
  __int64 result; // rax

  if ( (dword_1C033423C & 0x3F) != 0x20
    || (result = CheckHorizTopology(dword_1C0334240, dword_1C0334244, a1), !(_DWORD)result) )
  {
    if ( (a1 & 2) != 0 )
      return 0LL;
    if ( (dword_1C0334238 & 0x3F) != 0x20 )
      return 0LL;
    result = CheckVertTopology(dword_1C0334240, dword_1C0334244, a1);
    if ( !(_DWORD)result )
      return 0LL;
  }
  return result;
}
