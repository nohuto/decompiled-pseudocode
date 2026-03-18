/*
 * XREFs of ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x180036300
 * Callers:
 *     ?ComputeVisibleRegion@CArrayBasedCoverageSet@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x180035DC0 (-ComputeVisibleRegion@CArrayBasedCoverageSet@@UEBAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?IsFullyCovered@CArrayBasedCoverageSet@@UEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x1800363D0 (-IsFullyCovered@CArrayBasedCoverageSet@@UEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IntersectsWithAntiOccluder@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEAH@Z @ 0x180035D50 (-IntersectsWithAntiOccluder@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointA.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

char __fastcall CArrayBasedCoverageSet::IsCovered(__int64 a1, __int64 a2, int a3, char a4)
{
  char v5; // di
  __int64 v6; // rdx
  _OWORD *v7; // rdx
  int v8; // r8d
  int v9; // r11d
  __int64 v11; // r9
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  __int64 v16; // r10
  int v17; // edx
  float *v18; // rcx
  int v19; // r9d
  unsigned int v20; // r11d
  float v21; // xmm4_4
  float v22; // xmm5_4
  int v23; // [rsp+58h] [rbp+20h] BYREF

  LOBYTE(v23) = a4;
  v5 = CArrayBasedCoverageSet::IntersectsWithAntiOccluder(a1, a2, a3, &v23);
  if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v6) )
    return 1;
  v11 = 0LL;
  if ( v9 )
  {
    v16 = *(_QWORD *)(a1 + 24);
    LODWORD(v14) = HIDWORD(*v7);
    LODWORD(v15) = HIDWORD(*(_QWORD *)v7);
    do
    {
      if ( *(_DWORD *)(v16 + 36 * v11 + 16) >= v8 )
        break;
      if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v16 + 36 * v11)
        && (!v5 || v17 > v23)
        && v21 >= *v18
        && v18[2] >= v22 )
      {
        v12 = v18[1];
        v13 = v18[3];
        if ( v15 < v12 )
        {
          if ( v13 >= v14 && v14 > v12 )
            v14 = v18[1];
        }
        else
        {
          if ( v13 >= v14 )
            return 1;
          if ( v13 > v15 )
            v15 = v18[3];
        }
      }
      v11 = (unsigned int)(v19 + 1);
    }
    while ( (unsigned int)v11 < v20 );
  }
  return 0;
}
