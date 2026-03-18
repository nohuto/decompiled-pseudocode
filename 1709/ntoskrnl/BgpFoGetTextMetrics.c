/*
 * XREFs of BgpFoGetTextMetrics @ 0x14013C854
 * Callers:
 *     BgpConsoleSetPointSize @ 0x14013B7C0 (BgpConsoleSetPointSize.c)
 *     BgpTxtDisplayCharacter @ 0x14013BA14 (BgpTxtDisplayCharacter.c)
 *     BgpTxtCreateRegion @ 0x1407CF494 (BgpTxtCreateRegion.c)
 *     BgpTxtDisplayString @ 0x1407D4284 (BgpTxtDisplayString.c)
 *     BgpFoDetermineFontInformation @ 0x14086F728 (BgpFoDetermineFontInformation.c)
 * Callees:
 *     BgpRasGetGlyphTextCellDimensions @ 0x14013C884 (BgpRasGetGlyphTextCellDimensions.c)
 */

__int64 __fastcall BgpFoGetTextMetrics(__int64 a1, __int64 a2)
{
  if ( !a1 || !a2 )
    return 3221225485LL;
  BgpRasGetGlyphTextCellDimensions(a1, a2 + 4, a2);
  return 0LL;
}
