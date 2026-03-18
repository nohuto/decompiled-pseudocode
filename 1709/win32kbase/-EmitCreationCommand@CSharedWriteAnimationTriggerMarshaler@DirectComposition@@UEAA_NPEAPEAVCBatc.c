/*
 * XREFs of ?EmitCreationCommand@CSharedWriteAnimationTriggerMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00048A0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle@@@Z @ 0x1C002A0F4 (-EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle.c)
 */

__int64 __fastcall DirectComposition::CSharedWriteAnimationTriggerMarshaler::EmitCreationCommand(
        DirectComposition::CSharedWriteAnimationTriggerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  return DirectComposition::CResourceMarshaler::EmitDuplicateHelper(
           this,
           a2,
           *(unsigned int *)(*((_QWORD *)this + 6) + 24LL));
}
