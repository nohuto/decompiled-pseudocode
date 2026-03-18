/*
 * XREFs of ?ReleaseD3DResources@CHwBitmapCache@@UEAAXXZ @ 0x1800435F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x1800B2DE4 (--0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 *     ??1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x1800B2E40 (--1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 *     ??$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z @ 0x1800B4714 (--$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z.c)
 */

void __fastcall CHwBitmapCache::ReleaseD3DResources(CHwBitmapCache *this)
{
  CHwBitmapCache::FormatCacheEntry *v1; // rdi
  CMILRefCountBase *v3; // rcx

  v1 = (CHwBitmapCache *)((char *)this + 160);
  CHwBitmapCache::FormatCacheEntry::~FormatCacheEntry((CHwBitmapCache *)((char *)this + 160));
  if ( v1 )
    CHwBitmapCache::FormatCacheEntry::FormatCacheEntry(v1);
  ReleaseInterface<CVisualTree>((char *)this + 504);
  v3 = (CMILRefCountBase *)*((_QWORD *)this + 62);
  if ( v3 )
  {
    CMILRefCountBase::Release(v3);
    *((_QWORD *)this + 62) = 0LL;
  }
}
