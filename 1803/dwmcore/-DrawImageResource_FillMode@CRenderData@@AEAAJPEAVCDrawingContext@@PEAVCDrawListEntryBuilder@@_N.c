/*
 * XREFs of ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@PEBUD2D_RECT_F@@4M4@Z @ 0x180055E70
 * Callers:
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x18005613C (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEnt_ea_18005613C.c)
 *     ?DrawImageResource_TileMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@MAEBUMilPoint2F@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800561AC (-DrawImageResource_TileMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_N.c)
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x180056940 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180077024 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008A9D4 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18008CC14 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18008CC4C (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@P.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18008CF94 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18008DA30 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800B303C (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B4BB0 (-GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800C469C (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderData::DrawImageResource_FillMode(
        CRenderData *this,
        struct CDrawingContext *a2,
        struct CDrawListEntryBuilder *a3,
        char a4,
        struct CImageSource *a5,
        const struct D2D_RECT_F *a6,
        struct D2D_RECT_F *a7,
        FLOAT a8,
        const struct D2D_RECT_F *a9)
{
  int v9; // ebx
  char *v10; // rsi
  struct D2D_MATRIX_3X2_F *v13; // r9
  char v14; // al
  __int64 (__fastcall *v15)(char *, _QWORD, _QWORD, struct D2D_RECT_F *); // rax
  int Bounds; // eax
  struct D2D_RECT_F v17; // xmm0
  struct D2D_RECT_F *v18; // rax
  CSurfaceDrawListBrush *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // xmm1_8
  __int64 v22; // rcx
  int DrawList; // eax
  __int64 v25; // rax
  __int128 v26; // xmm0
  __int16 v27; // [rsp+30h] [rbp-D0h] BYREF
  char v28; // [rsp+32h] [rbp-CEh]
  struct D2D_RECT_F v29; // [rsp+40h] [rbp-C0h] BYREF
  struct D2D_RECT_F *v30; // [rsp+50h] [rbp-B0h]
  __int64 v31; // [rsp+58h] [rbp-A8h] BYREF
  char v32; // [rsp+60h] [rbp-A0h]
  __int128 v33; // [rsp+68h] [rbp-98h] BYREF
  char v34; // [rsp+78h] [rbp-88h]
  struct D2D_RECT_F v35; // [rsp+80h] [rbp-80h] BYREF
  __int64 v36; // [rsp+90h] [rbp-70h]
  struct D2D_RECT_F v37; // [rsp+98h] [rbp-68h] BYREF
  struct CDrawingContext *v38; // [rsp+B0h] [rbp-50h] BYREF
  int v39; // [rsp+B8h] [rbp-48h]
  int v40; // [rsp+BCh] [rbp-44h]
  int v41; // [rsp+C0h] [rbp-40h]
  __int128 v42; // [rsp+C4h] [rbp-3Ch]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  __int64 v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  __int64 v46; // [rsp+F0h] [rbp-10h]
  int v47; // [rsp+F8h] [rbp-8h]
  __int16 v48; // [rsp+FCh] [rbp-4h]
  char v49; // [rsp+FEh] [rbp-2h]

  v39 = 0;
  v9 = 0;
  v40 = 0;
  v10 = (char *)a5 + 8;
  v34 = 0;
  v41 = 0;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0;
  v49 = 0;
  v38 = a2;
  v33 = 0LL;
  v42 = _xmm;
  v48 = 256;
  if ( CDrawListBitmap::FromImageSource(
         (CDrawListBitmap *)&v33,
         (struct IImageSource *)(((unsigned __int64)a5 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)a5 >> 64)),
         a2,
         0) >= 0 )
  {
    v14 = HIBYTE(v48);
    if ( a4 )
      v14 = 0;
    v37.bottom = a8;
    *(_QWORD *)&v37.left = 0x3F8000003F800000LL;
    v37.right = 1.0;
    LOBYTE(v48) = 0;
    HIBYTE(v48) = v14;
    v42 = (__int128)v37;
    if ( a6 )
    {
      v17 = *a6;
    }
    else
    {
      v15 = *(__int64 (__fastcall **)(char *, _QWORD, _QWORD, struct D2D_RECT_F *))(*((_QWORD *)a5 + 1) + 120LL);
      if ( (char *)v15 == (char *)CCachedVisualImage::GetBounds )
        Bounds = CCachedVisualImage::GetBounds(v10, 0LL, 0LL, &v37);
      else
        Bounds = v15(v10, 0LL, 0LL, &v37);
      v9 = Bounds;
      if ( Bounds < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Bounds, 0x418u);
        goto LABEL_24;
      }
      v17 = v37;
      v29 = v37;
    }
    v37 = v17;
    v18 = &v37;
    if ( a7 )
      v18 = a7;
    v29 = *v18;
    if ( D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v37, &v29, &v35, v13) )
    {
      v27 = SamplerMode::k_ClampClampLinear;
      v28 = 1;
      *(_QWORD *)&v29.left = 0LL;
      v30 = &v29;
      v31 = 0LL;
      v32 = 1;
      v9 = CSurfaceDrawListBrush::CreateWithContentRect(&v33, &v27, &v37, &v31);
      if ( v32 )
      {
        v19 = *(CSurfaceDrawListBrush **)&v30->left;
        *(_QWORD *)&v30->left = v31;
        if ( v19 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v19, 1u);
      }
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x429u);
      }
      else
      {
        v20 = *(_QWORD *)&v29.left;
        v21 = v36;
        *(struct D2D_RECT_F *)(*(_QWORD *)&v29.left + 8LL) = v35;
        *(_QWORD *)(v20 + 24) = v21;
        if ( a9 )
        {
          v25 = *(_QWORD *)&v29.left;
          *(_BYTE *)(*(_QWORD *)&v29.left + 52LL) = 1;
          v26 = (__int128)*a9;
          *(_DWORD *)(v25 + 48) = 0;
          *(_OWORD *)(v25 + 32) = v26;
        }
        *(_QWORD *)&v37.left = *(_QWORD *)&v29.left;
        *(_QWORD *)&v29.left = 0LL;
        CBrushDrawListGenerator::AttachInput(&v38, 0LL, &v37);
        if ( *(_QWORD *)&v37.left )
          std::default_delete<CDrawListBrush>::operator()(v22, *(_QWORD *)&v37.left);
        DrawList = CBrushDrawListGenerator::GenerateDrawList((CBrushDrawListGenerator *)&v38, a3, 0LL, 0LL);
        v9 = DrawList;
        if ( DrawList < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawList, 0x433u);
      }
      if ( *(_QWORD *)&v29.left )
        CSurfaceDrawListBrush::`vector deleting destructor'(*(CSurfaceDrawListBrush **)&v29.left, 1u);
    }
  }
LABEL_24:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v38);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v33 + 1);
  Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(&v33);
  return (unsigned int)v9;
}
