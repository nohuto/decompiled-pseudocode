/*
 * XREFs of ?DrawAsDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180185D60
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z @ 0x180002F4C (-Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180063DA0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x180063E50 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18006BC10 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18006BDCC (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006E480 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180080234 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18009C9E0 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800BE870 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSkyBoxBrush::DrawAsDrawList(
        CCompositionSurfaceBitmap *this,
        CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        __int64 a4,
        __int64 a5,
        struct CDrawListCache *a6)
{
  int D2DGeometry; // ebx
  float width; // xmm0_4
  char v12; // r15
  CRegionShape *v13; // rdi
  struct CVisual *CurrentVisual; // rax
  LONG v15; // ecx
  struct CVisual *v16; // r15
  int v17; // eax
  int v18; // eax
  int v19; // eax
  _BYTE v21[8]; // [rsp+40h] [rbp-C0h] BYREF
  struct tagRECT v22; // [rsp+48h] [rbp-B8h] BYREF
  CRegionShape *v23; // [rsp+58h] [rbp-A8h] BYREF
  struct CDrawListCache *v24; // [rsp+60h] [rbp-A0h]
  int v25[2]; // [rsp+68h] [rbp-98h]
  _BYTE v26[64]; // [rsp+70h] [rbp-90h] BYREF
  int v27; // [rsp+B0h] [rbp-50h]
  void *v28[10]; // [rsp+C0h] [rbp-40h] BYREF

  D2DGeometry = 0;
  width = a3->width;
  *(_QWORD *)v25 = a5;
  v24 = a6;
  v23 = 0LL;
  v12 = 0;
  v21[0] = 0;
  v13 = 0LL;
  if ( width <= 0.0
    || a3->height <= 0.0
    || !(*(unsigned __int8 (__fastcall **)(CCompositionSurfaceBitmap *, CDrawingContext *, _BYTE *))(*(_QWORD *)this + 272LL))(
          this,
          a2,
          v21)
    || v21[0] )
  {
    goto LABEL_10;
  }
  v27 = 0;
  CMatrixStack::Top((CDrawingContext *)((char *)a2 + 480), (struct CMILMatrix *)v26);
  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)a2 + 8));
  v15 = (int)a3->width;
  *(_QWORD *)&v22.left = 0LL;
  v16 = CurrentVisual;
  v22.right = v15;
  v22.bottom = (int)a3->height;
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v28, &v22);
  v17 = CRegionShape::Create((const struct CRegion *)v28, &v23);
  D2DGeometry = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x1E0u);
    FastRegion::CRegion::FreeMemory(v28);
    v13 = v23;
  }
  else
  {
    *(_QWORD *)&v22.left = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22.left);
    v13 = v23;
    D2DGeometry = CRegionShape::GetD2DGeometry(v23, (const struct CMILMatrix *)v26, (struct ID2D1Geometry **)&v22);
    if ( D2DGeometry < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DGeometry, 0x1E3u);
    }
    else
    {
      v18 = CDrawingContext::PushD2DLayer(a2, v16, 0LL, *(__int64 *)&v22.left, 0LL, 1.0, 0, 0);
      D2DGeometry = v18;
      if ( v18 >= 0 )
      {
        v12 = 1;
        v19 = CSpriteVisualContent::DrawAsDrawList(this, a2, a3, a4, v25[0], v24);
        D2DGeometry = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x1E8u);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22.left);
          FastRegion::CRegion::FreeMemory(v28);
LABEL_11:
          CDrawingContext::PopLayer(a2);
          goto LABEL_12;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22.left);
        FastRegion::CRegion::FreeMemory(v28);
        D2DGeometry = 0;
LABEL_10:
        if ( !v12 )
          goto LABEL_12;
        goto LABEL_11;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x1E5u);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22.left);
    FastRegion::CRegion::FreeMemory(v28);
  }
LABEL_12:
  if ( v13 )
    CRegionShape::`vector deleting destructor'(v13, 1);
  return (unsigned int)D2DGeometry;
}
