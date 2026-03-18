/*
 * XREFs of TtmIsEnabled @ 0x1404E8D34
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x1400B1110 (PopGetConsoleDisplayRequestCount.c)
 * Callees:
 *     <none>
 */

bool TtmIsEnabled()
{
  return TtmpEnabled == 1;
}
