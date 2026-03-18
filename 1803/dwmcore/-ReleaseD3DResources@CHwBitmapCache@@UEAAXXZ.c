/*
 * XREFs of ?ReleaseD3DResources@CHwBitmapCache@@UEAAXXZ @ 0x1800CC1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??_GFormatCacheEntry@CHwBitmapCache@@QEAAPEAXI@Z @ 0x1800CC988 (--_GFormatCacheEntry@CHwBitmapCache@@QEAAPEAXI@Z.c)
 *     ??0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x1800CC9B4 (--0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 *     ??$ReleaseInterface@VCHwBitmapColorSource@@@@YAXAEAPEAVCHwBitmapColorSource@@@Z @ 0x1800CE214 (--$ReleaseInterface@VCHwBitmapColorSource@@@@YAXAEAPEAVCHwBitmapColorSource@@@Z.c)
 */

void __fastcall CHwBitmapCache::ReleaseD3DResources(CHwBitmapCache *this)
{
  CHwBitmapCache::FormatCacheEntry *v1; // rdi
  CMILRefCountBase *v3; // rcx

  v1 = (CHwBitmapCache *)((char *)this + 152);
  CHwBitmapCache::FormatCacheEntry::`scalar deleting destructor'((CHwBitmapCache *)((char *)this + 152), 0);
  if ( v1 )
    CHwBitmapCache::FormatCacheEntry::FormatCacheEntry(v1);
  ReleaseInterface<CHwBitmapColorSource>((char *)this + 496);
  v3 = (CMILRefCountBase *)*((_QWORD *)this + 61);
  if ( v3 )
  {
    CMILRefCountBase::Release(v3);
    *((_QWORD *)this + 61) = 0LL;
  }
}
