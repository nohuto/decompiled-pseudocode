/*
 * XREFs of ?Release@CHwCacheablePoolBrush@@UEAAKXZ @ 0x1801A2C00
 * Callers:
 *     ?Release@CHwCacheablePoolBrush@@W7EAAKXZ @ 0x1800D6670 (-Release@CHwCacheablePoolBrush@@W7EAAKXZ.c)
 *     ?Release@CHwCacheablePoolBrush@@WCA@EAAKXZ @ 0x1800D6680 (-Release@CHwCacheablePoolBrush@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwCacheablePoolBrush::Release(CHwCacheablePoolBrush *this)
{
  return CMILPoolResource::Release((CHwCacheablePoolBrush *)((char *)this + 8));
}
