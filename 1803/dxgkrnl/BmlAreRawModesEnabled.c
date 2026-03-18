/*
 * XREFs of BmlAreRawModesEnabled @ 0x1C00C1688
 * Callers:
 *     BmlGetNextBestSourceMode @ 0x1C00C1358 (BmlGetNextBestSourceMode.c)
 *     BmlDoesTargetModeObeyConstraint @ 0x1C00C1A98 (BmlDoesTargetModeObeyConstraint.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x1C0226134 (BmlGetRecommendedContentSizeForPath.c)
 *     _BmlGetPathModeListForPath @ 0x1C0226A4C (_BmlGetPathModeListForPath.c)
 * Callees:
 *     <none>
 */

bool __fastcall BmlAreRawModesEnabled(__int64 a1)
{
  return (*(_DWORD *)(a1 + 4) & 0x20000) != 0 || (*(_DWORD *)(a1 + 8) & 4) != 0;
}
