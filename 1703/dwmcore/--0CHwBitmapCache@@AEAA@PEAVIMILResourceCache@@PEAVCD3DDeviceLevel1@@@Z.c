/*
 * XREFs of ??0CHwBitmapCache@@AEAA@PEAVIMILResourceCache@@PEAVCD3DDeviceLevel1@@@Z @ 0x18004364C
 * Callers:
 *     ?GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z @ 0x18007D224 (-GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x18004C004 (--0CD3DResource@@IEAA@_N@Z.c)
 *     ?Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z @ 0x18004D2D4 (-Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z.c)
 *     ??0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x1800B2DE4 (--0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 */

CHwBitmapCache *__fastcall CHwBitmapCache::CHwBitmapCache(
        CHwBitmapCache *this,
        struct IMILResourceCache *a2,
        struct CD3DDeviceLevel1 *a3)
{
  _QWORD *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // r10
  __int64 v8; // r9
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  unsigned int v11; // eax
  CHwBitmapCache *result; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // rcx

  CD3DResource::CD3DResource(this, 0);
  v4[17] = v5;
  *v4 = &CHwBitmapCache::`vftable'{for `CMILPoolResource'};
  v4[3] = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  v4[16] = &CHwBitmapCache::`vftable';
  v4[18] = v6;
  CHwBitmapCache::FormatCacheEntry::FormatCacheEntry((CHwBitmapCache::FormatCacheEntry *)(v4 + 20));
  v7 = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_DWORD *)this + 135) = 0;
  *((_DWORD *)this + 140) = 1065353216;
  *((_DWORD *)this + 141) = 1065353216;
  *((_DWORD *)this + 142) = 1065353216;
  *(_QWORD *)((char *)this + 572) = 1065353216LL;
  *(_QWORD *)((char *)this + 580) = 0LL;
  *((_DWORD *)this + 147) = 0;
  *((_BYTE *)this + 592) = 0;
  v8 = *((_QWORD *)this + 17) + 928LL;
  *((_DWORD *)this + 18) = 0;
  *((_BYTE *)this + 77) = 1;
  if ( *((_BYTE *)this + 68) )
  {
    v13 = *(_QWORD **)(v8 + 88);
    v14 = (_QWORD *)((char *)this + 32);
    if ( *v13 != v8 + 80 )
      __fastfail(3u);
    *((_QWORD *)this + 5) = v13;
    *v14 = v8 + 80;
    *v13 = v14;
    *(_QWORD *)(v8 + 88) = v14;
    CD3DResourceManager::Use((CD3DResourceManager *)v8, this);
  }
  else
  {
    v9 = *(_QWORD **)(v8 + 40);
    v10 = (_QWORD *)((char *)this + 32);
    if ( *v9 != v8 + 32 )
      __fastfail(3u);
    *v10 = v8 + 32;
    *((_QWORD *)this + 5) = v9;
    *v9 = v10;
    *(_QWORD *)(v8 + 40) = v10;
  }
  if ( *((_BYTE *)this + 76) != (_BYTE)v7 )
    ++*(_DWORD *)(v8 + 120);
  *(_DWORD *)(v8 + 96) += *((_DWORD *)this + 18);
  v11 = *(_DWORD *)(v8 + 96);
  if ( *(_DWORD *)(v8 + 100) < v11 )
    *(_DWORD *)(v8 + 100) = v11;
  *((_QWORD *)this + 2) = v8;
  result = this;
  *((_QWORD *)this + 19) = v7;
  *((_QWORD *)this + 63) = v7;
  return result;
}
