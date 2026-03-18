/*
 * XREFs of ?GetDestinationRect@COcclusionContext@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180060D18
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DE70 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?UpdateDstRects@CPlaneCaptureRenderTargetEngine@@QEAAXPEAVCOcclusionContext@@@Z @ 0x180139E10 (-UpdateDstRects@CPlaneCaptureRenderTargetEngine@@QEAAXPEAVCOcclusionContext@@@Z.c)
 * Callees:
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180059A5C (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007B3D4 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Clip@CBaseClipStack@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV2@@Z @ 0x1800B8688 (-Clip@CBaseClipStack@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquenes.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall COcclusionContext::GetDestinationRect(__int64 a1, __int64 a2)
{
  const struct CMILMatrix *TopByReference; // rax
  __int64 v5; // r9
  int v7[6]; // [rsp+20h] [rbp-28h] BYREF

  TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 8));
  CMILMatrix::Transform3DBoundsHelper<0>((__int64)TopByReference, v5, v7);
  CBaseClipStack::Clip(a1 + 120, a2, v7);
  return a2;
}
