/*
 * XREFs of ?AddRef@CHwStereoFullScreenRenderTarget@@UEAAKXZ @ 0x18019C3A0
 * Callers:
 *     ?AddRef@CHwStereoFullScreenRenderTarget@@WBHA@EAAKXZ @ 0x1800D6370 (-AddRef@CHwStereoFullScreenRenderTarget@@WBHA@EAAKXZ.c)
 *     ?AddRef@CHwStereoFullScreenRenderTarget@@WIA@EAAKXZ @ 0x1800D6380 (-AddRef@CHwStereoFullScreenRenderTarget@@WIA@EAAKXZ.c)
 *     ?AddRef@CHwStereoFullScreenRenderTarget@@WLA@EAAKXZ @ 0x1800D6390 (-AddRef@CHwStereoFullScreenRenderTarget@@WLA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::AddRef(CHwStereoFullScreenRenderTarget *this)
{
  return CBitmapOfDeviceBitmaps::AddRef((CHwStereoFullScreenRenderTarget *)((char *)this + 128));
}
