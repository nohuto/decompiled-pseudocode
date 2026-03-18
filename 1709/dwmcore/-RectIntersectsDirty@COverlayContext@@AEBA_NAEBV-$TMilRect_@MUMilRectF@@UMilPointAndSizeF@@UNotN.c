/*
 * XREFs of ?RectIntersectsDirty@COverlayContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801442CC
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x1800678F4 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 * Callees:
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800368B4 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

char __fastcall COverlayContext::RectIntersectsDirty(__int64 a1, float *a2)
{
  char v2; // r8
  __int64 v3; // r11
  unsigned int v4; // r9d
  int v5; // r9d
  unsigned int v6; // r10d

  v2 = 0;
  v3 = a1;
  v4 = 0;
  if ( *(_DWORD *)(a1 + 788) )
  {
    while ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
               (float *)(16LL * v4 + v3 + 792),
               a2) )
    {
      v4 = v5 + 1;
      if ( v4 >= v6 )
        return v2;
    }
    return 1;
  }
  return v2;
}
