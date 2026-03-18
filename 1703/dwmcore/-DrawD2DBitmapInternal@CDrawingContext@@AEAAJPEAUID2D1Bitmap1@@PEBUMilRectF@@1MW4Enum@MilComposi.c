/*
 * XREFs of ?DrawD2DBitmapInternal@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBUMilRectF@@1MW4Enum@MilCompositingMode@@@Z @ 0x1800A7BDC
 * Callers:
 *     ?DrawBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@_NPEA_N@Z @ 0x1800A7D20 (-DrawBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1MHW4Enum@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800A1660 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800ADA10 (-DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_A.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800C22F4 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawD2DBitmapInternal(
        __int64 a1,
        struct ID2D1Bitmap1 *a2,
        __int64 a3,
        __int64 a4,
        float a5)
{
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  enum D2D1_INTERPOLATION_MODE v10; // eax
  enum D2D1_PRIMITIVE_BLEND v11; // edx
  const struct D2D_RECT_F *v12; // r9
  const struct D2D_RECT_F *v13; // r10
  const struct ID2DContextOwner *v14; // r11
  CD2DContext *v15; // rcx
  __int64 (__fastcall *v16)(CD2DContext *__hidden, const struct ID2DContextOwner *, struct ID2D1Bitmap1 *, const struct D2D_RECT_F *, const struct D2D_RECT_F *, float, enum D2D1_ANTIALIAS_MODE, enum D2D1_INTERPOLATION_MODE, enum D2D1_PRIMITIVE_BLEND); // rdi
  int v17; // eax
  unsigned int v19; // [rsp+20h] [rbp-49h]
  enum D2D1_ANTIALIAS_MODE v20; // [rsp+30h] [rbp-39h]

  v7 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)a1, 0);
  v8 = v7;
  if ( v7 < 0 )
  {
    v19 = 2327;
    goto LABEL_14;
  }
  if ( *(_DWORD *)(a1 + 504) )
  {
    v9 = *(_DWORD *)(a1 + 504);
    if ( v9 )
    {
      if ( *(_BYTE *)((unsigned int)(v9 - 1) + *(_QWORD *)(a1 + 520)) )
      {
        D2DInterpolationModeFromMilInterpolationMode(*(unsigned int *)(a1 + 260));
        v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct ID2D1Bitmap1 *))(**(_QWORD **)(a1 + 392) + 112LL))(
               *(_QWORD *)(a1 + 392),
               (a1 + 8) & -(__int64)(a1 != 0),
               a2);
        v8 = v7;
        if ( v7 >= 0 )
          return v8;
        v19 = 2365;
LABEL_14:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, v19);
        return v8;
      }
    }
  }
  v10 = (unsigned int)D2DInterpolationModeFromMilInterpolationMode(*(unsigned int *)(a1 + 260));
  v15 = *(CD2DContext **)(a1 + 392);
  v20 = *(_DWORD *)(a1 + 264) != 0;
  v16 = *(__int64 (__fastcall **)(CD2DContext *__hidden, const struct ID2DContextOwner *, struct ID2D1Bitmap1 *, const struct D2D_RECT_F *, const struct D2D_RECT_F *, float, enum D2D1_ANTIALIAS_MODE, enum D2D1_INTERPOLATION_MODE, enum D2D1_PRIMITIVE_BLEND))(*(_QWORD *)v15 + 88LL);
  if ( v16 == CD2DContext::DrawBitmap )
    v17 = CD2DContext::DrawBitmap(v15, v14, a2, v13, v12, a5, v20, v10, v11);
  else
    v17 = ((__int64 (__fastcall *)(CD2DContext *, const struct ID2DContextOwner *, struct ID2D1Bitmap1 *, const struct D2D_RECT_F *))v16)(
            v15,
            v14,
            a2,
            v13);
  v8 = v17;
  if ( v17 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x932u);
  return v8;
}
