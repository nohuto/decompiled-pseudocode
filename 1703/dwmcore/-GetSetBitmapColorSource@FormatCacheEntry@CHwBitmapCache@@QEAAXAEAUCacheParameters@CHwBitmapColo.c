/*
 * XREFs of ?GetSetBitmapColorSource@FormatCacheEntry@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorSource@@AEAPEAV4@PEAPEAV4@@Z @ 0x1800B2D8C
 * Callers:
 *     ?ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@4@AEAPEAV4@3@Z @ 0x180043438 (-ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapCo.c)
 * Callees:
 *     ??0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x1800B2DE4 (--0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 *     ?GetSetBitmapColorSource@CacheEntryList@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorSource@@AEAPEAV4@PEAPEAV4@@Z @ 0x1800B2E98 (-GetSetBitmapColorSource@CacheEntryList@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorS.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CHwBitmapCache::FormatCacheEntry::GetSetBitmapColorSource(
        CHwBitmapCache::FormatCacheEntry *this,
        struct CHwBitmapColorSource::CacheParameters *a2,
        struct CHwBitmapColorSource **a3,
        struct CHwBitmapColorSource **a4)
{
  __int64 *v7; // rbx
  CHwBitmapCache::FormatCacheEntry *v8; // rax
  __int64 v9; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  while ( *(_DWORD *)this != *(_DWORD *)a2 )
  {
    if ( !*(_DWORD *)this )
    {
      *(_DWORD *)this = *(_DWORD *)a2;
      break;
    }
    v7 = (__int64 *)((char *)this + 8);
    if ( !*((_QWORD *)this + 1) )
    {
      v8 = (CHwBitmapCache::FormatCacheEntry *)HeapAlloc(WPF::g_processHeap, 0, 0x150uLL);
      if ( !v8 )
      {
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
        __debugbreak();
      }
      v9 = CHwBitmapCache::FormatCacheEntry::FormatCacheEntry(v8);
      *v7 = v9;
      if ( !v9 )
        return;
    }
    this = (CHwBitmapCache::FormatCacheEntry *)*v7;
  }
  CHwBitmapCache::CacheEntryList::GetSetBitmapColorSource(
    (CHwBitmapCache::FormatCacheEntry *)((char *)this + 16),
    a2,
    a3,
    a4);
}
