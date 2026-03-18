/*
 * XREFs of ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x180045800
 * Callers:
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x18004575C (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
 *     ?ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ @ 0x1802150A0 (-ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x1800705D0 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x180077A60 (-InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ??$ReleaseInterface@VCD2DBitmap@@@@YAXAEAPEAVCD2DBitmap@@@Z @ 0x1800C58EC (--$ReleaseInterface@VCD2DBitmap@@@@YAXAEAPEAVCD2DBitmap@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
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
