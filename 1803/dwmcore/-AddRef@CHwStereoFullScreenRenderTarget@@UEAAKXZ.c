/*
 * XREFs of ?AddRef@CHwStereoFullScreenRenderTarget@@UEAAKXZ @ 0x1801E44F0
 * Callers:
 *     ?AddRef@CHwCompSwapChainTarget@@WKA@EAAKXZ @ 0x1800DDE40 (-AddRef@CHwCompSwapChainTarget@@WKA@EAAKXZ.c)
 *     ?AddRef@CHwStereoFullScreenRenderTarget@@WNI@EAAKXZ @ 0x1800DDE50 (-AddRef@CHwStereoFullScreenRenderTarget@@WNI@EAAKXZ.c)
 *     ?AddRef@CHwStereoFullScreenRenderTarget@@WCFI@EAAKXZ @ 0x1800DE230 (-AddRef@CHwStereoFullScreenRenderTarget@@WCFI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::AddRef(CHwStereoFullScreenRenderTarget *this)
{
  return CMILCOMBase::InternalAddRef((CHwStereoFullScreenRenderTarget *)((char *)this + 160));
}
