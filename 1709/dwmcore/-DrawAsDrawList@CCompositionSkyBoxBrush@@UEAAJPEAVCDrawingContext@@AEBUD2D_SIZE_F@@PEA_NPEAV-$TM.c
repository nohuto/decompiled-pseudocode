/*
 * XREFs of ?DrawAsDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18015CD60
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180022710 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180034DC0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x180034E90 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18003B6EC (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18003B87C (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800407C0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18007B3F4 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z @ 0x18008695C (-Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800896B4 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSkyBoxBrush::DrawAsDrawList(
        CNineGridBrush *this,
        CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  signed int D2DGeometry; // ebx
  float width; // xmm0_4
  char v12; // r15
  CRegionShape *v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  struct CVisual *CurrentVisual; // rax
  LONG v17; // ecx
  struct CVisual *v18; // r15
  signed int v19; // eax
  signed int v20; // eax
  signed int v21; // eax
  _BYTE v23[8]; // [rsp+40h] [rbp-C0h] BYREF
  struct tagRECT v24; // [rsp+48h] [rbp-B8h] BYREF
  CRegionShape *v25; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h]
  __int64 v27; // [rsp+68h] [rbp-98h]
  _BYTE v28[64]; // [rsp+70h] [rbp-90h] BYREF
  int v29; // [rsp+B0h] [rbp-50h]
  void *v30[10]; // [rsp+C0h] [rbp-40h] BYREF

  D2DGeometry = 0;
  width = a3->width;
  v27 = a5;
  v26 = a6;
  v25 = 0LL;
  v12 = 0;
  v23[0] = 0;
  v13 = 0LL;
  if ( width <= 0.0
    || a3->height <= 0.0
    || !(*(unsigned __int8 (__fastcall **)(CNineGridBrush *, CDrawingContext *, _BYTE *))(*(_QWORD *)this + 240LL))(
          this,
          a2,
          v23)
    || v23[0] )
  {
    goto LABEL_10;
  }
  v29 = 0;
  CMatrixStack::Top((CDrawingContext *)((char *)a2 + 480), (struct CMILMatrix *)v28, v14, v15);
  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)a2 + 8));
  v17 = (int)a3->width;
  *(_QWORD *)&v24.left = 0LL;
  v18 = CurrentVisual;
  v24.right = v17;
  v24.bottom = (int)a3->height;
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v30, &v24);
  v19 = CRegionShape::Create((const struct CRegion *)v30, &v25);
  D2DGeometry = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0x222u);
    FastRegion::CRegion::FreeMemory(v30);
    v13 = v25;
  }
  else
  {
    *(_QWORD *)&v24.left = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24.left);
    v13 = v25;
    D2DGeometry = CRegionShape::GetD2DGeometry(v25, (const struct CMILMatrix *)v28, (struct ID2D1Geometry **)&v24);
    if ( D2DGeometry < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, D2DGeometry, 0x225u);
    }
    else
    {
      v20 = CDrawingContext::PushD2DLayer(a2, v18, 0LL, *(__int64 *)&v24.left, 0LL, 1.0, 0, 0);
      D2DGeometry = v20;
      if ( v20 >= 0 )
      {
        v12 = 1;
        v21 = CSpriteVisualContent::DrawAsDrawList(this, a2, a3, a4, v27, (struct CDrawListCache *)v26);
        D2DGeometry = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v21, 0x22Au);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24.left);
          FastRegion::CRegion::FreeMemory(v30);
LABEL_11:
          CDrawingContext::PopLayer(a2);
          goto LABEL_12;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24.left);
        FastRegion::CRegion::FreeMemory(v30);
        D2DGeometry = 0;
LABEL_10:
        if ( !v12 )
          goto LABEL_12;
        goto LABEL_11;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v20, 0x227u);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24.left);
    FastRegion::CRegion::FreeMemory(v30);
  }
LABEL_12:
  if ( v13 )
    CRegionShape::`vector deleting destructor'(v13, 1);
  return (unsigned int)D2DGeometry;
}
