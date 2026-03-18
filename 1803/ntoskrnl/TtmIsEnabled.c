/*
 * XREFs of TtmIsEnabled @ 0x14051D2F4
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x140074B28 (PopGetConsoleDisplayRequestCount.c)
 * Callees:
 *     <none>
 */

bool TtmIsEnabled()
{
  return TtmpEnabled == 1;
}
