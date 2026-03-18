/*
 * XREFs of ?ApplyState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180174700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CColorSpaceLayer::ApplyState(CColorSpaceLayer *this, struct CDrawingContext *a2)
{
  *((_BYTE *)this + 112) = *((_BYTE *)a2 + 6830);
  *((_BYTE *)a2 + 6830) = 0;
  return CExternalLayer::ApplyState(this, a2);
}
