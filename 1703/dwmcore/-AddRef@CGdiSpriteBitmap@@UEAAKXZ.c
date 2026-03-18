/*
 * XREFs of ?AddRef@CGdiSpriteBitmap@@UEAAKXZ @ 0x180048560
 * Callers:
 *     ?AddRef@CFlipChain@@WBA@EAAKXZ @ 0x1800D5BD0 (-AddRef@CFlipChain@@WBA@EAAKXZ.c)
 *     ?AddRef@CGdiSpriteBitmap@@WFI@EAAKXZ @ 0x1800D5C00 (-AddRef@CGdiSpriteBitmap@@WFI@EAAKXZ.c)
 *     ?AddRef@CImageSource@@W7EAAKXZ @ 0x1800D5D50 (-AddRef@CImageSource@@W7EAAKXZ.c)
 *     ?AddRef@CCachedVisualImage@@WFA@EAAKXZ @ 0x1800D5DE0 (-AddRef@CCachedVisualImage@@WFA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGdiSpriteBitmap::AddRef(CGdiSpriteBitmap *this)
{
  return CBitmapOfDeviceBitmaps::AddRef((CGdiSpriteBitmap *)((char *)this + 16));
}
