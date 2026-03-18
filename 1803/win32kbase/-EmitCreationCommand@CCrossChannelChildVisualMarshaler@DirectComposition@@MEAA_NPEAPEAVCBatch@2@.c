/*
 * XREFs of ?EmitCreationCommand@CCrossChannelChildVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0001010
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle@@@Z @ 0x1C001932C (-EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle.c)
 */

__int64 __fastcall DirectComposition::CCrossChannelChildVisualMarshaler::EmitCreationCommand(
        DirectComposition::CCrossChannelChildVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  return DirectComposition::CResourceMarshaler::EmitDuplicateHelper(this, a2, *((unsigned int *)this + 70));
}
