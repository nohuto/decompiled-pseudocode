/*
 * XREFs of ?Release@CHwStereoFullScreenRenderTarget@@UEAAKXZ @ 0x180078160
 * Callers:
 *     ?Release@CHwStereoFullScreenRenderTarget@@WNI@EAAKXZ @ 0x1800DE150 (-Release@CHwStereoFullScreenRenderTarget@@WNI@EAAKXZ.c)
 *     ?Release@CHwTextureRenderTarget@@WOA@EAAKXZ @ 0x1800DE160 (-Release@CHwTextureRenderTarget@@WOA@EAAKXZ.c)
 *     ?Release@CHwTextureRenderTarget@@WOI@EAAKXZ @ 0x1800DE170 (-Release@CHwTextureRenderTarget@@WOI@EAAKXZ.c)
 *     ?Release@CHwTextureRenderTarget@@WPA@EAAKXZ @ 0x1800DE180 (-Release@CHwTextureRenderTarget@@WPA@EAAKXZ.c)
 *     ?Release@CHwStereoFullScreenRenderTarget@@WCFI@EAAKXZ @ 0x1800DE3E0 (-Release@CHwStereoFullScreenRenderTarget@@WCFI@EAAKXZ.c)
 *     ?Release@CHwCompSwapChainTarget@@WKA@EAAKXZ @ 0x1800DE3F0 (-Release@CHwCompSwapChainTarget@@WKA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwStereoFullScreenRenderTarget::Release(CHwStereoFullScreenRenderTarget *this)
{
  return CMILCOMBase::InternalRelease((CHwStereoFullScreenRenderTarget *)((char *)this + 160));
}
