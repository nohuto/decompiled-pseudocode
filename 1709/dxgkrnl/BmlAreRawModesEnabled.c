/*
 * XREFs of BmlAreRawModesEnabled @ 0x1C00D4E20
 * Callers:
 *     BmlDoesTargetModeObeyConstraint @ 0x1C00D4744 (BmlDoesTargetModeObeyConstraint.c)
 *     BmlGetNextBestSourceMode @ 0x1C00D4AB4 (BmlGetNextBestSourceMode.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x1C01F8330 (BmlGetRecommendedContentSizeForPath.c)
 *     _BmlGetPathModeListForPath @ 0x1C01F8CEC (_BmlGetPathModeListForPath.c)
 * Callees:
 *     <none>
 */

bool __fastcall BmlAreRawModesEnabled(__int64 a1)
{
  return (*(_DWORD *)(a1 + 4) & 0x20000) != 0 || (*(_DWORD *)(a1 + 8) & 4) != 0;
}
