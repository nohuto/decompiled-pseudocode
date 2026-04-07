/*
 * XREFs of ?Release@CWICBitmapWrapper@@UEAAKXZ @ 0x180045AD0
 * Callers:
 *     ?Release@CWICBitmapWrapper@@WCI@EAAKXZ @ 0x18004B4C0 (-Release@CWICBitmapWrapper@@WCI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WDA@EAAKXZ @ 0x18004B4D0 (-Release@CWICBitmapWrapper@@WDA@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WBI@EAAKXZ @ 0x18004B560 (-Release@CWICBitmapWrapper@@WBI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WCA@EAAKXZ @ 0x18004B570 (-Release@CWICBitmapWrapper@@WCA@EAAKXZ.c)
 *     ?Release@CCompressedSourceBitmap@@WPA@EAAKXZ @ 0x18004B580 (-Release@CCompressedSourceBitmap@@WPA@EAAKXZ.c)
 *     ?Release@CCompressedSourceBitmap@@WPI@EAAKXZ @ 0x18004B590 (-Release@CCompressedSourceBitmap@@WPI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WBA@EAAKXZ @ 0x18004B640 (-Release@CWICBitmapWrapper@@WBA@EAAKXZ.c)
 *     ?Release@CBitmapLock@@WEI@EAAKXZ @ 0x18004B6D0 (-Release@CBitmapLock@@WEI@EAAKXZ.c)
 *     ?Release@CBitmapLock@@WFA@EAAKXZ @ 0x18004B6E0 (-Release@CBitmapLock@@WFA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CWICBitmapWrapper::Release(CWICBitmapWrapper *this)
{
  return CMILCOMBase::InternalRelease(this);
}
