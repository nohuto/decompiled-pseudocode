/*
 * XREFs of FioFwReadUshortAtOffset @ 0x140142540
 * Callers:
 *     RaspLoadBearings @ 0x14014233C (RaspLoadBearings.c)
 *     RaspMapGlyphIndexToLocation @ 0x1401424A0 (RaspMapGlyphIndexToLocation.c)
 *     RaspInitializeGlyphData @ 0x140142574 (RaspInitializeGlyphData.c)
 *     RaspLoadGlyphData @ 0x140143048 (RaspLoadGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x1402677D4 (RaspGetCompositeGlyphList.c)
 *     RaspLoadCompositeGlyphData @ 0x140267E60 (RaspLoadCompositeGlyphData.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x14014294C (FioFwReadBytesAtOffset.c)
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
