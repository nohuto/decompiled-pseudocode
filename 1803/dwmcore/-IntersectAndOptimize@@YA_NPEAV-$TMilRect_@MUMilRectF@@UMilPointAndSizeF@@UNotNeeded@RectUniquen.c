/*
 * XREFs of ?IntersectAndOptimize@@YA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0AEBV1@PEA_N2@Z @ 0x1800C2528
 * Callers:
 *     ?ComputeVisibleRegion@CArrayBasedCoverageSet@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x1800644D0 (-ComputeVisibleRegion@CArrayBasedCoverageSet@@UEBAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 */

bool __fastcall IntersectAndOptimize(struct D2D_RECT_F *a1, float *a2, float *a3, _BYTE *a4, _BYTE *a5)
{
  char v5; // r10
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm2_4
  float v15; // xmm1_4
  char v16; // al
  char v17; // r10
  float v18; // xmm2_4

  v5 = 0;
  v6 = *a3;
  v7 = *a2;
  *a5 = 0;
  *a4 = 0;
  v8 = a3[2];
  if ( v7 < v6 )
  {
    a1->left = v6;
    v8 = fminf(v8, a2[2]);
  }
  else
  {
    a1->left = v7;
    v9 = a2[2];
    if ( v8 >= v9 )
    {
      v10 = a3[3];
      a1->right = v9;
      v11 = a3[1];
      v12 = a2[1];
      if ( v12 < v11 )
      {
        a1->top = v11;
        v18 = a2[3];
        if ( v10 < v18 )
        {
          a1->bottom = v10;
          return 1;
        }
        a1->bottom = v18;
        if ( a2[3] <= v11 )
          return v5;
        a2[3] = v11;
      }
      else
      {
        a1->top = v12;
        v13 = a2[3];
        if ( v10 >= v13 )
        {
          v5 = 1;
          a1->bottom = v13;
          *a5 = 1;
          return v5;
        }
        a1->bottom = v10;
        if ( v10 <= a2[1] )
          return v5;
        a2[1] = v10;
      }
      v5 = 1;
      *a4 = 1;
      return v5;
    }
  }
  a1->right = v8;
  v15 = a3[3];
  a1->top = fmaxf(a3[1], a2[1]);
  a1->bottom = fminf(v15, a2[3]);
  v16 = IsEmpty(a1);
  return v16 == v17;
}
