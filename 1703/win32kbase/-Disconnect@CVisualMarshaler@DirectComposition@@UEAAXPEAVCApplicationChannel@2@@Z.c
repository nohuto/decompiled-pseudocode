/*
 * XREFs of ?Disconnect@CVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0017D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall DirectComposition::CVisualMarshaler::Disconnect(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CVisualMarshaler::DiscardPendingChildRemoves(this, a2);
}
