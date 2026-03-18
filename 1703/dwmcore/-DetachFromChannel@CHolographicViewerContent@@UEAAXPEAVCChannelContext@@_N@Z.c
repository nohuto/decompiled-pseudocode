/*
 * XREFs of ?DetachFromChannel@CHolographicViewerContent@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801A5180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHolographicViewerContent::DetachFromChannel(
        struct CHolographicManager ***this,
        struct CChannelContext *a2)
{
  CComposition::GetHolographicManager(this[2]);
}
