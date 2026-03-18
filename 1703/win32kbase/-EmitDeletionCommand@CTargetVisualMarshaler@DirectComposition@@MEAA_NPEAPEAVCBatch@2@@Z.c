/*
 * XREFs of ?EmitDeletionCommand@CTargetVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000C390
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitRoot@CTargetVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000C2AC (-EmitRoot@CTargetVisualMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitDeletionHelper@CResourceMarshaler@DirectComposition@@IEAA_NIPEAPEAVCBatch@2@@Z @ 0x1C001E0FC (-EmitDeletionHelper@CResourceMarshaler@DirectComposition@@IEAA_NIPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CTargetVisualMarshaler::EmitDeletionCommand(
        DirectComposition::CTargetVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char result; // al

  result = DirectComposition::CTargetVisualMarshaler::EmitRoot(this, a2);
  if ( result )
    return DirectComposition::CResourceMarshaler::EmitDeletionHelper(this, *((_DWORD *)this + 12), a2);
  return result;
}
