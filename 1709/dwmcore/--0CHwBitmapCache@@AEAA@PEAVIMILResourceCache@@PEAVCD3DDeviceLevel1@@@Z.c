/*
 * XREFs of ??0CHwBitmapCache@@AEAA@PEAVIMILResourceCache@@PEAVCD3DDeviceLevel1@@@Z @ 0x18007E97C
 * Callers:
 *     ?GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z @ 0x18007BD90 (-GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z.c)
 * Callees:
 *     ??0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x18007E380 (--0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x1800928BC (--0CD3DResource@@IEAA@_N@Z.c)
 */

CHwBitmapCache *__fastcall CHwBitmapCache::CHwBitmapCache(
        CHwBitmapCache *this,
        struct IMILResourceCache *a2,
        struct CD3DDeviceLevel1 *a3)
{
  _QWORD *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r10
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // r8
  unsigned int v10; // eax
  CHwBitmapCache *result; // rax

  CD3DResource::CD3DResource(this, 0);
  v4[16] = v5;
  *v4 = &CHwBitmapCache::`vftable'{for `CMILPoolResource'};
  v4[3] = &CD3DVidMemOnlyTexture::`vftable'{for `IDeviceResource'};
  v4[15] = &CHwBitmapCache::`vftable';
  v4[17] = v6;
  CHwBitmapCache::FormatCacheEntry::FormatCacheEntry((CHwBitmapCache::FormatCacheEntry *)(v4 + 19));
  *((_QWORD *)this + 61) = 0LL;
  *((_DWORD *)this + 133) = 0;
  *((_DWORD *)this + 138) = 1065353216;
  *((_DWORD *)this + 139) = 1065353216;
  *((_DWORD *)this + 140) = 1065353216;
  *(_QWORD *)((char *)this + 564) = 1065353216LL;
  v7 = (_QWORD *)((char *)this + 32);
  *(_QWORD *)((char *)this + 572) = 0LL;
  *((_DWORD *)this + 145) = 0;
  *((_BYTE *)this + 584) = 0;
  v8 = *((_QWORD *)this + 16) + 896LL;
  *((_DWORD *)this + 16) = 0;
  *((_BYTE *)this + 69) = 1;
  v9 = *(_QWORD **)(v8 + 40);
  if ( *v9 != v8 + 32 )
    __fastfail(3u);
  *v7 = v8 + 32;
  *((_QWORD *)this + 5) = v9;
  *v9 = v7;
  *(_QWORD *)(v8 + 40) = v7;
  if ( *((_BYTE *)this + 68) )
    ++*(_DWORD *)(v8 + 72);
  *(_DWORD *)(v8 + 48) += *((_DWORD *)this + 16);
  v10 = *(_DWORD *)(v8 + 48);
  if ( *(_DWORD *)(v8 + 52) < v10 )
    *(_DWORD *)(v8 + 52) = v10;
  *((_QWORD *)this + 2) = v8;
  result = this;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  return result;
}
