/*
 * XREFs of TtmIsEnabled @ 0x1404C5F88
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x140070CB4 (PopGetConsoleDisplayRequestCount.c)
 * Callees:
 *     <none>
 */

bool TtmIsEnabled()
{
  return TtmpEnabled == 1;
}
