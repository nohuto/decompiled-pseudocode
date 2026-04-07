/*
 * XREFs of ?AddRef@CBitmap@@WCA@EAAKXZ @ 0x18004E2B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::AddRef(__int64 a1)
{
  return CBitmap::AddRef((CMILCOMBase *)(a1 - 32));
}
