/*
 * XREFs of RaspDestroyCachedBitmap @ 0x1407D00AC
 * Callers:
 *     BgpRasPrintGlyph @ 0x14013C14C (BgpRasPrintGlyph.c)
 *     RaspClearCache @ 0x1407CF9E4 (RaspClearCache.c)
 *     RaspAddCacheEntry @ 0x1407D0044 (RaspAddCacheEntry.c)
 * Callees:
 *     RaspRectangleDestroy @ 0x14013CB44 (RaspRectangleDestroy.c)
 *     RaspFreeMemory @ 0x14013CD18 (RaspFreeMemory.c)
 */

__int64 __fastcall RaspDestroyCachedBitmap(__int64 a1)
{
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v3, 0, 24);
  RaspRectangleDestroy(*(_QWORD *)(a1 + 16), (__int64)v3);
  return RaspFreeMemory(a1, v3);
}
