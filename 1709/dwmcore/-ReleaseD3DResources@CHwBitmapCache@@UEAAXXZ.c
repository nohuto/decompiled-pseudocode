/*
 * XREFs of ?ReleaseD3DResources@CHwBitmapCache@@UEAAXXZ @ 0x18007E920
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??$ReleaseInterface@VCHwBitmapColorSource@@@@YAXAEAPEAVCHwBitmapColorSource@@@Z @ 0x18007E2DC (--$ReleaseInterface@VCHwBitmapColorSource@@@@YAXAEAPEAVCHwBitmapColorSource@@@Z.c)
 *     ??1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x18007E344 (--1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 *     ??0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x18007E380 (--0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 */

void __fastcall CHwBitmapCache::ReleaseD3DResources(CMILRefCountBase **this)
{
  CHwBitmapCache::FormatCacheEntry *v1; // rdi
  CMILRefCountBase *v3; // rcx

  v1 = (CHwBitmapCache::FormatCacheEntry *)(this + 19);
  CHwBitmapCache::FormatCacheEntry::~FormatCacheEntry((CHwBitmapCache::FormatCacheEntry *)(this + 19));
  if ( v1 )
    CHwBitmapCache::FormatCacheEntry::FormatCacheEntry(v1);
  ReleaseInterface<CHwBitmapColorSource>(this + 62);
  v3 = this[61];
  if ( v3 )
  {
    CMILRefCountBase::Release(v3);
    this[61] = 0LL;
  }
}
