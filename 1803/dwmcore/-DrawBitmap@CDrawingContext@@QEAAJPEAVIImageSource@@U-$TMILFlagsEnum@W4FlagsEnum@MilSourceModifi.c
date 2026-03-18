/*
 * XREFs of ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18006EC50
 * Callers:
 *     ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x18006C6F0 (-DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z.c)
 *     ?Draw@CPlaneCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18015BA40 (-Draw@CPlaneCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?DrawIntoBaseTile@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAVCDrawingContext@@@Z @ 0x1801B2960 (-DrawIntoBaseTile@CImageLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAVCDrawingContext@@@Z.c)
 *     ?GenerateTransformIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801B484C (-GenerateTransformIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x1800640D0 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180064350 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x1800665E4 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEAV2@@Z @ 0x1800678EC (-ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEA.c)
 *     ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x18006D6FC (-DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x18006DF14 (-FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B4BB0 (-GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawBitmap(CDrawingContext *this, struct IImageSource *a2, char a3)
{
  __int64 (__fastcall *v6)(struct IImageSource *, _QWORD, _QWORD, __int128 *); // rax
  int Bounds; // eax
  unsigned int v8; // edi
  int v9; // eax
  int v11; // eax
  int v12; // eax
  struct IImageSource *v13; // [rsp+40h] [rbp-39h] BYREF
  __int128 v14; // [rsp+48h] [rbp-31h] BYREF
  _BYTE v15[80]; // [rsp+60h] [rbp-19h] BYREF

  v6 = *(__int64 (__fastcall **)(struct IImageSource *, _QWORD, _QWORD, __int128 *))(*(_QWORD *)a2 + 120LL);
  if ( (char *)v6 == (char *)CCachedVisualImage::GetBounds )
    Bounds = CCachedVisualImage::GetBounds(a2, 0LL, 0LL, &v14);
  else
    Bounds = v6(a2, 0LL, 0LL, &v14);
  v8 = Bounds;
  if ( Bounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Bounds, 0x644u);
  }
  else if ( CDrawingContext::IsBounding(this) )
  {
    CRectanglesShape::CRectanglesShape((CRectanglesShape *)v15, (const struct MilRectF *)&v14);
    v9 = CDrawingContext::FillShapeForBounds(this, (const struct CShape *)v15);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x65Bu);
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v15);
  }
  else
  {
    v13 = 0LL;
    Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(&v13);
    v11 = CDrawingContext::ImageSourceToDrawListImageSource(this, a2, 0LL, &v13);
    v8 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x649u);
    }
    else if ( v13 )
    {
      v12 = CDrawingContext::DrawBitmapWithPartialOcclusionAsDrawList(
              (__int64)this,
              v13,
              &v14,
              (int *)&v14,
              *((_DWORD *)this + 1690),
              *((_DWORD *)this + 65),
              a3 & 1);
      v8 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x654u);
    }
    Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(&v13);
  }
  return v8;
}
