/*
 * XREFs of ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18003D31C
 * Callers:
 *     ?IsDrawListCacheDirty@CSpriteVisualContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180022920 (-IsDrawListCacheDirty@CSpriteVisualContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800231D0 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006E670 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1800807C0 (-CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180031D18 (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059BA0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007B3D4 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

char __fastcall CDrawingContext::CalcWorldSpaceClippedBounds(__int64 a1, __int64 a2, float *a3)
{
  const struct CMILMatrix *TopByReference; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  char result; // al
  float v9; // [rsp+20h] [rbp-28h]
  float v10; // [rsp+24h] [rbp-24h]
  float v11; // [rsp+28h] [rbp-20h]
  float v12; // [rsp+2Ch] [rbp-1Ch]

  TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 480));
  CMILMatrix::Transform2DBoundsHelper<1>(TopByReference, v7, v6);
  result = CScopedClipStack::GetTopGpuClipInScope((CScopedClipStack *)(a1 + 1008), 1);
  if ( v9 > *a3 )
    *a3 = v9;
  if ( v10 > a3[1] )
    a3[1] = v10;
  if ( a3[2] > v11 )
    a3[2] = v11;
  if ( a3[3] > v12 )
    a3[3] = v12;
  if ( a3[2] <= *a3 || a3[3] <= a3[1] )
  {
    result = 0;
    *((_QWORD *)a3 + 1) = 0LL;
    *(_QWORD *)a3 = 0LL;
  }
  return result;
}
