/*
 * XREFs of ?RectIntersectsVisitedRegion@COverlayContext@@QEAA_NUtagRECT@@@Z @ 0x180167568
 * Callers:
 *     ?CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180163E08 (-CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV-$TMilRect_@.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180080234 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x180083124 (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

char __fastcall COverlayContext::RectIntersectsVisitedRegion(COverlayContext *this, struct tagRECT *a2)
{
  __int64 v2; // r9
  const struct FastRegion::Internal::CRgnData *v3; // rcx
  char v4; // bl
  struct FastRegion::Internal::CRgnData *v6[10]; // [rsp+20h] [rbp-68h] BYREF

  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v6, a2);
  v3 = *(const struct FastRegion::Internal::CRgnData **)(v2 + 1064);
  v4 = 0;
  if ( *(_DWORD *)v3 && *(_DWORD *)v6[0] )
    v4 = FastRegion::Internal::CRgnData::Intersects(v3, v6[0]);
  FastRegion::CRegion::FreeMemory((void **)v6);
  return v4;
}
