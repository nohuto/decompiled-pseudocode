/*
 * XREFs of ?Release@CHwStereoFullScreenRenderTarget@@UEAAKXZ @ 0x18008F920
 * Callers:
 *     ?Release@CHwTextureRenderTarget@@WJA@EAAKXZ @ 0x1800C6AD0 (-Release@CHwTextureRenderTarget@@WJA@EAAKXZ.c)
 *     ?Release@CHwTextureRenderTarget@@WMI@EAAKXZ @ 0x1800C6AE0 (-Release@CHwTextureRenderTarget@@WMI@EAAKXZ.c)
 *     ?Release@CHwTextureRenderTarget@@WNA@EAAKXZ @ 0x1800C6AF0 (-Release@CHwTextureRenderTarget@@WNA@EAAKXZ.c)
 *     ?Release@CHwTextureRenderTarget@@WNI@EAAKXZ @ 0x1800C6B00 (-Release@CHwTextureRenderTarget@@WNI@EAAKXZ.c)
 *     ?Release@CHwStereoFullScreenRenderTarget@@WCDA@EAAKXZ @ 0x1800C6D00 (-Release@CHwStereoFullScreenRenderTarget@@WCDA@EAAKXZ.c)
 *     ?Release@CHwTextureRenderTarget@@WMA@EAAKXZ @ 0x1800C6D10 (-Release@CHwTextureRenderTarget@@WMA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwStereoFullScreenRenderTarget::Release(CHwStereoFullScreenRenderTarget *this)
{
  return CMILCOMBase::InternalRelease((CHwStereoFullScreenRenderTarget *)((char *)this + 144));
}
