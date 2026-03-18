/*
 * XREFs of ?AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x1800B1B20
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180036AA4 (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180059A5C (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

char __fastcall CWindowBackgroundTreatment::AreWorldBoundsUnchangedForPreCompute(CWindowBackgroundTreatment *this)
{
  float v3[6]; // [rsp+20h] [rbp-48h] BYREF
  float v4[6]; // [rsp+38h] [rbp-30h] BYREF

  CMILMatrix::Transform3DBoundsHelper<0>((__int64)this + 216, (__int64)this + 96, (int *)v3);
  CMILMatrix::Transform3DBoundsHelper<0>((__int64)this + 144, (__int64)this + 72, (int *)v4);
  return TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(v4, v3);
}
