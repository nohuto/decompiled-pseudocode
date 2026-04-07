/*
 * XREFs of ?AddRef@CCompoundBitmapLock@@UEAAKXZ @ 0x180042DD0
 * Callers:
 *     ?AddRef@CCompressedSourceBitmap@@WBI@EAAKXZ @ 0x180046850 (-AddRef@CCompressedSourceBitmap@@WBI@EAAKXZ.c)
 *     ?AddRef@CBitmap@@WCA@EAAKXZ @ 0x180046860 (-AddRef@CBitmap@@WCA@EAAKXZ.c)
 *     ?AddRef@CBitmap@@WDA@EAAKXZ @ 0x180046870 (-AddRef@CBitmap@@WDA@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WCI@EAAKXZ @ 0x1800468E0 (-AddRef@CCompressedSourceBitmap@@WCI@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WPA@EAAKXZ @ 0x1800468F0 (-AddRef@CCompressedSourceBitmap@@WPA@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WPI@EAAKXZ @ 0x180046900 (-AddRef@CCompressedSourceBitmap@@WPI@EAAKXZ.c)
 *     ?AddRef@CBitmap@@WBA@EAAKXZ @ 0x1800469D0 (-AddRef@CBitmap@@WBA@EAAKXZ.c)
 *     ?AddRef@CBitmapLock@@WEI@EAAKXZ @ 0x180046A60 (-AddRef@CBitmapLock@@WEI@EAAKXZ.c)
 *     ?AddRef@CBitmapLock@@WFA@EAAKXZ @ 0x180046A70 (-AddRef@CBitmapLock@@WFA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CCompoundBitmapLock::AddRef(CCompoundBitmapLock *this)
{
  return CMILCOMBase::InternalAddRef(this);
}
