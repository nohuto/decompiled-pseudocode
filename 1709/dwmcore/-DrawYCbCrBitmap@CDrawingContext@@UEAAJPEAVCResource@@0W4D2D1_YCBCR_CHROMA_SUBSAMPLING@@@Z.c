/*
 * XREFs of ?DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z @ 0x18013D450
 * Callers:
 *     ?Draw@CYCbCrSurface@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017A110 (-Draw@CYCbCrSurface@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@.c)
 * Callees:
 *     ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180028380 (-GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@QEAAJPEAVID2DContextOwner@@PE.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180041600 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z @ 0x1800823A0 (--$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z.c)
 *     ?GetD2DInterpolationMode@CDrawingContext@@QEBA?AW4D2D1_INTERPOLATION_MODE@@XZ @ 0x1800C27E4 (-GetD2DInterpolationMode@CDrawingContext@@QEBA-AW4D2D1_INTERPOLATION_MODE@@XZ.c)
 *     ?GetOpacity@CDrawingContext@@QEBAMXZ @ 0x1800C2820 (-GetOpacity@CDrawingContext@@QEBAMXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawYCbCrBitmap(
        CDrawingContext *this,
        struct CResource *a2,
        struct CResource *a3,
        enum D2D1_YCBCR_CHROMA_SUBSAMPLING a4)
{
  __int64 v4; // rax
  signed int D2DBitmapRealizationForContextOwner; // eax
  unsigned int v10; // ebx
  signed int v11; // eax
  signed int v12; // eax
  CDrawingContext *v13; // rcx
  float Opacity; // xmm0_4
  __int64 v15; // r9
  int v16; // r8d
  int v17; // r10d
  __int64 v18; // r11
  signed int v19; // eax
  struct ID2D1Bitmap1 *v21; // [rsp+50h] [rbp-30h] BYREF
  struct ID2D1Bitmap1 *v22; // [rsp+58h] [rbp-28h] BYREF
  _DWORD v23[2]; // [rsp+60h] [rbp-20h] BYREF
  _DWORD v24[4]; // [rsp+68h] [rbp-18h] BYREF

  v4 = *(_QWORD *)a2;
  v21 = 0LL;
  v22 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(v4 + 48))(a2, 35LL)
    && (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a3 + 48LL))(a3, 35LL) )
  {
    D2DBitmapRealizationForContextOwner = CCompositionSurfaceBitmap::GetD2DBitmapRealizationForContextOwner(
                                            a2,
                                            (struct ID2DContextOwner *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL)),
                                            &v21);
    v10 = D2DBitmapRealizationForContextOwner;
    if ( D2DBitmapRealizationForContextOwner < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, D2DBitmapRealizationForContextOwner, 0x1098u);
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
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x1099u);
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
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x10A3u);
        }
        else
        {
          CDrawingContext::GetD2DInterpolationMode(this);
          Opacity = CDrawingContext::GetOpacity(v13);
          v19 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, struct ID2D1Bitmap1 *, struct ID2D1Bitmap1 *, enum D2D1_YCBCR_CHROMA_SUBSAMPLING, _DWORD *, _DWORD, int, int))(v15 + 144))(
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
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0x10ACu);
        }
      }
    }
  }
  else
  {
    v10 = -2147024809;
  }
  ReleaseInterfaceNoNULL<ID2D1Bitmap1>((__int64)v21);
  ReleaseInterfaceNoNULL<ID2D1Bitmap1>((__int64)v22);
  return v10;
}
