/*
 * XREFs of BgpFoGetTextMetrics @ 0x1401657AC
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x1401736FC (BgpTxtDisplayCharacter.c)
 *     BgpConsoleSetPointSize @ 0x14017C50C (BgpConsoleSetPointSize.c)
 *     BgpTxtCreateRegion @ 0x14083C0D0 (BgpTxtCreateRegion.c)
 *     BgpTxtDisplayString @ 0x140841398 (BgpTxtDisplayString.c)
 *     BgpFoDetermineFontInformation @ 0x1408E4884 (BgpFoDetermineFontInformation.c)
 * Callees:
 *     BgpRasGetGlyphTextCellDimensions @ 0x1401657DC (BgpRasGetGlyphTextCellDimensions.c)
 */

__int64 __fastcall BgpFoGetTextMetrics(__int64 a1, __int64 a2)
{
  if ( !a1 || !a2 )
    return 3221225485LL;
  BgpRasGetGlyphTextCellDimensions(a1, a2 + 4, a2);
  return 0LL;
}
