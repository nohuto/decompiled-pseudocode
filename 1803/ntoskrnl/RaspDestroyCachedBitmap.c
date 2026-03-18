/*
 * XREFs of RaspDestroyCachedBitmap @ 0x14083D5E4
 * Callers:
 *     BgpRasPrintGlyph @ 0x140173ACC (BgpRasPrintGlyph.c)
 *     RaspClearCache @ 0x14083C73C (RaspClearCache.c)
 *     RaspAddCacheEntry @ 0x14083D57C (RaspAddCacheEntry.c)
 * Callees:
 *     RaspRectangleDestroy @ 0x140174288 (RaspRectangleDestroy.c)
 *     RaspFreeMemory @ 0x140174460 (RaspFreeMemory.c)
 */

void __fastcall RaspDestroyCachedBitmap(__int64 a1)
{
  _QWORD v2[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v2, 0, 24);
  RaspRectangleDestroy(*(_QWORD *)(a1 + 16), (__int64)v2);
  RaspFreeMemory(a1, v2);
}
