/*
 * XREFs of ?RectContainedInRegionRect@COverlayContext@@CA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I0@Z @ 0x180151D64
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x1800712CC (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x180072060 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 * Callees:
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006FF1C (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

char __fastcall COverlayContext::RectContainedInRegionRect(float *a1, int a2, __int64 a3)
{
  char v4; // r9
  float *v5; // rdx
  unsigned int v6; // r10d
  int v7; // r10d
  unsigned int v8; // r11d

  v4 = 0;
  v5 = a1;
  v6 = 0;
  if ( a2 )
  {
    while ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain((float *)(a3 + 16LL * v6), v5) )
    {
      v6 = v7 + 1;
      if ( v6 >= v8 )
        return v4;
    }
    return 1;
  }
  return v4;
}
