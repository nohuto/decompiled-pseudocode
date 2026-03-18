/*
 * XREFs of BgkpAcquireConsole @ 0x140231778
 * Callers:
 *     BgkDisplayStringEx @ 0x140231594 (BgkDisplayStringEx.c)
 *     BgkSetTextColor @ 0x1402316B0 (BgkSetTextColor.c)
 *     BgkSolidColorFill @ 0x140231700 (BgkSolidColorFill.c)
 *     BgkDisplayCharacter @ 0x14083F650 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x14083F720 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x14083F770 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x14083F7D0 (BgkSetCursor.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 */

bool BgkpAcquireConsole()
{
  return ExAcquireRundownProtection(&stru_14039BCA8) != 0;
}
