/*
 * XREFs of ??$SetToBoundsOfUnorderedPointSet@UMilPoint2F@@@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUMilPoint2F@@$0?0@gsl@@@Z @ 0x180065244
 * Callers:
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A3F20 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A5380 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?ComputePartialIntermediate@CShapeTree@@CA_NAEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2PEAV4@@Z @ 0x1801C0FFC (-ComputePartialIntermediate@CShapeTree@@CA_NAEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@AEBV-$TMilRect_@M.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<MilPoint2F>(
        float *a1,
        __int64 a2)
{
  __int64 v2; // r8
  float v3; // xmm1_4
  float v4; // xmm2_4
  __int64 result; // rax
  float i; // xmm3_4

  *a1 = **(float **)(a2 + 8);
  v2 = 1LL;
  v3 = *(float *)(*(_QWORD *)(a2 + 8) + 4LL);
  a1[1] = v3;
  v4 = **(float **)(a2 + 8);
  a1[2] = v4;
  result = *(_QWORD *)(a2 + 8);
  for ( i = *(float *)(result + 4); ; i = fmaxf(i, *(float *)(result + 8 * v2++ + 4)) )
  {
    a1[3] = i;
    if ( v2 >= *(_QWORD *)a2 )
      break;
    *a1 = fminf(*a1, *(float *)(*(_QWORD *)(a2 + 8) + 8 * v2));
    v3 = fminf(v3, *(float *)(*(_QWORD *)(a2 + 8) + 8 * v2 + 4));
    a1[1] = v3;
    v4 = fmaxf(v4, *(float *)(*(_QWORD *)(a2 + 8) + 8 * v2));
    a1[2] = v4;
    result = *(_QWORD *)(a2 + 8);
  }
  return result;
}
