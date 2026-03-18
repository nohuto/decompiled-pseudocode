/*
 * XREFs of ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x1800257C8
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18001D100 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?IsValid@CSecondaryBitmap@@UEAA_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800252A0 (-IsValid@CSecondaryBitmap@@UEAA_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x18014EDA8 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?PaddingsIntersectWithDestRect@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z @ 0x180151CA0 (-PaddingsIntersectWithDestRect@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z.c)
 *     ?RectIntersectsVisitedRegion@COverlayContext@@QEAA_NUtagRECT@@@Z @ 0x180151DE0 (-RectIntersectsVisitedRegion@COverlayContext@@QEAA_NUtagRECT@@@Z.c)
 * Callees:
 *     ?Intersects@CStripe@Internal@FastRegion@@SA_NPEBV123@0@Z @ 0x180025874 (-Intersects@CStripe@Internal@FastRegion@@SA_NPEBV123@0@Z.c)
 */

char __fastcall FastRegion::Internal::CRgnData::Intersects(
        const struct FastRegion::Internal::CRgnData *a1,
        const struct FastRegion::Internal::CRgnData *a2)
{
  _DWORD *v2; // r10
  const struct FastRegion::Internal::CStripe *v3; // rbx
  char *v4; // rdi
  int v5; // eax
  const struct FastRegion::Internal::CStripe *v6; // rdx
  const struct FastRegion::Internal::CStripe *v7; // rcx
  const struct FastRegion::Internal::CStripe *v8; // r10
  const struct FastRegion::Internal::CStripe *v9; // r11
  const struct FastRegion::Internal::CStripe *v11; // r10
  const struct FastRegion::Internal::CStripe *v12; // r11
  int v13; // eax
  char *v14; // r11

  v2 = (_DWORD *)((char *)a1 + 12);
  v3 = (const struct FastRegion::Internal::CRgnData *)((char *)a1 + 8 * *(int *)a1 + 12);
  v4 = (char *)a2 + 8 * *(int *)a2 + 12;
  v5 = *((_DWORD *)a2 + 3);
  if ( *((_DWORD *)a1 + 3) < v5 )
  {
    v11 = (const struct FastRegion::Internal::CRgnData *)((char *)a1 + 20);
    while ( *(_DWORD *)v11 < v5 )
    {
      v11 = (const struct FastRegion::Internal::CStripe *)((char *)v11 + 8);
      if ( v11 == v3 )
        return 0;
    }
    v7 = v11;
    if ( *(_DWORD *)v11 > v5 )
    {
      v7 = (const struct FastRegion::Internal::CStripe *)((char *)v11 - 8);
      v6 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
      goto LABEL_4;
    }
    if ( (const struct FastRegion::Internal::CStripe *)((char *)v11 + 8) != v3 )
    {
      v6 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
      goto LABEL_4;
    }
    return 0;
  }
  if ( *((_DWORD *)a1 + 3) <= v5 )
  {
    v6 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 12);
    v7 = (const struct FastRegion::Internal::CRgnData *)((char *)a1 + 12);
    goto LABEL_4;
  }
  v12 = (const struct FastRegion::Internal::CRgnData *)((char *)a2 + 20);
  while ( 1 )
  {
    v13 = *(_DWORD *)v12;
    if ( *v2 < *(_DWORD *)v12 )
    {
      v6 = (const struct FastRegion::Internal::CStripe *)((char *)v12 - 8);
      v7 = (const struct FastRegion::Internal::CRgnData *)((char *)a1 + 12);
      goto LABEL_4;
    }
    v6 = v12;
    v12 = (const struct FastRegion::Internal::CStripe *)((char *)v12 + 8);
    if ( *v2 <= v13 )
      break;
    if ( v12 == (const struct FastRegion::Internal::CStripe *)v4 )
      return 0;
  }
  if ( v12 == (const struct FastRegion::Internal::CStripe *)v4 )
    return 0;
  v7 = (const struct FastRegion::Internal::CRgnData *)((char *)a1 + 12);
LABEL_4:
  while ( !FastRegion::Internal::CStripe::Intersects(v7, v6) )
  {
    v6 = v9;
    v7 = v8;
    if ( *(_DWORD *)v8 >= *(_DWORD *)v9 )
    {
      if ( *(_DWORD *)v8 <= *(_DWORD *)v9 )
      {
        v14 = (char *)v9 + 8;
        if ( (const struct FastRegion::Internal::CStripe *)((char *)v8 + 8) == v3 || v14 == v4 )
          return 0;
      }
      else
      {
        if ( (char *)v9 + 8 == v4 )
          return 0;
        v7 = (const struct FastRegion::Internal::CStripe *)((char *)v8 - 8);
      }
    }
    else
    {
      if ( (const struct FastRegion::Internal::CStripe *)((char *)v8 + 8) == v3 )
        return 0;
      v6 = (const struct FastRegion::Internal::CStripe *)((char *)v9 - 8);
    }
  }
  return 1;
}
