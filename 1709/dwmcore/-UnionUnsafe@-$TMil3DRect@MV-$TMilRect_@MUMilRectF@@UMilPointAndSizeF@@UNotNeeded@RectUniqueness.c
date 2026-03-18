/*
 * XREFs of ?UnionUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180087820
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
        float *a1,
        float *a2)
{
  unsigned int v2; // eax
  float v3; // xmm0_4
  unsigned int v4; // r8d
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  char result; // al

  v2 = a1[5] <= a1[4];
  if ( a1[2] <= *a1 )
    ++v2;
  if ( a1[3] <= a1[1] )
    ++v2;
  v3 = *a2;
  v4 = a2[5] <= a2[4];
  if ( a2[2] <= *a2 )
    ++v4;
  if ( a2[3] <= a2[1] )
    ++v4;
  if ( v2 <= 1 )
  {
    if ( v4 <= 1 )
    {
      if ( *a1 > v3 )
        *a1 = v3;
      v5 = a2[1];
      if ( a1[1] > v5 )
        a1[1] = v5;
      v6 = a2[2];
      if ( v6 > a1[2] )
        a1[2] = v6;
      v7 = a2[3];
      if ( v7 > a1[3] )
        a1[3] = v7;
      v8 = a2[5];
      if ( v8 > a1[5] )
        a1[5] = v8;
      v9 = a2[4];
      if ( a1[4] > v9 )
        a1[4] = v9;
    }
    return 1;
  }
  if ( v4 <= 1 )
  {
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *((_QWORD *)a1 + 2) = *((_QWORD *)a2 + 2);
    return 1;
  }
  result = 0;
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  *(_QWORD *)a1 = 0LL;
  return result;
}
