/*
 * XREFs of ?EmitCreationCommand@CSharedManipulationTransformMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0081D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CSharedManipulationTransformMarshaler::EmitCreationCommand(
        DirectComposition::CSharedManipulationTransformMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  return DirectComposition::CResourceMarshaler::EmitDuplicateHelper(
           (__int64)this,
           (__int64 *)a2,
           *(_DWORD *)(*((_QWORD *)this + 14) + 24LL));
}
