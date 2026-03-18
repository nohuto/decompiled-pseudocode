/*
 * XREFs of BgpFmRoundUp @ 0x14013D6E0
 * Callers:
 *     BgpRasPrintGlyph @ 0x14013C14C (BgpRasPrintGlyph.c)
 *     BgpRasGetGlyphTextCellDimensions @ 0x14013C884 (BgpRasGetGlyphTextCellDimensions.c)
 *     RaspScanConvert @ 0x14013CED0 (RaspScanConvert.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpFmRoundUp(int a1)
{
  __int64 result; // rax

  result = (unsigned int)(a1 >> 6);
  if ( a1 < 0 )
    return (unsigned int)result | 0xFC000000;
  if ( (a1 & 0x3F) != 0 )
    return (unsigned int)(result + 1);
  return result;
}
