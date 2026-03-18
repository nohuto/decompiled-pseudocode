/*
 * XREFs of ?Release@CHwCacheablePoolBrush@@UEAAKXZ @ 0x1801BC4D0
 * Callers:
 *     ?Release@CHwCacheablePoolBrush@@W7EAAKXZ @ 0x1800C6EB0 (-Release@CHwCacheablePoolBrush@@W7EAAKXZ.c)
 *     ?Release@CHwCacheablePoolBrush@@WCA@EAAKXZ @ 0x1800C6EC0 (-Release@CHwCacheablePoolBrush@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwCacheablePoolBrush::Release(CHwCacheablePoolBrush *this)
{
  return CMILPoolResource::Release((CHwCacheablePoolBrush *)((char *)this + 8));
}
