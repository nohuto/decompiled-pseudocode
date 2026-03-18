/*
 * XREFs of ?AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x180178318
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180096CB0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006FF64 (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180098D54 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

char __fastcall CWindowBackgroundTreatment::AreWorldBoundsUnchangedForPreCompute(CWindowBackgroundTreatment *this)
{
  float v3[6]; // [rsp+20h] [rbp-48h] BYREF
  float v4[6]; // [rsp+38h] [rbp-30h] BYREF

  CMILMatrix::Transform3DBoundsHelper<0>((__int64)this + 192, (__int64)this + 96, (int *)v3);
  CMILMatrix::Transform3DBoundsHelper<0>((__int64)this + 120, (__int64)this + 72, (int *)v4);
  return TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(v4, v3);
}
