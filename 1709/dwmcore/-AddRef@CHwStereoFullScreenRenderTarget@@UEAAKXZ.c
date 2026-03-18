/*
 * XREFs of ?AddRef@CHwStereoFullScreenRenderTarget@@UEAAKXZ @ 0x18008F910
 * Callers:
 *     ?AddRef@CHwTextureRenderTarget@@WJA@EAAKXZ @ 0x1800C68C0 (-AddRef@CHwTextureRenderTarget@@WJA@EAAKXZ.c)
 *     ?AddRef@CHwTextureRenderTarget@@WMA@EAAKXZ @ 0x1800C68D0 (-AddRef@CHwTextureRenderTarget@@WMA@EAAKXZ.c)
 *     ?AddRef@CHwTextureRenderTarget@@WMI@EAAKXZ @ 0x1800C68E0 (-AddRef@CHwTextureRenderTarget@@WMI@EAAKXZ.c)
 *     ?AddRef@CHwTextureRenderTarget@@WNA@EAAKXZ @ 0x1800C68F0 (-AddRef@CHwTextureRenderTarget@@WNA@EAAKXZ.c)
 *     ?AddRef@CHwTextureRenderTarget@@WNI@EAAKXZ @ 0x1800C6900 (-AddRef@CHwTextureRenderTarget@@WNI@EAAKXZ.c)
 *     ?AddRef@CHwStereoFullScreenRenderTarget@@WCDA@EAAKXZ @ 0x1800C6BA0 (-AddRef@CHwStereoFullScreenRenderTarget@@WCDA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::AddRef(CHwStereoFullScreenRenderTarget *this)
{
  return CMILCOMBase::InternalAddRef((CHwStereoFullScreenRenderTarget *)((char *)this + 144));
}
