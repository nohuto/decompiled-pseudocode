/*
 * XREFs of ??0CacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x1800B3520
 * Callers:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800B3474 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 * Callees:
 *     <none>
 */

CHwBitmapCache::CacheEntry *__fastcall CHwBitmapCache::CacheEntry::CacheEntry(CHwBitmapCache::CacheEntry *this)
{
  *((_DWORD *)this + 14) = 0;
  return this;
}
