/*
 * XREFs of ?RectContainedInDirty@COverlayContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801674B0
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x1800798B4 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x18007A1B8 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 * Callees:
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800651F0 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

char __fastcall COverlayContext::RectContainedInDirty(__int64 a1, const struct D2D_RECT_F *a2)
{
  char v2; // r10
  unsigned int v4; // r11d
  int v5; // r11d

  v2 = 0;
  v4 = 0;
  if ( *(_DWORD *)(a1 + 796) )
  {
    while ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(a1 + 16 * (v4 + 50LL), a2) )
    {
      v4 = v5 + 1;
      if ( v4 >= *(_DWORD *)(a1 + 796) )
        return v2;
    }
    return 1;
  }
  return v2;
}
