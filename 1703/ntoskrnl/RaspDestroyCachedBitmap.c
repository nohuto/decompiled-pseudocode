/*
 * XREFs of RaspDestroyCachedBitmap @ 0x1407586A4
 * Callers:
 *     BgpRasPrintGlyph @ 0x140140DFC (BgpRasPrintGlyph.c)
 *     RaspClearCache @ 0x140755AA0 (RaspClearCache.c)
 *     RaspAddCacheEntry @ 0x140758638 (RaspAddCacheEntry.c)
 * Callees:
 *     RaspFreeMemory @ 0x1401417C4 (RaspFreeMemory.c)
 *     RaspRectangleDestroy @ 0x14015DFC4 (RaspRectangleDestroy.c)
 */

__int64 __fastcall RaspDestroyCachedBitmap(__int64 a1)
{
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v3, 0, 24);
  RaspRectangleDestroy(*(_QWORD *)(a1 + 16), v3);
  return RaspFreeMemory(a1, v3);
}
