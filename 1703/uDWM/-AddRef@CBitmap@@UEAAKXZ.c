/*
 * XREFs of ?AddRef@CBitmap@@UEAAKXZ @ 0x18003ED50
 * Callers:
 *     ?AddRef@CWICBitmapWrapper@@WBI@EAAKXZ @ 0x18004E060 (-AddRef@CWICBitmapWrapper@@WBI@EAAKXZ.c)
 *     ?AddRef@CBitmap@@WBA@EAAKXZ @ 0x18004E2A0 (-AddRef@CBitmap@@WBA@EAAKXZ.c)
 *     ?AddRef@CBitmap@@WCA@EAAKXZ @ 0x18004E2B0 (-AddRef@CBitmap@@WCA@EAAKXZ.c)
 *     ?AddRef@CWICBitmapWrapper@@WCI@EAAKXZ @ 0x18004E2C0 (-AddRef@CWICBitmapWrapper@@WCI@EAAKXZ.c)
 *     ?AddRef@CBitmap@@WDA@EAAKXZ @ 0x18004E2D0 (-AddRef@CBitmap@@WDA@EAAKXZ.c)
 *     ?AddRef@CBitmapLock@@WEI@EAAKXZ @ 0x18004E330 (-AddRef@CBitmapLock@@WEI@EAAKXZ.c)
 *     ?AddRef@CBitmapLock@@WFA@EAAKXZ @ 0x18004E340 (-AddRef@CBitmapLock@@WFA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CBitmap::AddRef(CMILCOMBase *this)
{
  return CMILCOMBase::InternalAddRef(this);
}
