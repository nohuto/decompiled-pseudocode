/*
 * XREFs of ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18000DE04
 * Callers:
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1800143E0 (-CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800186FC (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 *     ?IsDrawListCacheDirty@CSpriteVisualContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18008CF00 (-IsDrawListCacheDirty@CSpriteVisualContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008F660 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18004EC28 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009339C (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099040 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::CalcWorldSpaceClippedBounds(__int64 a1, __int64 a2, float *a3)
{
  const struct CMILMatrix *TopByReference; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 result; // rax
  float v10; // [rsp+20h] [rbp-28h] BYREF
  float v11; // [rsp+24h] [rbp-24h]
  float v12; // [rsp+28h] [rbp-20h]
  float v13; // [rsp+2Ch] [rbp-1Ch]

  TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 472));
  CMILMatrix::Transform2DBoundsHelper<1>(TopByReference, v7, v6);
  LOBYTE(v8) = 1;
  result = CScopedClipStack::GetTopGpuClipInScope(a1 + 912, v8, &v10);
  if ( v10 > *a3 )
    *a3 = v10;
  if ( v11 > a3[1] )
    a3[1] = v11;
  if ( a3[2] > v12 )
    a3[2] = v12;
  if ( a3[3] > v13 )
    a3[3] = v13;
  if ( a3[2] <= *a3 || a3[3] <= a3[1] )
  {
    result = 0LL;
    *((_QWORD *)a3 + 1) = 0LL;
    *(_QWORD *)a3 = 0LL;
  }
  return result;
}
