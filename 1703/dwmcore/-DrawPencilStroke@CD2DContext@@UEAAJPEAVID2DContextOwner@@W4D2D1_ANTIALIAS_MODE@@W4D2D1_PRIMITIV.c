/*
 * XREFs of ?DrawPencilStroke@CD2DContext@@UEAAJPEAVID2DContextOwner@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@PEAUID2D1PencilStroke@@PEBUD2D1_PENCIL_STYLE@@PEAVCCompositionSurfaceBitmap@@AEBUtagRECT@@56M@Z @ 0x180198970
 * Callers:
 *     <none>
 * Callees:
 *     ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18000B360 (-GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PE.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800AC504 (-SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIAL.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x1800AC7C4 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800AC894 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetID2D1BitmapBrushFromSurfaceBitmap@CD2DContext@@AEAAJPEAUID2D1Bitmap1@@AEBUtagRECT@@AEBUD2D1_BITMAP_BRUSH_PROPERTIES@@PEAPEAUID2D1BitmapBrush@@@Z @ 0x180199290 (-GetID2D1BitmapBrushFromSurfaceBitmap@CD2DContext@@AEAAJPEAUID2D1Bitmap1@@AEBUtagRECT@@AEBUD2D1_.c)
 */

__int64 __fastcall CD2DContext::DrawPencilStroke(
        CD2DContext *this,
        struct ID2DContextOwner *a2,
        enum D2D1_ANTIALIAS_MODE a3,
        unsigned int a4,
        struct ID2D1PencilStroke *a5,
        const struct D2D1_PENCIL_STYLE *a6,
        struct CCompositionSurfaceBitmap *a7,
        const struct tagRECT *a8,
        struct CCompositionSurfaceBitmap *a9,
        struct tagRECT *a10,
        float a11)
{
  unsigned int v14; // edi
  int D2DBitmapRealizationForContextOwner; // eax
  int ID2D1BitmapBrushFromSurfaceBitmap; // eax
  int v17; // eax
  int v18; // eax
  enum D2D1_ANTIALIAS_MODE v20[2]; // [rsp+40h] [rbp-61h] BYREF
  struct ID2D1BitmapBrush *v21; // [rsp+48h] [rbp-59h] BYREF
  struct ID2D1BitmapBrush *v22; // [rsp+50h] [rbp-51h] BYREF
  struct tagRECT *v23; // [rsp+58h] [rbp-49h]
  const struct D2D1_PENCIL_STYLE *v24; // [rsp+60h] [rbp-41h]
  struct ID2D1PencilStroke *v25; // [rsp+68h] [rbp-39h]
  struct D2D_MATRIX_3X2_F v26; // [rsp+70h] [rbp-31h] BYREF
  D2D1_BITMAP_BRUSH_PROPERTIES v27; // [rsp+88h] [rbp-19h] BYREF

  v14 = 0;
  v25 = a5;
  v24 = a6;
  v23 = a10;
  v20[0] = a3;
  CD2DContext::FlushDrawList(this);
  CD2DContext::EnsureBeginDraw(this);
  CD2DContext::SetCommonState(this, a2, a4, v20, &v26);
  v27.extendModeX = D2D1_EXTEND_MODE_WRAP;
  v27.extendModeY = D2D1_EXTEND_MODE_WRAP;
  v27.interpolationMode = D2D1_BITMAP_INTERPOLATION_MODE_LINEAR;
  v22 = 0LL;
  v21 = 0LL;
  if ( !a7 )
    goto LABEL_16;
  *(_QWORD *)v20 = 0LL;
  D2DBitmapRealizationForContextOwner = CCompositionSurfaceBitmap::GetD2DBitmapRealizationForContextOwner(
                                          (struct CCompositionSurfaceBitmap *)((char *)a7 + 88),
                                          a2,
                                          (struct ID2D1Bitmap1 **)v20);
  v14 = D2DBitmapRealizationForContextOwner;
  if ( D2DBitmapRealizationForContextOwner < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmapRealizationForContextOwner, 0x269u);
    return v14;
  }
  ID2D1BitmapBrushFromSurfaceBitmap = CD2DContext::GetID2D1BitmapBrushFromSurfaceBitmap(
                                        this,
                                        *(struct ID2D1Bitmap1 **)v20,
                                        a8,
                                        &v27,
                                        &v22);
  v14 = ID2D1BitmapBrushFromSurfaceBitmap;
  if ( ID2D1BitmapBrushFromSurfaceBitmap < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ID2D1BitmapBrushFromSurfaceBitmap, 0x26Au);
  }
  else
  {
LABEL_16:
    if ( !a9 )
      goto LABEL_12;
    *(_QWORD *)v20 = 0LL;
    v17 = CCompositionSurfaceBitmap::GetD2DBitmapRealizationForContextOwner(
            (struct CCompositionSurfaceBitmap *)((char *)a9 + 88),
            a2,
            (struct ID2D1Bitmap1 **)v20);
    v14 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x270u);
      return v14;
    }
    v18 = CD2DContext::GetID2D1BitmapBrushFromSurfaceBitmap(this, *(struct ID2D1Bitmap1 **)v20, v23, &v27, &v21);
    v14 = v18;
    if ( v18 >= 0 )
    {
LABEL_12:
      (*(void (__fastcall **)(_QWORD, struct ID2D1PencilStroke *, const struct D2D1_PENCIL_STYLE *, struct ID2D1BitmapBrush *, struct ID2D1BitmapBrush *, _DWORD))(**((_QWORD **)this + 24) + 32LL))(
        *((_QWORD *)this + 24),
        v25,
        v24,
        v22,
        v21,
        LODWORD(a11));
      return v14;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x271u);
  }
  return v14;
}
