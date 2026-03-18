/*
 * XREFs of ?BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x18015E654
 * Callers:
 *     ?ImageSourceToD2DBitmap@CDrawingContext@@UEAAJPEAVIImageSource@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180161BF0 (-ImageSourceToD2DBitmap@CDrawingContext@@UEAAJPEAVIImageSource@@PEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA?B_NXZ @ 0x180007CE8 (-IsNormalDesktopRender@CDrawingContext@@QEBA-B_NXZ.c)
 *     ??$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z @ 0x18001DE20 (--$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x1800665E4 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18006AFF4 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1801C893C (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 */

__int64 __fastcall CDrawingContext::BitmapResourceToD2DBitmap(
        CDrawingContext *this,
        struct IBitmapResource *a2,
        const struct CMILMatrix *a3,
        char a4,
        struct ID2D1Bitmap1 **a5)
{
  unsigned int v5; // ebx
  int (__fastcall ***v9)(struct IBitmapResource *, GUID *, CCompositionSurfaceBitmap **); // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // r9
  __int64 v14; // rax
  int v15; // eax
  int D2DBitmapFromBitmapSource; // eax
  struct IBitmapSource *v18; // [rsp+30h] [rbp-50h] BYREF
  CCompositionSurfaceBitmap *v19; // [rsp+38h] [rbp-48h] BYREF
  __int64 v20; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v21[2]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v22; // [rsp+58h] [rbp-28h] BYREF
  BOOL v23; // [rsp+68h] [rbp-18h]
  __int64 v24; // [rsp+70h] [rbp-10h]

  v5 = 0;
  v19 = 0LL;
  v20 = 0LL;
  v18 = 0LL;
  *a5 = 0LL;
  if ( a2 && !CDrawingContext::IsBounding(this) )
  {
    if ( (**v9)(a2, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v19) >= 0 )
    {
      LOBYTE(v10) = CDrawingContext::IsNormalDesktopRender(this);
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(v11 + 176))(v12, 0LL, v10);
    }
    if ( (*(int (__fastcall **)(struct IBitmapResource *, __int64 *))(*(_QWORD *)a2 + 80LL))(a2, &v20) < 0 )
    {
      v14 = *((_QWORD *)this + 49);
      v24 = 0LL;
      *(_QWORD *)&v22 = v14;
      *((_QWORD *)&v22 + 1) = *((_QWORD *)this + 50);
      v23 = a4 != 0;
      v15 = (*(__int64 (__fastcall **)(struct IBitmapResource *, struct IBitmapSource **, __int128 *))(*(_QWORD *)a2 + 72LL))(
              a2,
              &v18,
              &v22);
      v5 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x241Bu);
        goto LABEL_14;
      }
      if ( v18 )
      {
        (*(void (__fastcall **)(struct IBitmapSource *, _QWORD *))(*(_QWORD *)v18 + 24LL))(v18, v21);
        D2DBitmapFromBitmapSource = GetD2DBitmapFromBitmapSource(
                                      v18,
                                      (const struct PixelFormatInfo *)v21,
                                      (const struct BitmapSourceInfo *)&v22,
                                      a5);
        v5 = D2DBitmapFromBitmapSource;
        if ( D2DBitmapFromBitmapSource < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DBitmapFromBitmapSource, 0x2427u);
          goto LABEL_14;
        }
      }
    }
    else
    {
      LOBYTE(v13) = a4;
      (*(void (__fastcall **)(__int64, char *, _QWORD, __int64, struct ID2D1Bitmap1 **))(*(_QWORD *)v20 + 136LL))(
        v20,
        (char *)this + 392,
        0LL,
        v13,
        a5);
    }
    if ( *a5 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*a5 + 32LL))(*a5, v21);
      *(_QWORD *)&v22 = 0LL;
      *((_QWORD *)&v22 + 1) = v21[0];
      CDrawingContext::RecordBitmapContentInfo(this, a2, v19, &v22, 0LL);
    }
  }
LABEL_14:
  ReleaseInterfaceNoNULL<IBitmapSource>((__int64)v18);
  ReleaseInterfaceNoNULL<IWICBitmap>(v20);
  if ( v19 )
    (*(void (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v19 + 16LL))(v19);
  return v5;
}
