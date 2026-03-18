/*
 * XREFs of ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x1800372A8
 * Callers:
 *     ?DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0GJ@@@@Z @ 0x18003FD10 (-DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x18013CCD0 (-DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 * Callees:
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18003AEA4 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     ?GetCurrentLayoutSize@CDrawingContext@@AEBAPEBUD2D_SIZE_F@@XZ @ 0x18004079C (-GetCurrentLayoutSize@CDrawingContext@@AEBAPEBUD2D_SIZE_F@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA?B_NXZ @ 0x18011ABE8 (-IsNormalDesktopRender@CDrawingContext@@QEBA-B_NXZ.c)
 */

__int64 __fastcall CDrawingContext::ImageSourceToBitmapSource(
        CDrawingContext *this,
        __int64 *a2,
        __int64 a3,
        _OWORD *a4,
        _QWORD *a5)
{
  __int128 v5; // xmm0
  unsigned int v6; // ebx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rbx
  const struct D2D_SIZE_F *CurrentLayoutSize; // rax
  int v14; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r10
  __int64 v19; // [rsp+30h] [rbp-30h] BYREF
  __int128 v20; // [rsp+38h] [rbp-28h] BYREF
  int v21; // [rsp+48h] [rbp-18h]
  __int64 v22; // [rsp+50h] [rbp-10h]

  v5 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v6 = 0;
  v19 = 0LL;
  *a4 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *a5 = 0LL;
  v20 = v5;
  if ( a2 )
  {
    v10 = *((_QWORD *)this + 49);
    v21 = 0;
    v22 = 0LL;
    *(_QWORD *)&v20 = v10;
    *((_QWORD *)&v20 + 1) = *((_QWORD *)this + 50);
    if ( (*(int (__fastcall **)(__int64 *, GUID *, __int64 *))*a2)(a2, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v19) >= 0 )
    {
      LOBYTE(v16) = CDrawingContext::IsNormalDesktopRender(this);
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(v17 + 176))(v18, 0LL, v16);
    }
    v11 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, __int128 *))(*a2 + 72))(a2, a5, &v20);
    v6 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x2338u);
    }
    else if ( *a5 )
    {
      v12 = *a2;
      CurrentLayoutSize = CDrawingContext::GetCurrentLayoutSize(this);
      v14 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, const struct D2D_SIZE_F *, _OWORD *))(v12 + 120))(
              a2,
              0LL,
              CurrentLayoutSize,
              a4);
      v6 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x2341u);
      else
        CDrawingContext::RecordBitmapContentInfo(this, a2, v19, a4, 0LL);
    }
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return v6;
}
