/*
 * XREFs of ?DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z @ 0x18014C2C0
 * Callers:
 *     ?Draw@CYCbCrSurface@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801665D0 (-Draw@CYCbCrSurface@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18000B360 (-GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PE.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800A1660 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800C22F4 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
  int v12; // xmm6_4
  int v13; // eax
  int v14; // r10d
  unsigned int v16; // [rsp+28h] [rbp-49h]
  struct ID2D1Bitmap1 *v17; // [rsp+58h] [rbp-19h] BYREF
  struct ID2D1Bitmap1 *v18; // [rsp+60h] [rbp-11h] BYREF
  _DWORD v19[2]; // [rsp+68h] [rbp-9h] BYREF
  _DWORD v20[4]; // [rsp+70h] [rbp-1h] BYREF

  v4 = *(_QWORD *)a2;
  v17 = 0LL;
  v18 = 0LL;
  if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(v4 + 48))(a2, 97LL)
    || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a3 + 48LL))(a3, 97LL) )
  {
    v10 = -2147024809;
    goto LABEL_18;
  }
  D2DBitmapRealizationForContextOwner = CCompositionSurfaceBitmap::GetD2DBitmapRealizationForContextOwner(
                                          (struct CResource *)((char *)a2 + 88),
                                          (struct ID2DContextOwner *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
                                          &v17);
  v10 = D2DBitmapRealizationForContextOwner;
  if ( D2DBitmapRealizationForContextOwner < 0 )
  {
    v16 = 4785;
    goto LABEL_15;
  }
  D2DBitmapRealizationForContextOwner = CCompositionSurfaceBitmap::GetD2DBitmapRealizationForContextOwner(
                                          (struct CResource *)((char *)a3 + 88),
                                          (struct ID2DContextOwner *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
                                          &v18);
  v10 = D2DBitmapRealizationForContextOwner;
  if ( D2DBitmapRealizationForContextOwner < 0 )
  {
    v16 = 4786;
    goto LABEL_15;
  }
  v11 = *((_DWORD *)this + 752);
  if ( !v11 )
  {
    v10 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x12B5u);
    goto LABEL_18;
  }
  v12 = *(_DWORD *)(*((_QWORD *)this + 378) + 4LL * (unsigned int)(v11 - 1));
  (*(void (__fastcall **)(struct ID2D1Bitmap1 *, _DWORD *))(*(_QWORD *)v17 + 40LL))(v17, v19);
  v20[0] = 0;
  v20[1] = 0;
  *(float *)&v20[2] = (float)v19[0];
  *(float *)&v20[3] = (float)v19[1];
  D2DBitmapRealizationForContextOwner = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v10 = D2DBitmapRealizationForContextOwner;
  if ( D2DBitmapRealizationForContextOwner < 0 )
  {
    v16 = 4799;
    goto LABEL_15;
  }
  v13 = D2DInterpolationModeFromMilInterpolationMode(*((_DWORD *)this + 65));
  v14 = 12;
  if ( *((_DWORD *)this + 67) != 2 )
    v14 = 0;
  D2DBitmapRealizationForContextOwner = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, struct ID2D1Bitmap1 *, struct ID2D1Bitmap1 *, enum D2D1_YCBCR_CHROMA_SUBSAMPLING, _DWORD *, int, int, int))(**((_QWORD **)this + 49) + 168LL))(
                                          *((_QWORD *)this + 49),
                                          ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
                                          v17,
                                          v18,
                                          a4,
                                          v20,
                                          v12,
                                          v13,
                                          v14);
  v10 = D2DBitmapRealizationForContextOwner;
  if ( D2DBitmapRealizationForContextOwner < 0 )
  {
    v16 = 4808;
LABEL_15:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmapRealizationForContextOwner, v16);
  }
LABEL_18:
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v17);
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v18);
  return v10;
}
