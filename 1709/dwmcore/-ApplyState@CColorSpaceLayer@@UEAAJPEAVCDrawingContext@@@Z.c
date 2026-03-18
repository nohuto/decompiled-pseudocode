/*
 * XREFs of ?ApplyState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18014B890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CColorSpaceLayer::ApplyState(CExternalLayer *this, struct CDrawingContext *a2)
{
  *((_BYTE *)this + 112) = *((_BYTE *)a2 + 6830);
  *((_BYTE *)a2 + 6830) = 0;
  return CExternalLayer::ApplyState(this, a2);
}
