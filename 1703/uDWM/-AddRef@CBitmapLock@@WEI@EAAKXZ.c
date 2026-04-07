/*
 * XREFs of ?AddRef@CBitmapLock@@WEI@EAAKXZ @ 0x18004E330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapLock::AddRef(__int64 a1)
{
  return CBitmap::AddRef((CMILCOMBase *)(a1 - 72));
}
