/*
 * XREFs of ?Release@CHwStereoFullScreenRenderTarget@@UEAAKXZ @ 0x180049180
 * Callers:
 *     ?Release@CHwTextureRenderTarget@@WIA@EAAKXZ @ 0x1800D62F0 (-Release@CHwTextureRenderTarget@@WIA@EAAKXZ.c)
 *     ?Release@CHwTextureRenderTarget@@WLI@EAAKXZ @ 0x1800D6300 (-Release@CHwTextureRenderTarget@@WLI@EAAKXZ.c)
 *     ?Release@CHwTextureRenderTarget@@WMA@EAAKXZ @ 0x1800D6310 (-Release@CHwTextureRenderTarget@@WMA@EAAKXZ.c)
 *     ?Release@CHwTextureRenderTarget@@WMI@EAAKXZ @ 0x1800D6320 (-Release@CHwTextureRenderTarget@@WMI@EAAKXZ.c)
 *     ?Release@CHwStereoFullScreenRenderTarget@@WBHA@EAAKXZ @ 0x1800D64F0 (-Release@CHwStereoFullScreenRenderTarget@@WBHA@EAAKXZ.c)
 *     ?Release@CHwTextureRenderTarget@@WLA@EAAKXZ @ 0x1800D6500 (-Release@CHwTextureRenderTarget@@WLA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::Release(CHwStereoFullScreenRenderTarget *this)
{
  return CMILCOMBase::InternalRelease((CHwStereoFullScreenRenderTarget *)((char *)this + 128));
}
