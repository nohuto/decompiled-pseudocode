/*
 * XREFs of ?EmitDeletionCommand@CCrossChannelChildVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C008C660
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitRemoveAllChildren@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0016C50 (-EmitRemoveAllChildren@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitDeletionCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001E0C0 (-EmitDeletionCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CCrossChannelChildVisualMarshaler::EmitDeletionCommand(
        DirectComposition::CCrossChannelChildVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CVisualMarshaler::EmitRemoveAllChildren(this, a2) )
    return DirectComposition::CResourceMarshaler::EmitDeletionCommand(this, a2);
  return v4;
}
