/*
 * XREFs of ?GetWorldBounds2D@CPreComputeContext@@AEAA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180055A98
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800598E0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007B3D4 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Clip@CBaseClipStack@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV2@@Z @ 0x1800B8688 (-Clip@CBaseClipStack@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquenes.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CPreComputeContext::GetWorldBounds2D(__int64 a1, __int64 a2, __int64 a3, float a4)
{
  const struct CMILMatrix *TopByReference; // rax
  __int64 v8; // r9
  float v9; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm3_4
  float v12; // xmm4_4
  float v14; // [rsp+20h] [rbp-40h] BYREF
  float v15; // [rsp+24h] [rbp-3Ch]
  float v16; // [rsp+28h] [rbp-38h]
  float v17; // [rsp+2Ch] [rbp-34h]
  float v18; // [rsp+30h] [rbp-30h] BYREF
  float v19; // [rsp+34h] [rbp-2Ch]
  float v20; // [rsp+38h] [rbp-28h]
  float v21; // [rsp+3Ch] [rbp-24h]

  TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 136));
  CMILMatrix::Transform3DBoundsHelper<1>(TopByReference, v8, &v18, v8);
  v9 = v18;
  v10 = v19;
  v11 = v20;
  v14 = v18;
  v15 = v19;
  v16 = v20;
  v17 = v21;
  if ( a4 > 0.0 && !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v14) )
  {
    v14 = v9 - a4;
    v15 = v10 - a4;
    v16 = v11 + a4;
    v17 = v12 + a4;
  }
  CBaseClipStack::Clip(a1 + 168, a2, &v14);
  return a2;
}
