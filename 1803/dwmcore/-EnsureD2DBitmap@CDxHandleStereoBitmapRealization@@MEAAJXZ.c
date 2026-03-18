/*
 * XREFs of ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x180214C90
 * Callers:
 *     ?GetD2DBitmap@CDxHandleStereoBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180214D40 (-GetD2DBitmap@CDxHandleStereoBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV-$TMilRect@IUMilR.c)
 *     ?GetDXGIResource@CDxHandleStereoBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x180214E30 (-GetDXGIResource@CDxHandleStereoBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@.c)
 *     ?GetDeviceTexture@CDxHandleStereoBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180214ED0 (-GetDeviceTexture@CDxHandleStereoBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTex.c)
 * Callees:
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180045860 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?CreateSubResourceD2DBitmap@CD2DBitmap@@QEAAJIPEAPEAV1@@Z @ 0x1801E594C (-CreateSubResourceD2DBitmap@CD2DBitmap@@QEAAJIPEAPEAV1@@Z.c)
 *     ?ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ @ 0x1802150A0 (-ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ.c)
 */

__int64 __fastcall CDxHandleStereoBitmapRealization::EnsureD2DBitmap(CD2DBitmap **this)
{
  int v2; // eax
  int v3; // edx
  int v4; // ebx
  int SubResourceD2DBitmap; // eax

  v2 = CDxHandleBitmapRealization::EnsureD2DBitmap((CDxHandleBitmapRealization *)this);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xE9u);
  }
  else if ( !this[51] )
  {
    SubResourceD2DBitmap = CD2DBitmap::CreateSubResourceD2DBitmap(this[49], v3, this + 51);
    v4 = SubResourceD2DBitmap;
    if ( SubResourceD2DBitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SubResourceD2DBitmap, 0xF1u);
    else
      (*((void (__fastcall **)(char *, unsigned __int64))this[54] + 3))(
        (char *)this + 432,
        ((unsigned __int64)this[51] + 112) & -(__int64)(this[51] != 0LL));
  }
  if ( v4 < 0 )
    CDxHandleStereoBitmapRealization::ReleaseD2DBitmap((CDxHandleStereoBitmapRealization *)this);
  return (unsigned int)v4;
}
