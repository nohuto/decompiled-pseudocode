/*
 * XREFs of ?BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800A2550
 * Callers:
 *     ?ImageSourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBVCMILMatrix@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800A1DB4 (-ImageSourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBVCMILMatrix@@U-$TMILFlagsEnum.c)
 *     ?ImageSourceToD2DBitmap@CDrawingContext@@UEAAJPEAVIImageSource@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800A1E10 (-ImageSourceToD2DBitmap@CDrawingContext@@UEAAJPEAVIImageSource@@PEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?DrawBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@_NPEA_N@Z @ 0x1800A7D20 (-DrawBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1MHW4Enum@.c)
 *     ?TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x1800A87D0 (-TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 * Callees:
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA?B_NXZ @ 0x18000CD80 (-IsNormalDesktopRender@CDrawingContext@@QEBA-B_NXZ.c)
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180042064 (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 *     ?GetCurrentRenderingRealization@CCachedVisualImage@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x180047710 (-GetCurrentRenderingRealization@CCachedVisualImage@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?GetSize@CCachedVisualImage@@UEBAXPEAI0@Z @ 0x180048810 (-GetSize@CCachedVisualImage@@UEBAXPEAI0@Z.c)
 *     ?GetD2DBitmap@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180048820 (-GetD2DBitmap@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEBV-$TMilRect@IUMilRectU@@UNotNeed.c)
 *     ?GetColorSpace@CBitmap@@UEAA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x1800563D0 (-GetColorSpace@CBitmap@@UEAA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     ?GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180056420 (-GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?GetAlphaMode@CBitmap@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180056490 (-GetAlphaMode@CBitmap@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800A5F54 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     ?GetCurrentRenderTargetInfo@ID2DContextOwner@@QEAAXPEAURenderTargetInfo@@@Z @ 0x1800C21D0 (-GetCurrentRenderTargetInfo@ID2DContextOwner@@QEAAXPEAURenderTargetInfo@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::BitmapResourceToD2DBitmap(
        CDrawingContext *this,
        struct IBitmapResource *a2,
        const struct CMILMatrix *a3,
        char a4,
        struct CColorKey *a5,
        struct ID2D1Bitmap1 **a6)
{
  unsigned int v10; // ebx
  __int64 (__fastcall *v11)(CCachedVisualImage *, struct IBitmapRealization **); // rax
  int v12; // eax
  __int64 v13; // rax
  int D2DBitmapFromBitmapSource; // eax
  CBitmap *v15; // rcx
  __int64 (__fastcall *v16)(CBitmap *, enum DXGI_FORMAT *); // rax
  int PixelFormat; // eax
  __int64 (*v18)(void); // rax
  float v19; // eax
  __int64 (*v20)(void); // rax
  int ColorSpace; // eax
  const struct _GUID *v22; // r9
  __int64 v24; // r9
  __int64 (__fastcall *v25)(__int64, __int64, __int64, char, struct ID2D1Bitmap1 **); // rax
  int D2DBitmap; // eax
  void (__fastcall *v27)(CCachedVisualImage *, unsigned int *, unsigned int *); // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r10
  unsigned int v31; // [rsp+20h] [rbp-69h]
  CBitmap *v32; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v33; // [rsp+38h] [rbp-51h] BYREF
  struct IBitmapRealization *v34; // [rsp+40h] [rbp-49h] BYREF
  CCompositionSurfaceBitmap *v35; // [rsp+48h] [rbp-41h] BYREF
  enum DXGI_FORMAT v36; // [rsp+50h] [rbp-39h] BYREF
  float v37; // [rsp+54h] [rbp-35h]
  int v38; // [rsp+58h] [rbp-31h]
  __int64 v39; // [rsp+60h] [rbp-29h] BYREF
  float v40; // [rsp+68h] [rbp-21h]
  float v41; // [rsp+6Ch] [rbp-1Dh]
  int v42; // [rsp+70h] [rbp-19h]
  struct CColorKey *v43; // [rsp+78h] [rbp-11h]

  v35 = 0LL;
  v34 = 0LL;
  *a6 = 0LL;
  v32 = 0LL;
  v10 = 0;
  if ( !a2 || *((_BYTE *)this + 3040) || *((_QWORD *)this + 838) )
    return v10;
  if ( (**(int (__fastcall ***)(struct IBitmapResource *, GUID *, CCompositionSurfaceBitmap **))a2)(
         a2,
         &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2,
         &v35) >= 0 )
  {
    LOBYTE(v28) = CDrawingContext::IsNormalDesktopRender(this);
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(v29 + 160))(v30, 0LL, v28);
  }
  if ( !a5 )
  {
    v11 = *(__int64 (__fastcall **)(CCachedVisualImage *, struct IBitmapRealization **))(*(_QWORD *)a2 + 72LL);
    v12 = v11 == CCachedVisualImage::GetCurrentRenderingRealization
        ? CCachedVisualImage::GetCurrentRenderingRealization(a2, &v34)
        : v11(a2, &v34);
    if ( v12 >= 0 )
    {
      v40 = 0.0;
      ID2DContextOwner::GetCurrentRenderTargetInfo(
        (CDrawingContext *)((char *)this + 8),
        (struct RenderTargetInfo *)&v39);
      LOBYTE(v24) = a4;
      v25 = *(__int64 (__fastcall **)(__int64, __int64, __int64, char, struct ID2D1Bitmap1 **))(*(_QWORD *)v34 + 112LL);
      if ( v25 == CCachedVisualImage::GetD2DBitmap )
        D2DBitmap = CCachedVisualImage::GetD2DBitmap((__int64)v34, (__int64)&v39, 0LL, a4, a6);
      else
        D2DBitmap = ((__int64 (__fastcall *)(struct IBitmapRealization *, __int64 *, _QWORD, __int64))v25)(
                      v34,
                      &v39,
                      0LL,
                      v24);
      if ( D2DBitmap >= 0 )
      {
        v27 = *(void (__fastcall **)(CCachedVisualImage *, unsigned int *, unsigned int *))(*(_QWORD *)v34 + 24LL);
        if ( v27 == CCachedVisualImage::GetSize )
          CCachedVisualImage::GetSize(v34, &v33, (unsigned int *)&v36);
        else
          v27(v34, &v33, (unsigned int *)&v36);
        v39 = 0LL;
        v40 = (float)(int)v33;
        v41 = (float)v36;
      }
      goto LABEL_22;
    }
  }
  v39 = *((_QWORD *)this + 50);
  v40 = *((float *)this + 102);
  v41 = *((float *)this + 1678);
  v42 = a4 != 0;
  if ( a5 )
    v42 = (a4 != 0) | 2;
  v13 = *(_QWORD *)a2;
  v43 = a5;
  D2DBitmapFromBitmapSource = (*(__int64 (__fastcall **)(struct IBitmapResource *, CBitmap **, __int64 *))(v13 + 64))(
                                a2,
                                &v32,
                                &v39);
  v10 = D2DBitmapFromBitmapSource;
  if ( D2DBitmapFromBitmapSource < 0 )
  {
    v31 = 9513;
    goto LABEL_48;
  }
  v15 = v32;
  if ( !v32 )
    goto LABEL_23;
  v16 = *(__int64 (__fastcall **)(CBitmap *, enum DXGI_FORMAT *))(*(_QWORD *)v32 + 24LL);
  if ( v16 == CBitmap::GetPixelFormat )
    PixelFormat = CBitmap::GetPixelFormat(v32, &v36);
  else
    PixelFormat = v16(v32, &v36);
  v10 = PixelFormat;
  if ( PixelFormat < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormat, 0x252Du);
    goto LABEL_25;
  }
  v18 = *(__int64 (**)(void))(*(_QWORD *)v32 + 32LL);
  if ( (char *)v18 == (char *)CBitmap::GetAlphaMode )
    LODWORD(v19) = CBitmap::GetAlphaMode(v32);
  else
    LODWORD(v19) = v18();
  v37 = v19;
  v20 = *(__int64 (**)(void))(*(_QWORD *)v32 + 40LL);
  if ( (char *)v20 == (char *)CBitmap::GetColorSpace )
    ColorSpace = CBitmap::GetColorSpace(v32);
  else
    ColorSpace = v20();
  v22 = (const struct _GUID *)(*((_QWORD *)this + 4) + 324LL);
  v38 = ColorSpace;
  D2DBitmapFromBitmapSource = GetD2DBitmapFromBitmapSource(
                                v32,
                                (const struct PixelFormatInfo *)&v36,
                                (const struct BitmapSourceInfo *)&v39,
                                v22,
                                a6);
  v10 = D2DBitmapFromBitmapSource;
  if ( D2DBitmapFromBitmapSource < 0 )
  {
    v31 = 9529;
LABEL_48:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmapFromBitmapSource, v31);
    goto LABEL_25;
  }
LABEL_22:
  v15 = v32;
LABEL_23:
  if ( *a6 )
  {
    (*(void (__fastcall **)(_QWORD, enum DXGI_FORMAT *))(*(_QWORD *)*a6 + 32LL))(*a6, &v36);
    v39 = 0LL;
    v40 = *(float *)&v36;
    v41 = v37;
    CDrawingContext::RecordBitmapContentInfo(this, a2, v35, (__int64)a3);
LABEL_25:
    v15 = v32;
  }
  if ( v15 )
    (*(void (__fastcall **)(CBitmap *))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v34 )
    (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v34 + 16LL))(v34);
  if ( v35 )
    (*(void (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v35 + 16LL))(v35);
  return v10;
}
