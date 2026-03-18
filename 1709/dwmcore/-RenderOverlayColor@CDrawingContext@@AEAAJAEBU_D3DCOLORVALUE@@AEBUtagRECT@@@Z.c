/*
 * XREFs of ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBUtagRECT@@@Z @ 0x18013F0D4
 * Callers:
 *     ?DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z @ 0x18003B044 (-DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z.c)
 * Callees:
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180041260 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180041600 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180041BF8 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PrependTranslate@CMILMatrix@@QEAAXMM@Z @ 0x1800591E8 (-PrependTranslate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetInverseDesktopMPOTransform@COverlayContext@@QEAAXPEAVCMILMatrix@@@Z @ 0x1800C4BC8 (-GetInverseDesktopMPOTransform@COverlayContext@@QEAAXPEAVCMILMatrix@@@Z.c)
 *     ?DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z @ 0x18013C970 (-DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CDrawingContext::RenderOverlayColor(
        CDrawingContext *this,
        const struct _D3DCOLORVALUE *a2,
        const struct tagRECT *a3)
{
  unsigned int v4; // eax
  COverlayContext *v6; // rcx
  __m128i v7; // xmm0
  int v8; // eax
  int *v9; // r10
  signed int v10; // eax
  unsigned int v11; // ebx
  signed int v12; // eax
  signed int v13; // eax
  _BYTE v15[64]; // [rsp+30h] [rbp-58h] BYREF
  int v16; // [rsp+70h] [rbp-18h]
  struct D2D_SIZE_F v17; // [rsp+90h] [rbp+8h] BYREF

  v4 = a3->right - a3->left;
  v16 = 0;
  v6 = (COverlayContext *)*((_QWORD *)this + 849);
  v7 = _mm_cvtsi32_si128(v4);
  v8 = a3->bottom - a3->top;
  LODWORD(v17.width) = _mm_cvtepi32_ps(v7).m128_u32[0];
  v17.height = (float)v8;
  COverlayContext::GetInverseDesktopMPOTransform(v6, (struct CMILMatrix *)v15);
  CMILMatrix::PrependTranslate((CMILMatrix *)v15, (float)*v9, (float)v9[1]);
  v10 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)v15, 0, 1);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x1E33u);
  }
  else
  {
    v12 = CDrawingContext::ApplyRenderStateInternal(this, 0);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x1E36u);
    }
    else
    {
      v13 = CDrawingContext::DrawColorRectangle(this, a2, &v17);
      v11 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x1E39u);
    }
    CDrawingContext::PopTransformInternal(this, 1);
  }
  return v11;
}
