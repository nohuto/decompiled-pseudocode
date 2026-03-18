/*
 * XREFs of BgkpReleaseConsole @ 0x1401EEB90
 * Callers:
 *     BgkDisplayCharacter @ 0x140759AC0 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x140759B80 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x140759BD0 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x140759C30 (BgkSetCursor.c)
 * Callees:
 *     <none>
 */

void BgkpReleaseConsole()
{
  ExReleaseRundownProtection(&stru_140340058);
}
