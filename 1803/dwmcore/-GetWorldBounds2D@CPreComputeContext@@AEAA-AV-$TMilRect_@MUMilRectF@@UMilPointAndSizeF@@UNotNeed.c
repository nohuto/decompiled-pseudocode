/*
 * XREFs of ?GetWorldBounds2D@CPreComputeContext@@AEAA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180018118
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009F520 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A46B0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800BE850 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Clip@CBaseClipStack@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV2@@Z @ 0x1800C0BF0 (-Clip@CBaseClipStack@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquenes.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CPreComputeContext::GetWorldBounds2D(__int64 a1, __int64 a2, __int64 a3, float a4)
{
  CMILMatrix *TopByReference; // rax
  float left; // xmm1_4
  float top; // xmm2_4
  float right; // xmm3_4
  float v12; // xmm4_4
  struct D2D_RECT_F v13; // [rsp+20h] [rbp-40h] BYREF
  struct D2D_RECT_F v14; // [rsp+30h] [rbp-30h]

  TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 200));
  CMILMatrix::Transform3DBoundsHelper<1>(TopByReference);
  left = v14.left;
  top = v14.top;
  right = v14.right;
  v13 = v14;
  if ( a4 > 0.0 && !IsEmpty(&v13) )
  {
    v13.left = left - a4;
    v13.top = top - a4;
    v13.right = right + a4;
    v13.bottom = v12 + a4;
  }
  CBaseClipStack::Clip(a1 + 232, a2, &v13);
  return a2;
}
