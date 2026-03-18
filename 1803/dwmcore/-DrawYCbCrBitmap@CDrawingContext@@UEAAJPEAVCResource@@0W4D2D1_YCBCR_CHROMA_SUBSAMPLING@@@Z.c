/*
 * XREFs of ?DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z @ 0x180160D80
 * Callers:
 *     ?Draw@CYCbCrSurface@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801AA580 (-Draw@CYCbCrSurface@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180066CF0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?GetOpacity@CDrawingContext@@QEBAMXZ @ 0x1800DAA1C (-GetOpacity@CDrawingContext@@QEBAMXZ.c)
 *     ?GetD2DInterpolationMode@CDrawingContext@@QEBA?AW4D2D1_INTERPOLATION_MODE@@XZ @ 0x1800DAA44 (-GetD2DInterpolationMode@CDrawingContext@@QEBA-AW4D2D1_INTERPOLATION_MODE@@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180186E54 (-GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@QEAAJPEAVID2DContextOwner@@PE.c)
 */

__int64 __fastcall CDrawingContext::DrawYCbCrBitmap(
        CDrawingContext *this,
        struct CResource *a2,
        struct CResource *a3,
        enum D2D1_YCBCR_CHROMA_SUBSAMPLING a4)
{
  __int64 v4; // rax
  int D2DBitmapRealizationForContextOwner; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  CDrawingContext *v13; // rcx
  float Opacity; // xmm0_4
  __int64 v15; // r9
  int v16; // r8d
  int v17; // r10d
  __int64 v18; // r11
  int v19; // eax
  struct ID2D1Bitmap1 *v21; // [rsp+50h] [rbp-30h] BYREF
  struct ID2D1Bitmap1 *v22; // [rsp+58h] [rbp-28h] BYREF
  _DWORD v23[2]; // [rsp+60h] [rbp-20h] BYREF
  _DWORD v24[4]; // [rsp+68h] [rbp-18h] BYREF

  v4 = *(_QWORD *)a2;
  v21 = 0LL;
  v22 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(v4 + 48))(a2, 37LL)
    && (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a3 + 48LL))(a3, 37LL) )
  {
    D2DBitmapRealizationForContextOwner = CCompositionSurfaceBitmap::GetD2DBitmapRealizationForContextOwner(
                                            a2,
                                            (struct ID2DContextOwner *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL)),
                                            &v21);
    v10 = D2DBitmapRealizationForContextOwner;
    if ( D2DBitmapRealizationForContextOwner < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DBitmapRealizationForContextOwner, 0x1118u);
    }
    else
    {
      v11 = CCompositionSurfaceBitmap::GetD2DBitmapRealizationForContextOwner(
              a3,
              (struct ID2DContextOwner *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL)),
              &v22);
      v10 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x1119u);
      }
      else
      {
        (*(void (__fastcall **)(struct ID2D1Bitmap1 *, _DWORD *))(*(_QWORD *)v21 + 40LL))(v21, v23);
        v24[0] = 0;
        v24[1] = 0;
        *(float *)&v24[2] = (float)v23[0];
        *(float *)&v24[3] = (float)v23[1];
        v12 = CDrawingContext::ApplyRenderStateInternal(this, 0);
        v10 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x1123u);
        }
        else
        {
          CDrawingContext::GetD2DInterpolationMode(this);
          Opacity = CDrawingContext::GetOpacity(v13);
          v19 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, struct ID2D1Bitmap1 *, struct ID2D1Bitmap1 *, enum D2D1_YCBCR_CHROMA_SUBSAMPLING, _DWORD *, _DWORD, int, int))(v15 + 152))(
                  v18,
                  ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
                  v21,
                  v22,
                  a4,
                  v24,
                  LODWORD(Opacity),
                  v16,
                  v17);
          v10 = v19;
          if ( v19 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x112Cu);
        }
      }
    }
  }
  else
  {
    v10 = -2147024809;
  }
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v21);
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v22);
  return v10;
}
