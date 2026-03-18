/*
 * XREFs of BgkpAcquireConsole @ 0x1401EEB48
 * Callers:
 *     BgkDisplayStringEx @ 0x1401EE964 (BgkDisplayStringEx.c)
 *     BgkSetTextColor @ 0x1401EEA80 (BgkSetTextColor.c)
 *     BgkSolidColorFill @ 0x1401EEAD0 (BgkSolidColorFill.c)
 *     BgkDisplayCharacter @ 0x140759AC0 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x140759B80 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x140759BD0 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x140759C30 (BgkSetCursor.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 */

bool BgkpAcquireConsole()
{
  return ExAcquireRundownProtection(&stru_140340058) != 0;
}
