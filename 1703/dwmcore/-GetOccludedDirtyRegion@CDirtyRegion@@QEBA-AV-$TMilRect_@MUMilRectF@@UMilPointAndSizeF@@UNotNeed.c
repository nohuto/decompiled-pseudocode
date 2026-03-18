/*
 * XREFs of ?GetOccludedDirtyRegion@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCVisualTree@@IPEAV2@@Z @ 0x180131CB8
 * Callers:
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x1801A6C4C (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 * Callees:
 *     ?IsOccluded@COcclusionContext@@QEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x18001D074 (-IsOccluded@COcclusionContext@@QEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?GetZ@CDirtyRegionAnnotation@@QEAAHPEBVCVisualTree@@_N@Z @ 0x18001E0D4 (-GetZ@CDirtyRegionAnnotation@@QEAAHPEBVCVisualTree@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006FD70 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006FF1C (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall CDirtyRegion::GetOccludedDirtyRegion(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const struct CVisualTree *a4,
        unsigned int a5,
        float *a6)
{
  __int128 v10; // xmm0
  __int64 v11; // rcx
  _QWORD **v12; // r14
  _QWORD *v13; // rsi
  _QWORD *v14; // rbx
  unsigned int v15; // eax
  __int128 *v16; // rdx
  float v18[10]; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 2724) )
  {
    v10 = *(_OWORD *)(a1 + 2708);
LABEL_3:
    *(_OWORD *)a2 = v10;
    return a2;
  }
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)a2 = 0;
  if ( a5 >= *(_DWORD *)(a1 + 1120) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x381u);
    return a2;
  }
  _mm_lfence();
  v11 = 16LL * *(unsigned int *)(a1 + 4LL * a5 + 1088);
  v12 = (_QWORD **)(v11 + a1 + 280);
  *(_OWORD *)a2 = *(_OWORD *)(v11 + a1 + 152);
  v13 = *v12;
  while ( v13 != v12 )
  {
    v14 = v13;
    v13 = (_QWORD *)*v13;
    v15 = CDirtyRegionAnnotation::GetZ((CVisual **)v14, a4, 1);
    *(_OWORD *)v18 = *(_OWORD *)((char *)v14 + 28);
    if ( !COcclusionContext::IsOccluded(a3, (__int64)v18, 0LL, v15) )
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)a2, v18);
  }
  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain((float *)a2, a6) )
  {
    v10 = *v16;
    goto LABEL_3;
  }
  return a2;
}
