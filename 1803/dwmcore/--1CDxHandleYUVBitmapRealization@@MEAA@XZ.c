/*
 * XREFs of ??1CDxHandleYUVBitmapRealization@@MEAA@XZ @ 0x18021526C
 * Callers:
 *     ??_GCDxHandleYUVBitmapRealization@@MEAAPEAXI@Z @ 0x180215320 (--_GCDxHandleYUVBitmapRealization@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x180215F50 (-ReleaseVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ.c)
 */

void __fastcall CDxHandleYUVBitmapRealization::~CDxHandleYUVBitmapRealization(CDxHandleYUVBitmapRealization *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CDxHandleYUVBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DBitmapCacheSourceRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CDxHandleYUVBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 11) = &CDxHandleYUVBitmapRealization::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 18) = &CDxHandleYUVBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 49) = &CDxHandleYUVBitmapRealization::`vftable';
  v2 = (void *)*((_QWORD *)this + 35);
  if ( v2 )
    CloseHandle(v2);
  CDxHandleYUVBitmapRealization::ReleaseVidMemOnlyTexture(this);
  CBitmapRealization::~CBitmapRealization(this);
}
