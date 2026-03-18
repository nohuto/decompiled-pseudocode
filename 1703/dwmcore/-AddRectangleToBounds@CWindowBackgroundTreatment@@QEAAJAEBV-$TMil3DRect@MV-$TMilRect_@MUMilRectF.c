/*
 * XREFs of ?AddRectangleToBounds@CWindowBackgroundTreatment@@QEAAJAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801782E0
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180096CB0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800B4010 (-UnionUnsafe@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness.c)
 */

__int64 __fastcall CWindowBackgroundTreatment::AddRectangleToBounds(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)(a1 + 276) )
  {
    TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
      (float *)(a1 + 72),
      (float *)a2);
  }
  else
  {
    *(_OWORD *)(a1 + 72) = *(_OWORD *)a2;
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 16);
    *(_BYTE *)(a1 + 276) = 1;
  }
  return 0LL;
}
