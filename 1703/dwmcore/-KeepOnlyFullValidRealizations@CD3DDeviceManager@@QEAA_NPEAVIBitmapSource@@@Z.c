/*
 * XREFs of ?KeepOnlyFullValidRealizations@CD3DDeviceManager@@QEAA_NPEAVIBitmapSource@@@Z @ 0x180195908
 * Callers:
 *     ?ProcessUnmapSection@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UNMAPSECTION@@@Z @ 0x180022CE0 (-ProcessUnmapSection@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UNMAP.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x1800B5384 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?KeepOnlyFullValidRealizations@FormatCacheEntry@CHwBitmapCache@@QEAA_NXZ @ 0x18019C988 (-KeepOnlyFullValidRealizations@FormatCacheEntry@CHwBitmapCache@@QEAA_NXZ.c)
 */

bool __fastcall CD3DDeviceManager::KeepOnlyFullValidRealizations(
        CD3DDeviceManager *this,
        int (__fastcall ***a2)(struct IBitmapSource *, GUID *, __int64 *))
{
  int (__fastcall **v2)(struct IBitmapSource *, GUID *, __int64 *); // rax
  int v4; // r14d
  unsigned int i; // esi
  __int64 v6; // rdi
  __int64 *v7; // rdx
  __int64 *v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v2 = *a2;
  v14 = 0LL;
  v4 = 0;
  if ( (*v2)((struct IBitmapSource *)a2, &GUID_7d331c5d_1dc7_4bf7_8791_00fd3fe381c8, &v14) >= 0 )
  {
    for ( i = 0; i < *((_DWORD *)this + 60); ++i )
    {
      v6 = *(_QWORD *)(*((_QWORD *)this + 16) + 40LL * i);
      v13 = 0LL;
      ++*(_DWORD *)(v6 + 936);
      if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v14 + 24LL))(
             v14,
             *(unsigned int *)(v6 + 512),
             &v13) >= 0
        && v13 )
      {
        if ( CHwBitmapCache::FormatCacheEntry::KeepOnlyFullValidRealizations((CHwBitmapCache::FormatCacheEntry *)(v13 + 32)) )
          ++v4;
        ReleaseInterfaceNoNULL<CPolygon>(v13);
      }
      v7 = *(__int64 **)(v6 + 1016);
      v8 = (__int64 *)(v6 + 1008);
      while ( v7 != v8 && *((_DWORD *)v7 + 8) == *(_DWORD *)(v6 + 936) )
      {
        *((_DWORD *)v7 + 8) = 0;
        v7 = (__int64 *)v7[1];
      }
      v9 = *v7;
      if ( (__int64 *)*v7 != v8 )
      {
        v10 = *(_QWORD **)(v6 + 1016);
        *v7 = (__int64)v8;
        v11 = *(_QWORD **)(v6 + 1000);
        *(_QWORD *)(v6 + 1016) = v7;
        *v11 = v9;
        *(_QWORD *)(v9 + 8) = v11;
        *(_QWORD *)(v6 + 1000) = v10;
        *v10 = v6 + 992;
      }
      --*(_DWORD *)(v6 + 936);
    }
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return v4 == *((_DWORD *)this + 60);
}
