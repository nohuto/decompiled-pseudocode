/*
 * XREFs of FioFwReadUshortAtOffset @ 0x14013DA8C
 * Callers:
 *     RaspLoadBearings @ 0x14013D88C (RaspLoadBearings.c)
 *     RaspMapGlyphIndexToLocation @ 0x14013D9EC (RaspMapGlyphIndexToLocation.c)
 *     RaspInitializeGlyphData @ 0x14013DAC0 (RaspInitializeGlyphData.c)
 *     RaspLoadGlyphData @ 0x14013E540 (RaspLoadGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x140291B2C (RaspGetCompositeGlyphList.c)
 *     RaspLoadCompositeGlyphData @ 0x1402921B4 (RaspLoadCompositeGlyphData.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x14013DEA8 (FioFwReadBytesAtOffset.c)
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
