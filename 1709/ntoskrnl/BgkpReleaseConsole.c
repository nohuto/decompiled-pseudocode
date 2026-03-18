/*
 * XREFs of BgkpReleaseConsole @ 0x1401F4290
 * Callers:
 *     BgkDisplayCharacter @ 0x1407D2BE0 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x1407D2CB0 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x1407D2D00 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x1407D2D60 (BgkSetCursor.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 */

void BgkpReleaseConsole()
{
  ExReleaseRundownProtection_0(&stru_1403586B8);
}
