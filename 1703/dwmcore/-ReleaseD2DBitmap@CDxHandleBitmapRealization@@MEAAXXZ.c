/*
 * XREFs of ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x18007A0A0
 * Callers:
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x18007A318 (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
 *     ?ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ @ 0x1801B6470 (-ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18004BD30 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x18007A4B0 (-InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ??$ReleaseInterface@VCD2DBitmap@@@@YAXAEAPEAVCD2DBitmap@@@Z @ 0x18007CD08 (--$ReleaseInterface@VCD2DBitmap@@@@YAXAEAPEAVCD2DBitmap@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDxHandleBitmapRealization::ReleaseD2DBitmap(CDxHandleBitmapRealization *this)
{
  char *v1; // rdi
  __int64 v3; // rcx
  CD2DBitmapCache *v4; // rcx
  void (__fastcall *v5)(CD2DBitmapCache *__hidden, struct ID2DBitmapCacheSource *); // rax

  v1 = (char *)this + 408;
  v3 = *((_QWORD *)this + 51);
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
