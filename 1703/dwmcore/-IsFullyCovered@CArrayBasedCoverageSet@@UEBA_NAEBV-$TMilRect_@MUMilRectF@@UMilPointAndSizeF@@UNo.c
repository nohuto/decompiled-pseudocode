/*
 * XREFs of ?IsFullyCovered@CArrayBasedCoverageSet@@UEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18006F9F0
 * Callers:
 *     ?IsOccluded@COcclusionContext@@QEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x18001D074 (-IsOccluded@COcclusionContext@@QEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180050730 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18006D550 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?IntersectsWithAntiOccluder@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEAH@Z @ 0x18006F3A0 (-IntersectsWithAntiOccluder@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointA.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

char __fastcall CArrayBasedCoverageSet::IsFullyCovered(__int64 a1, __int64 a2, int a3)
{
  char v5; // si
  __int64 v6; // rdx
  _OWORD *v7; // rdx
  unsigned int v8; // r10d
  __int64 v9; // r9
  __int64 v10; // r8
  char v11; // cl
  float v12; // xmm2_4
  float v13; // xmm3_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17[6]; // [rsp+20h] [rbp-18h]
  int v18; // [rsp+40h] [rbp+8h] BYREF

  v5 = CArrayBasedCoverageSet::IntersectsWithAntiOccluder(a1, a2, a3, &v18);
  if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v6) )
    return 1;
  v9 = 0LL;
  *(_OWORD *)v17 = *v7;
  if ( v8 )
  {
    v10 = *(_QWORD *)(a1 + 24);
    v11 = 1;
    LODWORD(v12) = HIDWORD(*v7);
    LODWORD(v13) = HIDWORD(*(_QWORD *)v7);
    do
    {
      if ( *(_DWORD *)(v10 + 20 * v9 + 16) >= a3 )
        break;
      if ( (!v5 || *(_DWORD *)(v10 + 20 * v9 + 16) > v18)
        && v17[0] >= *(float *)(v10 + 20 * v9)
        && *(float *)(v10 + 20 * v9 + 8) >= v17[2] )
      {
        v15 = *(float *)(v10 + 20 * v9 + 4);
        v16 = *(float *)(v10 + 20 * v9 + 12);
        if ( v13 < v15 )
        {
          if ( v16 >= v12 && v12 > v15 )
            v12 = *(float *)(v10 + 20 * v9 + 4);
        }
        else
        {
          if ( v16 >= v12 )
            return v11;
          if ( v16 > v13 )
            v13 = *(float *)(v10 + 20 * v9 + 12);
        }
      }
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < v8 );
  }
  return 0;
}
