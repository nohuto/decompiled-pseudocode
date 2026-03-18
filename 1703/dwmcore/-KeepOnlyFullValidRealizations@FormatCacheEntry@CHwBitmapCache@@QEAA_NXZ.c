/*
 * XREFs of ?KeepOnlyFullValidRealizations@FormatCacheEntry@CHwBitmapCache@@QEAA_NXZ @ 0x18019C988
 * Callers:
 *     ?KeepOnlyFullValidRealizations@CD3DDeviceManager@@QEAA_NPEAVIBitmapSource@@@Z @ 0x180195908 (-KeepOnlyFullValidRealizations@CD3DDeviceManager@@QEAA_NPEAVIBitmapSource@@@Z.c)
 *     ?KeepOnlyFullValidRealizations@FormatCacheEntry@CHwBitmapCache@@QEAA_NXZ @ 0x18019C988 (-KeepOnlyFullValidRealizations@FormatCacheEntry@CHwBitmapCache@@QEAA_NXZ.c)
 * Callees:
 *     ?KeepOnlyFullValidRealizations@CacheEntryList@CHwBitmapCache@@QEAA_NXZ @ 0x18019C8EC (-KeepOnlyFullValidRealizations@CacheEntryList@CHwBitmapCache@@QEAA_NXZ.c)
 *     ?KeepOnlyFullValidRealizations@FormatCacheEntry@CHwBitmapCache@@QEAA_NXZ @ 0x18019C988 (-KeepOnlyFullValidRealizations@FormatCacheEntry@CHwBitmapCache@@QEAA_NXZ.c)
 */

char __fastcall CHwBitmapCache::FormatCacheEntry::KeepOnlyFullValidRealizations(CHwBitmapCache::FormatCacheEntry *this)
{
  char valid; // al
  CHwBitmapCache::FormatCacheEntry *v3; // rcx
  char v4; // di

  valid = CHwBitmapCache::CacheEntryList::KeepOnlyFullValidRealizations((CHwBitmapCache::FormatCacheEntry *)((char *)this + 16));
  v3 = (CHwBitmapCache::FormatCacheEntry *)*((_QWORD *)this + 1);
  v4 = valid;
  if ( v3 )
    return CHwBitmapCache::FormatCacheEntry::KeepOnlyFullValidRealizations(v3) & valid;
  return v4;
}
