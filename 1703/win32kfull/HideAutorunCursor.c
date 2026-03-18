/*
 * XREFs of HideAutorunCursor @ 0x1C0195EB0
 * Callers:
 *     <none>
 * Callees:
 *     FindTimer @ 0x1C00B1F50 (FindTimer.c)
 */

__int64 HideAutorunCursor()
{
  FindTimer(0LL, gtmridAutorunCursor, 4u, 1, 0LL);
  gtmridAutorunCursor = 0LL;
  return zzzUpdateCursorImage();
}
