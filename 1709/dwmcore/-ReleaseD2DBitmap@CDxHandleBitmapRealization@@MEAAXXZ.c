/*
 * XREFs of ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x18004D330
 * Callers:
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x18004D254 (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
 *     ?ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ @ 0x1801D3170 (-ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180046690 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x180089F90 (-InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ??$ReleaseInterface@VCD2DBitmap@@@@YAXAEAPEAVCD2DBitmap@@@Z @ 0x1800BDC14 (--$ReleaseInterface@VCD2DBitmap@@@@YAXAEAPEAVCD2DBitmap@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDxHandleBitmapRealization::ReleaseD2DBitmap(CDxHandleBitmapRealization *this)
{
  char *v1; // rdi
  __int64 v3; // rcx
  CD2DBitmapCache *v4; // rcx
  void (__fastcall *v5)(CD2DBitmapCache *__hidden, struct ID2DBitmapCacheSource *); // rax

  v1 = (char *)this + 392;
  v3 = *((_QWORD *)this + 49);
  if ( v3 )
  {
    CD2DResource::RemoveResourceNotifier((CD2DResource *)(v3 + 16), (CDxHandleBitmapRealization *)((char *)this + 24));
    ReleaseInterface<CD2DBitmap>(v1);
    v4 = (CDxHandleBitmapRealization *)((char *)this + 16);
    v5 = *(void (__fastcall **)(CD2DBitmapCache *__hidden, struct ID2DBitmapCacheSource *))(*((_QWORD *)this + 2) + 24LL);
    if ( v5 == CD2DBitmapCache::InitializeCache )
      CD2DBitmapCache::InitializeCache(v4, 0LL);
    else
      v5(v4, 0LL);
  }
}
