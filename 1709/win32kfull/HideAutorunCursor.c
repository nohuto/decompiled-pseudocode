/*
 * XREFs of HideAutorunCursor @ 0x1C01A1000
 * Callers:
 *     <none>
 * Callees:
 *     zzzUpdateCursorImage @ 0x1C0089310 (zzzUpdateCursorImage.c)
 *     FindTimer @ 0x1C00D7980 (FindTimer.c)
 */

void HideAutorunCursor()
{
  FindTimer(0LL, gtmridAutorunCursor, 4u, 1, 0LL);
  gtmridAutorunCursor = 0LL;
  zzzUpdateCursorImage();
}
