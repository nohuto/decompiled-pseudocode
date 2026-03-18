/*
 * XREFs of ??1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x18007E344
 * Callers:
 *     ??1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x18007E344 (--1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 *     ??_GCHwBitmapCache@@EEAAPEAXI@Z @ 0x18007E880 (--_GCHwBitmapCache@@EEAAPEAXI@Z.c)
 *     ?ReleaseD3DResources@CHwBitmapCache@@UEAAXXZ @ 0x18007E920 (-ReleaseD3DResources@CHwBitmapCache@@UEAAXXZ.c)
 *     ?ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@4@AEAPEAV4@3@Z @ 0x1801AEAA8 (-ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapCo.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x18007E344 (--1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
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
