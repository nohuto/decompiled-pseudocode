/*
 * XREFs of InvokeReleaseSfntFrag @ 0x1C02C8F8C
 * Callers:
 *     sfac_ComputeMapping @ 0x1C02C94E4 (sfac_ComputeMapping.c)
 *     sfac_CopyCVT @ 0x1C02C9720 (sfac_CopyCVT.c)
 *     sfac_CopyFontAndPrePrograms @ 0x1C02C97D0 (sfac_CopyFontAndPrePrograms.c)
 *     sfac_DoOffsetTableMap @ 0x1C02C989C (sfac_DoOffsetTableMap.c)
 *     sfac_GetGlyphIndex @ 0x1C02C99E4 (sfac_GetGlyphIndex.c)
 *     sfac_GetGlyphLocation @ 0x1C02C9A58 (sfac_GetGlyphLocation.c)
 *     sfac_GetMultiGlyphIDs @ 0x1C02C9CE4 (sfac_GetMultiGlyphIDs.c)
 *     sfac_GetSbitBitmap @ 0x1C02C9D98 (sfac_GetSbitBitmap.c)
 *     sfac_GetSbitComponentInfo @ 0x1C02CA210 (sfac_GetSbitComponentInfo.c)
 *     sfac_GetSbitMetrics @ 0x1C02CA2A8 (sfac_GetSbitMetrics.c)
 *     sfac_GetWinNTGlyphIDs @ 0x1C02CA41C (sfac_GetWinNTGlyphIDs.c)
 *     sfac_LoadCriticalSfntMetrics @ 0x1C02CA4F0 (sfac_LoadCriticalSfntMetrics.c)
 *     sfac_ReadGlyphBbox @ 0x1C02CAA10 (sfac_ReadGlyphBbox.c)
 *     sfac_ReadGlyphHorMetrics @ 0x1C02CAC54 (sfac_ReadGlyphHorMetrics.c)
 *     sfac_ReadGlyphVertMetrics @ 0x1C02CADA4 (sfac_ReadGlyphVertMetrics.c)
 *     sfac_ReadNumLongVertMetrics @ 0x1C02CAEF0 (sfac_ReadNumLongVertMetrics.c)
 *     sfac_ReleaseGlyph @ 0x1C02CB348 (sfac_ReleaseGlyph.c)
 *     sfac_SearchForBitmap @ 0x1C02CB378 (sfac_SearchForBitmap.c)
 *     sfac_SearchForStrike @ 0x1C02CB888 (sfac_SearchForStrike.c)
 *     sfac_ShaveSbitMetrics @ 0x1C02CBA74 (sfac_ShaveSbitMetrics.c)
 * Callees:
 *     <none>
 */

void __fastcall InvokeReleaseSfntFrag(int a1)
{
  if ( (unsigned int)(a1 - 1) >= 2 )
    EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
}
