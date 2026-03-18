/*
 * XREFs of ?IsFullscreen@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z @ 0x18015156C
 * Callers:
 *     ?NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ @ 0x18006BF08 (-NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ.c)
 *     ?IsRevokable@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z @ 0x180151974 (-IsRevokable@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006FF64 (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

char __fastcall COverlayContext::IsFullscreen(COverlayContext *this, struct COverlayContext::OverlayPlaneInfo *a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  float v5[4]; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+6Ch] [rbp+24h]

  v2 = 0LL;
  v3 = a2 - (struct COverlayContext::OverlayPlaneInfo *)v5;
  do
  {
    v5[v2] = (float)*(int *)((char *)&v6 + 4 * v2 + v3);
    ++v2;
  }
  while ( v2 < 4 );
  return TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(v5, (float *)this + 10);
}
