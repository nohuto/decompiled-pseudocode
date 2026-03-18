/*
 * XREFs of ?PaddingsIntersectWithDestRect@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z @ 0x180151CA0
 * Callers:
 *     ?CheckPaddingCorrectness@COverlayContext@@CA_NAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEAUOverlayPlaneInfo@1@@Z @ 0x18015003C (-CheckPaddingCorrectness@COverlayContext@@CA_NAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayContex.c)
 * Callees:
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180025694 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180025700 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x1800257C8 (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180075968 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

bool __fastcall COverlayContext::PaddingsIntersectWithDestRect(
        struct COverlayContext::OverlayPlaneInfo *a1,
        struct COverlayContext::OverlayPlaneInfo *a2)
{
  char v4; // bl
  struct FastRegion::Internal::CRgnData *v6[10]; // [rsp+20h] [rbp-B8h] BYREF
  struct FastRegion::Internal::CRgnData *v7[10]; // [rsp+70h] [rbp-68h] BYREF

  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v7, (const struct tagRECT *)((char *)a1 + 76));
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v6, (const struct tagRECT *)((char *)a1 + 60));
  FastRegion::CRegion::Subtract(v7, v6);
  FastRegion::CRegion::FreeMemory((void **)v6);
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v6, (const struct tagRECT *)((char *)a2 + 60));
  if ( *(_DWORD *)v7[0] && *(_DWORD *)v6[0] )
    v4 = FastRegion::Internal::CRgnData::Intersects(v7[0], v6[0]);
  else
    v4 = 0;
  FastRegion::CRegion::FreeMemory((void **)v6);
  FastRegion::CRegion::FreeMemory((void **)v7);
  return v4 != 0;
}
