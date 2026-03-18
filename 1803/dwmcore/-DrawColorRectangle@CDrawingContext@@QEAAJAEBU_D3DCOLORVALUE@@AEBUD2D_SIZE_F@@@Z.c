/*
 * XREFs of ?DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z @ 0x18015F254
 * Callers:
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18009B2F0 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?Draw@CPlaneCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18015BA40 (-Draw@CPlaneCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x18015F438 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x1801608EC (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180162DEC (-RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV-$TMilRect_@HUtagRECT@@UMilPoi.c)
 *     ?RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x180175210 (-RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x1800665E4 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008A9D4 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18008B9E0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18008CC14 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18008CC4C (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@P.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18008CF94 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x1800AD784 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x1800C38EC (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x18017B394 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawColorRectangle(
        CMILRefCountBase **this,
        const struct _D3DCOLORVALUE *a2,
        const struct D2D_SIZE_F *a3)
{
  int v4; // ebx
  CGeometryOnlyDrawListBrush *v7; // rcx
  FLOAT height; // xmm0_4
  CGeometryOnlyDrawListBrush *v9; // rax
  FLOAT width; // xmm1_4
  struct CGeometryOnlyDrawListBrush *v11; // rax
  __int128 v12; // xmm0
  __int64 v13; // rcx
  int DrawList; // eax
  int v15; // eax
  CGeometryOnlyDrawListBrush *v17; // [rsp+30h] [rbp-49h] BYREF
  struct CGeometryOnlyDrawListBrush *v18[2]; // [rsp+38h] [rbp-41h] BYREF
  char v19; // [rsp+48h] [rbp-31h]
  CMILRefCountBase **v20; // [rsp+50h] [rbp-29h] BYREF
  int v21; // [rsp+58h] [rbp-21h]
  int v22; // [rsp+5Ch] [rbp-1Dh]
  int v23; // [rsp+60h] [rbp-19h]
  __int128 v24; // [rsp+64h] [rbp-15h]
  __int64 v25; // [rsp+78h] [rbp-1h]
  __int64 v26; // [rsp+80h] [rbp+7h]
  __int64 v27; // [rsp+88h] [rbp+Fh]
  __int64 v28; // [rsp+90h] [rbp+17h]
  int v29; // [rsp+98h] [rbp+1Fh]
  char v30; // [rsp+9Ch] [rbp+23h]
  __int16 v31; // [rsp+9Dh] [rbp+24h]

  v4 = 0;
  if ( !CDrawingContext::IsBounding((CDrawingContext *)this) )
  {
    v17 = 0LL;
    v18[0] = (struct CGeometryOnlyDrawListBrush *)&v17;
    v19 = 1;
    v18[1] = 0LL;
    v4 = CGeometryOnlyDrawListBrush::Create(&v18[1]);
    if ( v19 )
    {
      v7 = *(CGeometryOnlyDrawListBrush **)v18[0];
      *(_QWORD *)v18[0] = v18[1];
      if ( v7 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v7, 1);
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xACBu);
    }
    else
    {
      height = a3->height;
      v9 = v17;
      width = a3->width;
      v18[0] = 0LL;
      *((_BYTE *)v17 + 52) = 1;
      *((_DWORD *)v9 + 12) = 50529027;
      v18[1] = (struct CGeometryOnlyDrawListBrush *)__PAIR64__(LODWORD(height), LODWORD(width));
      *((_OWORD *)v9 + 2) = *(_OWORD *)v18;
      v11 = v17;
      v12 = *(_OWORD *)&a2->r;
      v21 = 0;
      v22 = 0;
      v24 = v12;
      v20 = this;
      v23 = 0;
      v25 = 0LL;
      v26 = 0LL;
      v27 = 0LL;
      v28 = 0LL;
      v29 = 0;
      v31 = 1;
      v30 = 0;
      v17 = 0LL;
      v18[0] = v11;
      CBrushDrawListGenerator::AttachInput((__int64)&v20, 0, v18);
      if ( v18[0] )
        std::default_delete<CDrawListBrush>::operator()(v13, v18[0]);
      DrawList = CBrushDrawListGenerator::GenerateDrawList((CBrushDrawListGenerator *)&v20, this + 506, 0LL, 0LL);
      v4 = DrawList;
      if ( DrawList < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawList, 0xAD3u);
      }
      else
      {
        v15 = CDrawListEntryBuilder::Render((CDrawListEntryBuilder *)(this + 506), (struct CDrawingContext *)this);
        v4 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xAD4u);
      }
      CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v20);
    }
    if ( v17 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v17, 1);
  }
  CDrawListEntryBuilder::Reset((CDrawListEntryBuilder *)(this + 506));
  return (unsigned int)v4;
}
