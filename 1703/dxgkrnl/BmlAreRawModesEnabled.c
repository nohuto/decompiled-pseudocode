/*
 * XREFs of BmlAreRawModesEnabled @ 0x1C00F4C00
 * Callers:
 *     BmlDoesTargetModeObeyConstraint @ 0x1C00F4360 (BmlDoesTargetModeObeyConstraint.c)
 *     BmlGetNextBestSourceMode @ 0x1C00F48C0 (BmlGetNextBestSourceMode.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x1C01DF248 (BmlGetRecommendedContentSizeForPath.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall BmlAreRawModesEnabled(__int64 a1)
{
  return (*(_DWORD *)(a1 + 4) & 0x20000) != 0 || (*(_DWORD *)(a1 + 8) & 4) != 0;
}
