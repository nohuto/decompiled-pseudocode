/*
 * XREFs of ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180162DEC
 * Callers:
 *     ?DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z @ 0x180007DA8 (-DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z.c)
 * Callees:
 *     ?PrependTranslate@CMILMatrix@@QEAAXMM@Z @ 0x18000F1E8 (-PrependTranslate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180066930 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180066CF0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180067310 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z @ 0x18015F254 (-DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GetInverseDesktopMPOTransform@COverlayContext@@QEAAXPEAVCMILMatrix@@@Z @ 0x180161A9C (-GetInverseDesktopMPOTransform@COverlayContext@@QEAAXPEAVCMILMatrix@@@Z.c)
 */

__int64 __fastcall CDrawingContext::RenderOverlayColor(CDrawingContext *this, struct _D3DCOLORVALUE *a2, _DWORD *a3)
{
  unsigned int v4; // eax
  COverlayContext *v6; // rcx
  __m128i v7; // xmm0
  int v8; // eax
  int *v9; // r10
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // eax
  _BYTE v15[64]; // [rsp+30h] [rbp-58h] BYREF
  int v16; // [rsp+70h] [rbp-18h]
  struct D2D_SIZE_F v17; // [rsp+90h] [rbp+8h] BYREF

  v4 = a3[2] - *a3;
  v16 = 0;
  v6 = (COverlayContext *)*((_QWORD *)this + 849);
  v7 = _mm_cvtsi32_si128(v4);
  v8 = a3[3] - a3[1];
  LODWORD(v17.width) = _mm_cvtepi32_ps(v7).m128_u32[0];
  v17.height = (float)v8;
  COverlayContext::GetInverseDesktopMPOTransform(v6, (struct CMILMatrix *)v15);
  CMILMatrix::PrependTranslate((CMILMatrix *)v15, (float)*v9, (float)v9[1]);
  v10 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)v15, 0, 1);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x1F36u);
  }
  else
  {
    v12 = CDrawingContext::ApplyRenderStateInternal(this, 0);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x1F39u);
    }
    else
    {
      v13 = CDrawingContext::DrawColorRectangle((CMILRefCountBase **)this, a2, &v17);
      v11 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x1F3Cu);
    }
    CDrawingContext::PopTransformInternal(this, 1);
  }
  return v11;
}
