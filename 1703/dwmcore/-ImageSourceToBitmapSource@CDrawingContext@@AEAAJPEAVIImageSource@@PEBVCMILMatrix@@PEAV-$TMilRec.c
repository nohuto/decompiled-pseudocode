/*
 * XREFs of ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x1800A23E0
 * Callers:
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@_N@Z @ 0x18000E2FC (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@PEAVCShape@@U-$TMIL.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180050730 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800A8680 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 *     ?DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DG@@@@Z @ 0x1800A8CC0 (-DrawImage@CDrawingContext@@UEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x18014B8E0 (-DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA?B_NXZ @ 0x18000CD80 (-IsNormalDesktopRender@CDrawingContext@@QEBA-B_NXZ.c)
 *     ?GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800480B0 (-GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180048580 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBitmapSource@CBitmapResource@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18007CE50 (-GetBitmapSource@CBitmapResource@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?GetBounds@CBitmapResource@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007CEC0 (-GetBounds@CBitmapResource@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF.c)
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800A5F54 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     ?GetCurrentLayoutSize@CDrawingContext@@AEBAPEBUD2D_SIZE_F@@XZ @ 0x1800A98FC (-GetCurrentLayoutSize@CDrawingContext@@AEBAPEBUD2D_SIZE_F@@XZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::ImageSourceToBitmapSource(
        CDrawingContext *this,
        CCachedVisualImage *a2,
        __int64 a3,
        _OWORD *a4,
        struct IBitmapSource **a5)
{
  __int128 v5; // xmm0
  unsigned int v6; // ebx
  __int64 v11; // rax
  const struct D2D_SIZE_F *CurrentLayoutSize; // r8
  __int64 (__fastcall *v13)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  int Bounds; // eax
  __int64 (__fastcall *v15)(CCachedVisualImage *, struct IBitmapSource **, const struct BitmapSourceInfo *); // rax
  int BitmapSource; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r10
  CCompositionSurfaceBitmap *v21; // [rsp+30h] [rbp-30h] BYREF
  __int128 v22; // [rsp+38h] [rbp-28h] BYREF
  int v23; // [rsp+48h] [rbp-18h]
  __int64 v24; // [rsp+50h] [rbp-10h]

  v5 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v6 = 0;
  v21 = 0LL;
  *a4 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *a5 = 0LL;
  v22 = v5;
  if ( a2 )
  {
    v11 = *((_QWORD *)this + 50);
    v23 = 0;
    v24 = 0LL;
    *(_QWORD *)&v22 = v11;
    DWORD2(v22) = *((_DWORD *)this + 102);
    HIDWORD(v22) = *((_DWORD *)this + 1678);
    if ( (**(int (__fastcall ***)(CCachedVisualImage *, GUID *, CCompositionSurfaceBitmap **))a2)(
           a2,
           &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2,
           &v21) >= 0 )
    {
      LOBYTE(v18) = CDrawingContext::IsNormalDesktopRender(this);
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(v19 + 160))(v20, 0LL, v18);
    }
    CurrentLayoutSize = CDrawingContext::GetCurrentLayoutSize(this);
    v13 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a2 + 112LL);
    if ( (char *)v13 == (char *)CCachedVisualImage::GetBounds )
    {
      Bounds = CCachedVisualImage::GetBounds((__int64)a2, 0LL, (bool)CurrentLayoutSize, (__int64)a4);
    }
    else if ( v13 == CBitmapResource::GetBounds )
    {
      Bounds = CBitmapResource::GetBounds((__int64)a2, 0LL, (__int64)CurrentLayoutSize, (__int64)a4);
    }
    else
    {
      Bounds = v13(a2, 0LL, CurrentLayoutSize, a4);
    }
    v6 = Bounds;
    if ( Bounds < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Bounds, 0x2587u);
    }
    else
    {
      v15 = *(__int64 (__fastcall **)(CCachedVisualImage *, struct IBitmapSource **, const struct BitmapSourceInfo *))(*(_QWORD *)a2 + 64LL);
      if ( v15 == CCachedVisualImage::GetBitmapSource )
      {
        BitmapSource = CCachedVisualImage::GetBitmapSource(a2, a5, (const struct BitmapSourceInfo *)&v22);
      }
      else if ( v15 == CBitmapResource::GetBitmapSource )
      {
        BitmapSource = CBitmapResource::GetBitmapSource(a2, a5, (const struct BitmapSourceInfo *)&v22);
      }
      else
      {
        BitmapSource = v15(a2, a5, (const struct BitmapSourceInfo *)&v22);
      }
      v6 = BitmapSource;
      if ( BitmapSource < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapSource, 0x2589u);
      else
        CDrawingContext::RecordBitmapContentInfo(this, a2, v21, a3);
    }
  }
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v21);
  return v6;
}
