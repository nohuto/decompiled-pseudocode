/*
 * XREFs of ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x180064A50
 * Callers:
 *     ?ComputeVisibleRegion@CArrayBasedCoverageSet@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x1800644D0 (-ComputeVisibleRegion@CArrayBasedCoverageSet@@UEBAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?IsFullyCovered@CArrayBasedCoverageSet@@UEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x180064B20 (-IsFullyCovered@CArrayBasedCoverageSet@@UEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067BE0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IntersectsWithAntiOccluder@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEAH@Z @ 0x180064460 (-IntersectsWithAntiOccluder@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointA.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 */

char __fastcall CArrayBasedCoverageSet::IsCovered(__int64 a1, __int64 a2, int a3, char a4)
{
  char v5; // di
  const struct D2D_RECT_F *v6; // rdx
  _OWORD *v7; // rdx
  int v8; // r8d
  int v9; // r11d
  __int64 v11; // r9
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  __int64 v16; // r10
  int v17; // ebx
  int v18; // edx
  float *v19; // rcx
  int v20; // r9d
  unsigned int v21; // r11d
  float v22; // xmm4_4
  float v23; // xmm5_4
  int v24; // [rsp+58h] [rbp+20h] BYREF

  LOBYTE(v24) = a4;
  v5 = CArrayBasedCoverageSet::IntersectsWithAntiOccluder(a1, a2, a3, &v24);
  if ( IsEmpty(v6) )
    return 1;
  v11 = 0LL;
  if ( v9 )
  {
    v16 = *(_QWORD *)(a1 + 24);
    v17 = v24;
    LODWORD(v15) = HIDWORD(*v7);
    LODWORD(v14) = HIDWORD(*(_QWORD *)v7);
    do
    {
      if ( *(_DWORD *)(v16 + 36 * v11 + 16) >= v8 )
        break;
      if ( !IsEmpty((const struct D2D_RECT_F *)(v16 + 36 * v11)) && (!v5 || v18 > v17) && v22 >= *v19 && v19[2] >= v23 )
      {
        v12 = v19[1];
        v13 = v19[3];
        if ( v14 < v12 )
        {
          if ( v13 >= v15 && v15 > v12 )
            v15 = v19[1];
        }
        else
        {
          if ( v13 >= v15 )
            return 1;
          if ( v13 > v14 )
            v14 = v19[3];
        }
      }
      v11 = (unsigned int)(v20 + 1);
    }
    while ( (unsigned int)v11 < v21 );
  }
  return 0;
}
