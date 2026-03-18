/*
 * XREFs of ?ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEAV2@@Z @ 0x1800678EC
 * Callers:
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180008334 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U-$TMIL.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18006C978 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBUMilRectF@@1HU-$TMILFlagsEnum@W4FlagsEnum.c)
 *     ?DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18006EC50 (-DrawBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifi.c)
 * Callees:
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA?B_NXZ @ 0x180007CE8 (-IsNormalDesktopRender@CDrawingContext@@QEBA-B_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18006AFF4 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     ?GetCurrentLayoutSize@CDrawingContext@@AEBAPEBUD2D_SIZE_F@@XZ @ 0x18006E44C (-GetCurrentLayoutSize@CDrawingContext@@AEBAPEBUD2D_SIZE_F@@XZ.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetBounds@CGdiSpriteBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180093C10 (-GetBounds@CGdiSpriteBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRect.c)
 *     ?GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800947F0 (-GetCurrentRenderingRealization@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetDeviceImageSourceFromBitmapSource@@YAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@AEBUBitmapSourceInfo@@PEAPEAVIImageSource@@@Z @ 0x1801C7C70 (-GetDeviceImageSourceFromBitmapSource@@YAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@AEBUBitmapSour.c)
 */

__int64 __fastcall CDrawingContext::ImageSourceToDrawListImageSource(
        CDrawingContext *this,
        struct IImageSource *a2,
        const struct CMILMatrix *a3,
        struct IImageSource **a4)
{
  int (__fastcall **v4)(struct IImageSource *, GUID *, CCompositionSurfaceBitmap **); // rax
  struct IBitmapRealization *v5; // rbx
  struct IImageSource *v10; // r14
  __int64 (__fastcall *v11)(CGdiSpriteBitmap *__hidden, struct IBitmapRealization **); // rax
  int CurrentRenderingRealization; // eax
  unsigned int v13; // edi
  const struct D2D_SIZE_F *CurrentLayoutSize; // r8
  __int64 (__fastcall *v15)(struct IImageSource *, _QWORD, const struct D2D_SIZE_F *, _BYTE *); // rax
  int Bounds; // eax
  struct IBitmapRealization *v17; // rcx
  CCompositionSurfaceBitmap *v18; // rcx
  __int64 v20; // r8
  __int64 v21; // r10
  __int64 v22; // r9
  int v23; // eax
  struct IBitmapSource *v24; // rdi
  const struct PixelFormatInfo *v25; // rax
  int DeviceImageSourceFromBitmapSource; // eax
  struct IBitmapSource *v27; // [rsp+30h] [rbp-49h] BYREF
  struct IBitmapRealization *v28; // [rsp+38h] [rbp-41h] BYREF
  CCompositionSurfaceBitmap *v29; // [rsp+40h] [rbp-39h] BYREF
  struct IImageSource *v30; // [rsp+48h] [rbp-31h] BYREF
  __int64 v31; // [rsp+50h] [rbp-29h] BYREF
  int v32; // [rsp+58h] [rbp-21h]
  int v33; // [rsp+5Ch] [rbp-1Dh]
  int v34; // [rsp+60h] [rbp-19h]
  __int64 v35; // [rsp+68h] [rbp-11h]
  _BYTE v36[16]; // [rsp+70h] [rbp-9h] BYREF

  v4 = *(int (__fastcall ***)(struct IImageSource *, GUID *, CCompositionSurfaceBitmap **))a2;
  v5 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v30 = 0LL;
  v10 = 0LL;
  if ( (*v4)(a2, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v29) >= 0 )
  {
    LOBYTE(v20) = CDrawingContext::IsNormalDesktopRender(this);
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(v21 + 176))(v22, 0LL, v20);
  }
  v11 = *(__int64 (__fastcall **)(CGdiSpriteBitmap *__hidden, struct IBitmapRealization **))(*(_QWORD *)a2 + 80LL);
  if ( v11 == CGdiSpriteBitmap::GetCurrentRenderingRealization )
    CurrentRenderingRealization = CGdiSpriteBitmap::GetCurrentRenderingRealization(a2, &v28);
  else
    CurrentRenderingRealization = v11(a2, &v28);
  v13 = CurrentRenderingRealization;
  if ( CurrentRenderingRealization < 0 )
  {
    v31 = *((_QWORD *)this + 49);
    v32 = *((_DWORD *)this + 100);
    v33 = *((_DWORD *)this + 101);
    v27 = 0LL;
    v34 = 0;
    v35 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
    v23 = (*(__int64 (__fastcall **)(struct IImageSource *, struct IBitmapSource **, __int64 *))(*(_QWORD *)a2 + 72LL))(
            a2,
            &v27,
            &v31);
    v13 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x24B8u);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
      goto LABEL_28;
    }
    v5 = v27;
    if ( v27 )
    {
      Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(&v30);
      v24 = v27;
      v25 = (const struct PixelFormatInfo *)(*(__int64 (__fastcall **)(struct IBitmapRealization *, _BYTE *))(*(_QWORD *)v5 + 24LL))(
                                              v5,
                                              v36);
      DeviceImageSourceFromBitmapSource = GetDeviceImageSourceFromBitmapSource(
                                            v24,
                                            v25,
                                            (const struct BitmapSourceInfo *)&v31,
                                            &v30);
      v5 = 0LL;
      v13 = DeviceImageSourceFromBitmapSource;
      if ( DeviceImageSourceFromBitmapSource < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DeviceImageSourceFromBitmapSource, 0x24BFu);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
        v10 = v30;
        goto LABEL_28;
      }
      v10 = v30;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
  }
  else
  {
    (*(void (__fastcall **)(struct IImageSource *))(*(_QWORD *)a2 + 8LL))(a2);
    v10 = a2;
  }
  if ( !v10 )
  {
LABEL_12:
    *a4 = v10;
    goto LABEL_13;
  }
  CurrentLayoutSize = CDrawingContext::GetCurrentLayoutSize(this);
  v15 = *(__int64 (__fastcall **)(struct IImageSource *, _QWORD, const struct D2D_SIZE_F *, _BYTE *))(*(_QWORD *)a2 + 120LL);
  if ( (char *)v15 == (char *)CGdiSpriteBitmap::GetBounds )
    Bounds = CGdiSpriteBitmap::GetBounds(a2, 0LL, CurrentLayoutSize, v36);
  else
    Bounds = v15(a2, 0LL, CurrentLayoutSize, v36);
  v13 = Bounds;
  if ( Bounds >= 0 )
  {
    CDrawingContext::RecordBitmapContentInfo(this, a2, v29, a3);
    goto LABEL_12;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Bounds, 0x24CDu);
LABEL_28:
  if ( v10 )
    (*(void (__fastcall **)(struct IImageSource *))(*(_QWORD *)v10 + 16LL))(v10);
LABEL_13:
  v17 = v28;
  if ( v28 )
  {
    v28 = v5;
    (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = v29;
  if ( v29 )
  {
    v29 = v5;
    (*(void (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return v13;
}
