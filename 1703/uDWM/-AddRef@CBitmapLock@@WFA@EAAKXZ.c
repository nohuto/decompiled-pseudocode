/*
 * XREFs of ?AddRef@CBitmapLock@@WFA@EAAKXZ @ 0x18004E340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapLock::AddRef(__int64 a1)
{
  return CBitmap::AddRef((CMILCOMBase *)(a1 - 80));
}
