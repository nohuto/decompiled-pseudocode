/*
 * XREFs of EditionIsWinEventsDeferred @ 0x1C01C46D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 EditionIsWinEventsDeferred()
{
  return gdwDeferWinEvent != 0;
}
