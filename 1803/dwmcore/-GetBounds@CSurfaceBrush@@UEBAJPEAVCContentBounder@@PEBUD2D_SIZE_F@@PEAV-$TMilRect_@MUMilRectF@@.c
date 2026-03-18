/*
 * XREFs of ?GetBounds@CSurfaceBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180099D20
 * Callers:
 *     ?GetBounds@CMaskBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800990E0 (-GetBounds@CMaskBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?GetContentBounds@CSpriteVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009DBF0 (-GetContentBounds@CSpriteVisual@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A0E20 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180064200 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18008AA10 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x18009A300 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ @ 0x18009CC60 (-IsEmptyDrawing@CSpriteVisualContent@@UEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::GetBounds(CSurfaceBrush *this, __int64 a2, const struct D2D_SIZE_F *a3, _DWORD *a4)
{
  char v4; // r14
  unsigned int v5; // edi
  CSurfaceBrush *v8; // rsi
  bool (__fastcall *v9)(CSpriteVisualContent *__hidden); // rax
  char v10; // al
  bool v11; // si
  CRectanglesShape *v12; // rdx
  int TightBounds; // eax
  CRectanglesShape *v15; // [rsp+30h] [rbp-50h] BYREF
  CSurfaceBrush *v16; // [rsp+38h] [rbp-48h]
  struct CShape *v17; // [rsp+40h] [rbp-40h] BYREF
  char v18; // [rsp+48h] [rbp-38h]
  _BYTE v19[40]; // [rsp+50h] [rbp-30h] BYREF

  v4 = 0;
  v5 = 0;
  v15 = 0LL;
  v8 = this;
  v11 = 0;
  if ( a3 && a3->width > 0.0 && a3->height > 0.0 )
  {
    v9 = *(bool (__fastcall **)(CSpriteVisualContent *__hidden))(*(_QWORD *)this + 192LL);
    v10 = v9 == CSpriteVisualContent::IsEmptyDrawing
        ? CSpriteVisualContent::IsEmptyDrawing(this)
        : ((__int64 (*)(void))v9)();
    if ( !v10 )
    {
      v17 = 0LL;
      v16 = (CSurfaceBrush *)&v15;
      v18 = 1;
      v4 = 1;
      if ( (int)CSurfaceBrush::ComputeLayout(v8, a3, 0, (struct CContent::LayoutData *)v19, &v17) >= 0 )
        v11 = 1;
    }
  }
  if ( (v4 & 1) != 0 )
  {
    if ( v18 )
    {
      this = v16;
      v12 = *(CRectanglesShape **)v16;
      *(_QWORD *)v16 = v17;
      if ( v12 )
        std::default_delete<CShape>::operator()((__int64)this, v12);
    }
  }
  if ( v11 )
  {
    if ( *(__int64 (__fastcall **)(__int64, __int64, CMILMatrix *))(*(_QWORD *)v15 + 32LL) == CRectanglesShape::GetTightBounds )
      TightBounds = CRectanglesShape::GetTightBounds((__int64)v15, (__int64)a4, 0LL);
    else
      TightBounds = (*(__int64 (__fastcall **)(CRectanglesShape *, _DWORD *, _QWORD))(*(_QWORD *)v15 + 32LL))(
                      v15,
                      a4,
                      0LL);
    v5 = TightBounds;
    if ( TightBounds < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TightBounds, 0x12Eu);
  }
  else
  {
    a4[3] = 0;
    a4[2] = 0;
    a4[1] = 0;
    *a4 = 0;
  }
  if ( v15 )
    std::default_delete<CShape>::operator()((__int64)this, v15);
  return v5;
}
