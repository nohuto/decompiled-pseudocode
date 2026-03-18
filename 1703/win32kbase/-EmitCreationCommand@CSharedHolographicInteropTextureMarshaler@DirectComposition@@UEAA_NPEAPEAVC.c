/*
 * XREFs of ?EmitCreationCommand@CSharedHolographicInteropTextureMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014F300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CSharedHolographicInteropTextureMarshaler::EmitCreationCommand(
        DirectComposition::CSharedHolographicInteropTextureMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  return DirectComposition::CResourceMarshaler::EmitDuplicateHelper(
           (__int64)this,
           (__int64 *)a2,
           *(_DWORD *)(*((_QWORD *)this + 10) + 24LL));
}
