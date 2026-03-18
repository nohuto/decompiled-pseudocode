/*
 * XREFs of ??0CHwBitmapCache@@AEAA@PEAVIMILResourceCache@@PEAVCD3DDeviceLevel1@@@Z @ 0x1800CC24C
 * Callers:
 *     ?GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z @ 0x1800CBF30 (-GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x180021A80 (--0CD3DResource@@IEAA@_N@Z.c)
 *     ?Init@CD3DResource@@IEAAXPEAVIMILPoolManager@@I@Z @ 0x180021AD4 (-Init@CD3DResource@@IEAAXPEAVIMILPoolManager@@I@Z.c)
 *     ??0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x1800CC9B4 (--0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 */

CHwBitmapCache *__fastcall CHwBitmapCache::CHwBitmapCache(
        CHwBitmapCache *this,
        struct IMILResourceCache *a2,
        struct CD3DDeviceLevel1 *a3)
{
  _QWORD *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r10
  CHwBitmapCache *result; // rax
  __int64 v8; // r10

  CD3DResource::CD3DResource(this, 0);
  v4[16] = v5;
  *v4 = &CHwBitmapCache::`vftable'{for `CMILPoolResource'};
  v4[3] = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  v4[15] = &CHwBitmapCache::`vftable';
  v4[17] = v6;
  CHwBitmapCache::FormatCacheEntry::FormatCacheEntry((CHwBitmapCache::FormatCacheEntry *)(v4 + 19));
  *((_QWORD *)this + 61) = 0LL;
  *((_DWORD *)this + 133) = 0;
  *((_DWORD *)this + 138) = 1065353216;
  *((_DWORD *)this + 139) = 1065353216;
  *((_DWORD *)this + 140) = 1065353216;
  *(_QWORD *)((char *)this + 564) = 1065353216LL;
  *(_QWORD *)((char *)this + 572) = 0LL;
  *((_DWORD *)this + 145) = 0;
  *((_BYTE *)this + 584) = 0;
  CD3DResource::Init(this, (struct IMILPoolManager *)(*((_QWORD *)this + 16) + 896LL), 0);
  result = this;
  *((_QWORD *)this + 18) = v8;
  *((_QWORD *)this + 62) = v8;
  return result;
}
