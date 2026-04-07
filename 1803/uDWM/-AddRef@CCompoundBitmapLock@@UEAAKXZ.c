/*
 * XREFs of ?AddRef@CCompoundBitmapLock@@UEAAKXZ @ 0x180045AC0
 * Callers:
 *     ?AddRef@CBitmap@@WCA@EAAKXZ @ 0x18004B450 (-AddRef@CBitmap@@WCA@EAAKXZ.c)
 *     ?AddRef@CBitmap@@WDA@EAAKXZ @ 0x18004B460 (-AddRef@CBitmap@@WDA@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WPA@EAAKXZ @ 0x18004B500 (-AddRef@CCompressedSourceBitmap@@WPA@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WPI@EAAKXZ @ 0x18004B510 (-AddRef@CCompressedSourceBitmap@@WPI@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WBI@EAAKXZ @ 0x18004B5B0 (-AddRef@CCompressedSourceBitmap@@WBI@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WCI@EAAKXZ @ 0x18004B5C0 (-AddRef@CCompressedSourceBitmap@@WCI@EAAKXZ.c)
 *     ?AddRef@CBitmap@@WBA@EAAKXZ @ 0x18004B600 (-AddRef@CBitmap@@WBA@EAAKXZ.c)
 *     ?AddRef@CBitmapLock@@WEI@EAAKXZ @ 0x18004B660 (-AddRef@CBitmapLock@@WEI@EAAKXZ.c)
 *     ?AddRef@CBitmapLock@@WFA@EAAKXZ @ 0x18004B670 (-AddRef@CBitmapLock@@WFA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CCompoundBitmapLock::AddRef(CCompoundBitmapLock *this)
{
  return CMILCOMBase::InternalAddRef(this);
}
