/*
 * XREFs of ?EmitDeletionCommand@CVisualTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00019E0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitRoot@CVisualTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00018FC (-EmitRoot@CVisualTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitDeletionHelper@CResourceMarshaler@DirectComposition@@IEAA_NIPEAPEAVCBatch@2@@Z @ 0x1C000D6D0 (-EmitDeletionHelper@CResourceMarshaler@DirectComposition@@IEAA_NIPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CVisualTargetMarshaler::EmitDeletionCommand(
        DirectComposition::CVisualTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char result; // al

  result = DirectComposition::CVisualTargetMarshaler::EmitRoot(this, a2);
  if ( result )
    return DirectComposition::CResourceMarshaler::EmitDeletionHelper(this, *((_DWORD *)this + 12), a2);
  return result;
}
