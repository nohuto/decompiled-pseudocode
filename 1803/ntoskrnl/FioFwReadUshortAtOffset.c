/*
 * XREFs of FioFwReadUshortAtOffset @ 0x1401750DC
 * Callers:
 *     RaspLoadBearings @ 0x140174EEC (RaspLoadBearings.c)
 *     RaspMapGlyphIndexToLocation @ 0x14017503C (RaspMapGlyphIndexToLocation.c)
 *     RaspInitializeGlyphData @ 0x140175110 (RaspInitializeGlyphData.c)
 *     RaspLoadGlyphData @ 0x1401759F8 (RaspLoadGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x1402C7648 (RaspGetCompositeGlyphList.c)
 *     RaspLoadCompositeGlyphData @ 0x1402C7CEC (RaspLoadCompositeGlyphData.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x1401754D8 (FioFwReadBytesAtOffset.c)
 */

__int64 __fastcall FioFwReadUshortAtOffset(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 result; // rax

  result = FioFwReadBytesAtOffset(a1, a2, 2LL, a3);
  if ( (int)result >= 0 )
  {
    *a3 = __ROR2__(*a3, 8);
    return 0LL;
  }
  return result;
}
