/*
 * XREFs of ?KeepOnlyFullValidRealizations@CacheEntryList@CHwBitmapCache@@QEAA_NXZ @ 0x18019C8EC
 * Callers:
 *     ?KeepOnlyFullValidRealizations@FormatCacheEntry@CHwBitmapCache@@QEAA_NXZ @ 0x18019C988 (-KeepOnlyFullValidRealizations@FormatCacheEntry@CHwBitmapCache@@QEAA_NXZ.c)
 * Callees:
 *     ?IsValid@CHwBitmapColorSource@@QEBA_NXZ @ 0x180045184 (-IsValid@CHwBitmapColorSource@@QEBA_NXZ.c)
 *     ??$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z @ 0x1800B4714 (--$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseReferencesToBits@CHwBitmapColorSource@@QEAAX_N@Z @ 0x18019F1F0 (-ReleaseReferencesToBits@CHwBitmapColorSource@@QEAAX_N@Z.c)
 */

char __fastcall CHwBitmapCache::CacheEntryList::KeepOnlyFullValidRealizations(CHwBitmapCache::CacheEntryList *this)
{
  char v1; // di
  __int64 i; // rbx
  __int64 v4; // r14
  CHwBitmapColorSource *v5; // rcx

  v1 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 6); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)this + 72 * i;
    v5 = *(CHwBitmapColorSource **)(v4 + 64);
    if ( v5 )
    {
      if ( *(_BYTE *)(*(_QWORD *)this + 72 * i + 8) || !CHwBitmapColorSource::IsValid(v5) || v1 )
      {
        CHwBitmapColorSource::ReleaseReferencesToBits(v5, 1);
        ReleaseInterface<CVisualTree>((CMILRefCountBase **)(v4 + 64));
      }
      else if ( (*(int (__fastcall **)(CHwBitmapColorSource *))(*(_QWORD *)v5 + 40LL))(v5) >= 0 )
      {
        CHwBitmapColorSource::ReleaseReferencesToBits(*(CHwBitmapColorSource **)(v4 + 64), 0);
        v1 = 1;
      }
    }
  }
  return v1;
}
