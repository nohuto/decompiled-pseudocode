/*
 * XREFs of ??1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x1800B2E40
 * Callers:
 *     ?ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@4@AEAPEAV4@3@Z @ 0x180043438 (-ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapCo.c)
 *     ?ReleaseD3DResources@CHwBitmapCache@@UEAAXXZ @ 0x1800435F0 (-ReleaseD3DResources@CHwBitmapCache@@UEAAXXZ.c)
 *     ??_GCHwBitmapCache@@EEAAPEAXI@Z @ 0x180043770 (--_GCHwBitmapCache@@EEAAPEAXI@Z.c)
 *     ??1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x1800B2E40 (--1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x1800B2E40 (--1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 */

void __fastcall CHwBitmapCache::FormatCacheEntry::~FormatCacheEntry(CHwBitmapCache::FormatCacheEntry *this)
{
  void *v1; // rbx
  char *v3; // rbx
  __int64 i; // rdi
  CMILRefCountBase *v5; // rcx

  v1 = (void *)*((_QWORD *)this + 1);
  if ( v1 )
  {
    CHwBitmapCache::FormatCacheEntry::~FormatCacheEntry(*((CHwBitmapCache::FormatCacheEntry **)this + 1));
    WPF::ProcessHeapImpl::Free(v1);
  }
  v3 = (char *)this + 16;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)v3 + 6); i = (unsigned int)(i + 1) )
  {
    v5 = *(CMILRefCountBase **)(*(_QWORD *)v3 + 72 * i + 64);
    if ( v5 )
      CMILRefCountBase::Release(v5);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)v3);
}
