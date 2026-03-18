/*
 * XREFs of ?EmitDeletionCommand@CSharedReadMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C007F580
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitDeletionHelper@CResourceMarshaler@DirectComposition@@IEAA_NIPEAPEAVCBatch@2@@Z @ 0x1C002A258 (-EmitDeletionHelper@CResourceMarshaler@DirectComposition@@IEAA_NIPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CSharedReadMarshaler::EmitDeletionCommand(
        DirectComposition::CSharedReadMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  return DirectComposition::CResourceMarshaler::EmitDeletionHelper(this, *((_DWORD *)this + 12), a2);
}
