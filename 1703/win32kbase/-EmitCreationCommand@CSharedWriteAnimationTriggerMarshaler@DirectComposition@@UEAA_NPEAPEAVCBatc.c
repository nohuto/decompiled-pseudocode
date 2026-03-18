/*
 * XREFs of ?EmitCreationCommand@CSharedWriteAnimationTriggerMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0004A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
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
