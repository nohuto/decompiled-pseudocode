/*
 * XREFs of ?AddRef@CCompositionSurfaceBitmap@@WEA@EAAKXZ @ 0x1800C5FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::AddRef(__int64 a1)
{
  return CMILCOMBase::InternalAddRef((CMILCOMBase *)(a1 - 64));
}
