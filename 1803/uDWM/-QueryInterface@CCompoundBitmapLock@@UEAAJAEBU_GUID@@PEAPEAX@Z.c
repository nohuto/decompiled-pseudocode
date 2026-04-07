/*
 * XREFs of ?QueryInterface@CCompoundBitmapLock@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180045EF0
 * Callers:
 *     ?QueryInterface@CBitmap@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004B4A0 (-QueryInterface@CBitmap@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompressedSourceBitmap@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004B4B0 (-QueryInterface@CCompressedSourceBitmap@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompressedSourceBitmap@@WPA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004B540 (-QueryInterface@CCompressedSourceBitmap@@WPA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompressedSourceBitmap@@WPI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004B550 (-QueryInterface@CCompressedSourceBitmap@@WPI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompressedSourceBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004B5D0 (-QueryInterface@CCompressedSourceBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmap@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004B5E0 (-QueryInterface@CBitmap@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompressedSourceBitmap@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004B5F0 (-QueryInterface@CCompressedSourceBitmap@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmapLock@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004B6B0 (-QueryInterface@CBitmapLock@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmapLock@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004B6C0 (-QueryInterface@CBitmapLock@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompoundBitmapLock::QueryInterface(CCompoundBitmapLock *this, const struct _GUID *a2, void **a3)
{
  return CMILCOMBase::InternalQueryInterface(this, a2, a3);
}
