/*
 * XREFs of ?GetUnOccludedDirtyRegion@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCVisualTree@@_NIPEAV2@@Z @ 0x18011B9E8
 * Callers:
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x1801C1C3C (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036790 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsOccluded@COcclusionContext@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x18005CCEC (-IsOccluded@COcclusionContext@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetZ@CDirtyRegionAnnotation@@QEAAHPEBVCVisualTree@@_N@Z @ 0x180119E50 (-GetZ@CDirtyRegionAnnotation@@QEAAHPEBVCVisualTree@@_N@Z.c)
 *     ?InflateRectF_InPlace@@YAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180147EA4 (-InflateRectF_InPlace@@YAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquene.c)
 */

__int64 __fastcall CDirtyRegion::GetUnOccludedDirtyRegion(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const struct CVisualTree *a4,
        char a5,
        unsigned int a6,
        __int64 a7)
{
  __int64 v11; // rcx
  _QWORD **v12; // r14
  _QWORD *v13; // rsi
  _QWORD *v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // rcx
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm1_4
  float v21[10]; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 2722) )
  {
    *(_OWORD *)a2 = *(_OWORD *)(a1 + 2700);
  }
  else
  {
    *(_DWORD *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)a2 = 0;
    if ( a6 >= *(_DWORD *)(a1 + 1116) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x364u);
    }
    else
    {
      _mm_lfence();
      v11 = 16LL * *(unsigned int *)(a1 + 4LL * a6 + 1084);
      v12 = (_QWORD **)(v11 + a1 + 280);
      *(_OWORD *)a2 = *(_OWORD *)(v11 + a1 + 152);
      v13 = *v12;
      while ( v13 != v12 )
      {
        v14 = v13;
        v13 = (_QWORD *)*v13;
        v15 = CDirtyRegionAnnotation::GetZ((CVisual **)v14, a4);
        *(_OWORD *)v21 = *(_OWORD *)((char *)v14 + 28);
        if ( !COcclusionContext::IsOccluded(a3, v21, 0LL, v15) )
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)a2, v21);
      }
      if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)a2) )
      {
        if ( a5 )
          InflateRectF_InPlace(v16);
        if ( *(float *)a7 > *(float *)a2 )
          *(_DWORD *)a2 = *(_DWORD *)a7;
        v17 = *(float *)(a7 + 4);
        if ( v17 > *(float *)(a2 + 4) )
          *(float *)(a2 + 4) = v17;
        v18 = *(float *)(a7 + 8);
        if ( *(float *)(a2 + 8) > v18 )
          *(float *)(a2 + 8) = v18;
        v19 = *(float *)(a7 + 12);
        if ( *(float *)(a2 + 12) > v19 )
          *(float *)(a2 + 12) = v19;
        if ( *(float *)(a2 + 8) <= *(float *)a2 || *(float *)(a2 + 12) <= *(float *)(a2 + 4) )
        {
          *(_DWORD *)(a2 + 12) = 0;
          *(_DWORD *)(a2 + 8) = 0;
          *(_DWORD *)(a2 + 4) = 0;
          *(_DWORD *)a2 = 0;
        }
      }
    }
  }
  return a2;
}
