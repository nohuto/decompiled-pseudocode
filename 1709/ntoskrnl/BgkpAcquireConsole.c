/*
 * XREFs of BgkpAcquireConsole @ 0x1401F4248
 * Callers:
 *     BgkDisplayStringEx @ 0x1401F4064 (BgkDisplayStringEx.c)
 *     BgkSetTextColor @ 0x1401F4180 (BgkSetTextColor.c)
 *     BgkSolidColorFill @ 0x1401F41D0 (BgkSolidColorFill.c)
 *     BgkDisplayCharacter @ 0x1407D2BE0 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x1407D2CB0 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x1407D2D00 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x1407D2D60 (BgkSetCursor.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 */

bool BgkpAcquireConsole()
{
  return ExAcquireRundownProtection_0(&stru_1403586B8) != 0;
}
