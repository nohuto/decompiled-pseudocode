/*
 * XREFs of ?AddRef@CWICBitmapWrapper@@WCI@EAAKXZ @ 0x18004E2C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWICBitmapWrapper::AddRef(__int64 a1)
{
  return CBitmap::AddRef((CMILCOMBase *)(a1 - 40));
}
