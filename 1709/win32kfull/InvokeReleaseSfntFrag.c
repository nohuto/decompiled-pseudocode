/*
 * XREFs of InvokeReleaseSfntFrag @ 0x1C02C2D94
 * Callers:
 *     sfac_ComputeMapping @ 0x1C02C32F0 (sfac_ComputeMapping.c)
 *     sfac_CopyCVT @ 0x1C02C3538 (sfac_CopyCVT.c)
 *     sfac_CopyFontAndPrePrograms @ 0x1C02C35E8 (sfac_CopyFontAndPrePrograms.c)
 *     sfac_DoOffsetTableMap @ 0x1C02C36B4 (sfac_DoOffsetTableMap.c)
 *     sfac_GetGlyphIndex @ 0x1C02C37FC (sfac_GetGlyphIndex.c)
 *     sfac_GetGlyphLocation @ 0x1C02C3870 (sfac_GetGlyphLocation.c)
 *     sfac_GetMultiGlyphIDs @ 0x1C02C3B0C (sfac_GetMultiGlyphIDs.c)
 *     sfac_GetSbitBitmap @ 0x1C02C3BC0 (sfac_GetSbitBitmap.c)
 *     sfac_GetSbitComponentInfo @ 0x1C02C4038 (sfac_GetSbitComponentInfo.c)
 *     sfac_GetSbitMetrics @ 0x1C02C40D0 (sfac_GetSbitMetrics.c)
 *     sfac_GetWinNTGlyphIDs @ 0x1C02C4244 (sfac_GetWinNTGlyphIDs.c)
 *     sfac_LoadCriticalSfntMetrics @ 0x1C02C4318 (sfac_LoadCriticalSfntMetrics.c)
 *     sfac_ReadGlyphBbox @ 0x1C02C4838 (sfac_ReadGlyphBbox.c)
 *     sfac_ReadGlyphHorMetrics @ 0x1C02C4A7C (sfac_ReadGlyphHorMetrics.c)
 *     sfac_ReadGlyphVertMetrics @ 0x1C02C4BC4 (sfac_ReadGlyphVertMetrics.c)
 *     sfac_ReadNumLongVertMetrics @ 0x1C02C4D08 (sfac_ReadNumLongVertMetrics.c)
 *     sfac_ReleaseGlyph @ 0x1C02C515C (sfac_ReleaseGlyph.c)
 *     sfac_SearchForBitmap @ 0x1C02C518C (sfac_SearchForBitmap.c)
 *     sfac_SearchForStrike @ 0x1C02C569C (sfac_SearchForStrike.c)
 *     sfac_ShaveSbitMetrics @ 0x1C02C5888 (sfac_ShaveSbitMetrics.c)
 * Callees:
 *     <none>
 */

void __fastcall InvokeReleaseSfntFrag(int a1)
{
  if ( (unsigned int)(a1 - 1) >= 2 )
    EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
}
