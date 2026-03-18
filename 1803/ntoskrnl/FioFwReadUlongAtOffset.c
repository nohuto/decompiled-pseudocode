/*
 * XREFs of FioFwReadUlongAtOffset @ 0x140173670
 * Callers:
 *     RaspMapGlyphIndexToLocation @ 0x14017503C (RaspMapGlyphIndexToLocation.c)
 *     BgpFoInitialize @ 0x1408E3930 (BgpFoInitialize.c)
 *     FopInitializeFonts @ 0x1408E3A2C (FopInitializeFonts.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x1401754D8 (FioFwReadBytesAtOffset.c)
 */

__int64 __fastcall FioFwReadUlongAtOffset(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 result; // rax

  result = FioFwReadBytesAtOffset(a1, a2, 4LL, a3);
  if ( (int)result >= 0 )
  {
    *a3 = _byteswap_ulong(*a3);
    return 0LL;
  }
  return result;
}
