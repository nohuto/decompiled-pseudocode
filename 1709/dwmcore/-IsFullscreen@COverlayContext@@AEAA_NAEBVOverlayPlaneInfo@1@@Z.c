/*
 * XREFs of ?IsFullscreen@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z @ 0x1801436D0
 * Callers:
 *     ?NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ @ 0x180017508 (-NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ.c)
 *     ?IsRevokable@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z @ 0x180143B20 (-IsRevokable@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180036AA4 (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

char __fastcall COverlayContext::IsFullscreen(
        COverlayContext *this,
        const struct COverlayContext::OverlayPlaneInfo *a2)
{
  __int64 i; // rax
  float v4[4]; // [rsp+20h] [rbp-28h] BYREF

  for ( i = 0LL; i < 4; ++i )
    v4[i] = (float)*((int *)a2 + i + 19);
  return TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(v4, (float *)this + 14);
}
