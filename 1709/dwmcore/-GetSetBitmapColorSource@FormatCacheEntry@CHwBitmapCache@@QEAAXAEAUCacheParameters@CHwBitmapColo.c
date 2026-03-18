/*
 * XREFs of ?GetSetBitmapColorSource@FormatCacheEntry@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorSource@@AEAPEAV4@PEAPEAV4@@Z @ 0x1801AF270
 * Callers:
 *     ?ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@4@AEAPEAV4@3@Z @ 0x1801AEAA8 (-ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapCo.c)
 * Callees:
 *     ??0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x18007E380 (--0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ?GetSetBitmapColorSource@CacheEntryList@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorSource@@AEAPEAV4@PEAPEAV4@@Z @ 0x1801AEFC8 (-GetSetBitmapColorSource@CacheEntryList@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorS.c)
 */

void __fastcall CHwBitmapCache::FormatCacheEntry::GetSetBitmapColorSource(
        CHwBitmapCache::FormatCacheEntry *this,
        struct CHwBitmapColorSource::CacheParameters *a2,
        struct CHwBitmapColorSource **a3,
        struct CHwBitmapColorSource **a4)
{
  CHwBitmapCache::FormatCacheEntry **v7; // rbx
  CHwBitmapCache::FormatCacheEntry *v8; // rax
  CHwBitmapCache::FormatCacheEntry *v9; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  while ( *(_DWORD *)this != *(_DWORD *)a2 )
  {
    if ( !*(_DWORD *)this )
    {
      *(_DWORD *)this = *(_DWORD *)a2;
      break;
    }
    v7 = (CHwBitmapCache::FormatCacheEntry **)((char *)this + 8);
    if ( !*((_QWORD *)this + 1) )
    {
      v8 = (CHwBitmapCache::FormatCacheEntry *)HeapAlloc(WPF::g_processHeap, 0, 0x150uLL);
      if ( !v8 )
        ModuleFailFastForHRESULT(-2147024882, retaddr);
      v9 = CHwBitmapCache::FormatCacheEntry::FormatCacheEntry(v8);
      *v7 = v9;
      if ( !v9 )
        return;
    }
    this = *v7;
  }
  CHwBitmapCache::CacheEntryList::GetSetBitmapColorSource(
    (CHwBitmapCache::FormatCacheEntry *)((char *)this + 16),
    (__int64)a2,
    a3,
    a4);
}
