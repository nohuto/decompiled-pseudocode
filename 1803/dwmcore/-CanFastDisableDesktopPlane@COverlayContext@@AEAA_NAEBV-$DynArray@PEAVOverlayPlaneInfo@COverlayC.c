/*
 * XREFs of ?CanFastDisableDesktopPlane@COverlayContext@@AEAA_NAEBV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x180163BE0
 * Callers:
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@_N22PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x1801655F0 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV-$DynArray@PEAVOverlayPlaneInfo@COverlay.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180064E00 (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

char __fastcall COverlayContext::CanFastDisableDesktopPlane(__int64 a1, __int64 **a2)
{
  char v2; // r10
  __int64 v3; // r11
  __int64 i; // rax
  _BYTE *v5; // r11
  char v6; // al
  struct D2D_RECT_F v8; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  if ( *((_DWORD *)a2 + 6) )
  {
    v3 = **a2;
    for ( i = 0LL; i < 4; ++i )
      *(&v8.left + i) = (float)*(int *)(v3 + 4 * i + 76);
    if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(&v8, (float *)(a1 + 56))
      && (v5[177] == v2 || v5[181] != v2) )
    {
      v6 = v2;
      if ( v5[179] != v2 )
        return 1;
      return v6;
    }
  }
  return v2;
}
