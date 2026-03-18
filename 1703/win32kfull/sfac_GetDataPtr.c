/*
 * XREFs of sfac_GetDataPtr @ 0x1C02C9974
 * Callers:
 *     sfac_ComputeMapping @ 0x1C02C94E4 (sfac_ComputeMapping.c)
 *     sfac_CopyCVT @ 0x1C02C9720 (sfac_CopyCVT.c)
 *     sfac_CopyFontAndPrePrograms @ 0x1C02C97D0 (sfac_CopyFontAndPrePrograms.c)
 *     sfac_GetGlyphIndex @ 0x1C02C99E4 (sfac_GetGlyphIndex.c)
 *     sfac_GetGlyphLocation @ 0x1C02C9A58 (sfac_GetGlyphLocation.c)
 *     sfac_GetMultiGlyphIDs @ 0x1C02C9CE4 (sfac_GetMultiGlyphIDs.c)
 *     sfac_GetSbitBitmap @ 0x1C02C9D98 (sfac_GetSbitBitmap.c)
 *     sfac_GetSbitComponentInfo @ 0x1C02CA210 (sfac_GetSbitComponentInfo.c)
 *     sfac_GetSbitMetrics @ 0x1C02CA2A8 (sfac_GetSbitMetrics.c)
 *     sfac_GetWinNTGlyphIDs @ 0x1C02CA41C (sfac_GetWinNTGlyphIDs.c)
 *     sfac_LoadCriticalSfntMetrics @ 0x1C02CA4F0 (sfac_LoadCriticalSfntMetrics.c)
 *     sfac_ReadGlyphBbox @ 0x1C02CAA10 (sfac_ReadGlyphBbox.c)
 *     sfac_ReadGlyphHeader @ 0x1C02CAAE0 (sfac_ReadGlyphHeader.c)
 *     sfac_ReadGlyphHorMetrics @ 0x1C02CAC54 (sfac_ReadGlyphHorMetrics.c)
 *     sfac_ReadGlyphVertMetrics @ 0x1C02CADA4 (sfac_ReadGlyphVertMetrics.c)
 *     sfac_ReadNumLongVertMetrics @ 0x1C02CAEF0 (sfac_ReadNumLongVertMetrics.c)
 *     sfac_SearchForBitmap @ 0x1C02CB378 (sfac_SearchForBitmap.c)
 *     sfac_SearchForStrike @ 0x1C02CB888 (sfac_SearchForStrike.c)
 *     sfac_ShaveSbitMetrics @ 0x1C02CBA74 (sfac_ShaveSbitMetrics.c)
 * Callees:
 *     InvokeGetSfntFragmentPtr @ 0x1C02C8E60 (InvokeGetSfntFragmentPtr.c)
 */

__int64 __fastcall sfac_GetDataPtr(__int64 a1, int a2, int a3, int a4, int a5, __int64 *a6)
{
  int v6; // r10d
  __int64 v7; // rax

  v6 = a3;
  if ( *(_DWORD *)(a1 + 8LL * a4 + 28) )
  {
    if ( a3 == -1 )
      v6 = *(_DWORD *)(a1 + 8LL * a4 + 28);
    v7 = InvokeGetSfntFragmentPtr(*(_DWORD *)(a1 + 8), *(_QWORD *)a1, a2 + *(_DWORD *)(a1 + 8LL * a4 + 24), v6);
    *a6 = v7;
    if ( !v7 && a5 )
      return 5128LL;
  }
  else
  {
    *a6 = 0LL;
    if ( a5 )
      return 5129LL;
  }
  return 0LL;
}
