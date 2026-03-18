/*
 * XREFs of ?EmitCreationCommand@CCrossChannelParentVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0093410
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle@@@Z @ 0x1C002A0F4 (-EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle.c)
 */

char __fastcall DirectComposition::CCrossChannelParentVisualMarshaler::EmitCreationCommand(
        DirectComposition::CCrossChannelParentVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  return DirectComposition::CResourceMarshaler::EmitDuplicateHelper(
           (__int64)this,
           a2,
           *(_DWORD *)(*((_QWORD *)this + 30) + 8LL));
}
