/*
 * XREFs of BgkpReleaseConsole @ 0x1402317C0
 * Callers:
 *     BgkDisplayCharacter @ 0x14083F650 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x14083F720 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x14083F770 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x14083F7D0 (BgkSetCursor.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 */

void BgkpReleaseConsole()
{
  ExReleaseRundownProtection(&stru_14039BCA8);
}
