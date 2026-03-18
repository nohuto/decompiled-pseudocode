/*
 * XREFs of ?AddRef@CMILBrushBitmap@@WDA@EAAKXZ @ 0x1800DE710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILBrushBitmap::AddRef(__int64 a1)
{
  return CMILCOMBase::InternalAddRef((CMILCOMBase *)(a1 - 48));
}
