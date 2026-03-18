/*
 * XREFs of ?EmitDeletionCommand@CCrossChannelChildVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01574A0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitDeletionCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00193D0 (-EmitDeletionCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitRemoveAllChildren@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C009F740 (-EmitRemoveAllChildren@CVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CCrossChannelChildVisualMarshaler::EmitDeletionCommand(
        DirectComposition::CCrossChannelChildVisualMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CVisualMarshaler::EmitRemoveAllChildren(this, a2) )
    return DirectComposition::CResourceMarshaler::EmitDeletionCommand(this, a2) != 0;
  return v4;
}
