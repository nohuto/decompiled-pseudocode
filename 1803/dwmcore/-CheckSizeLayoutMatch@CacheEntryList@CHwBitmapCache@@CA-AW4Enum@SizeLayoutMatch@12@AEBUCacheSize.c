/*
 * XREFs of ?CheckSizeLayoutMatch@CacheEntryList@CHwBitmapCache@@CA?AW4Enum@SizeLayoutMatch@12@AEBUCacheSizeLayoutParameters@CHwBitmapColorSource@@0@Z @ 0x1801E7A48
 * Callers:
 *     ?GetSetBitmapColorSource@CacheEntryList@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorSource@@AEAPEAV4@PEAPEAV4@@Z @ 0x1801E80F8 (-GetSetBitmapColorSource@CacheEntryList@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorS.c)
 * Callees:
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180083960 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800839A8 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

__int64 __fastcall CHwBitmapCache::CacheEntryList::CheckSizeLayoutMatch(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  char v3; // r9
  int v4; // eax
  _DWORD *v5; // rdx
  _DWORD *v6; // rdx
  _DWORD *v7; // r9

  v2 = 0;
  if ( *(_DWORD *)a1 == *(_DWORD *)a2 && *(_DWORD *)(a1 + 4) == *(_DWORD *)(a2 + 4) )
  {
    v3 = *(_BYTE *)(a1 + 8);
    if ( !v3
      && (unsigned int)(*(_DWORD *)(a1 + 36) - 1) > 1
      && (unsigned int)(*(_DWORD *)(a1 + 48) - 1) > 1
      && (unsigned int)(*(_DWORD *)(a2 + 36) - 1) > 1
      && (unsigned int)(*(_DWORD *)(a2 + 48) - 1) > 1 )
    {
      v4 = *(_DWORD *)(a1 + 56);
      if ( v4 == DisplayId::None || *(_DWORD *)(a2 + 56) == v4 )
        v2 = 1;
    }
    if ( *(_DWORD *)(a1 + 56) == *(_DWORD *)(a2 + 56)
      && *(_DWORD *)(a1 + 36) == *(_DWORD *)(a2 + 36)
      && *(_DWORD *)(a1 + 48) == *(_DWORD *)(a2 + 48)
      && v3 == *(_BYTE *)(a2 + 8)
      && *(_DWORD *)(a1 + 12) >= *(_DWORD *)(a2 + 12) )
    {
      if ( v3 )
      {
        if ( !TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty((_DWORD *)(a1 + 16))
          && !TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v5)
          && v7[2] > *v6
          && v6[2] > *v7
          && v7[3] > v6[1]
          && v6[3] > v7[1] )
        {
          return (unsigned int)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(
                                 (__int64)v7,
                                 (__int64)v6)
               + 2;
        }
      }
      else
      {
        return 3;
      }
    }
  }
  return v2;
}
