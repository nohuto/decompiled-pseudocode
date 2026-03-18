/*
 * XREFs of ?EmitUpdateCommands@CManipulationTransformMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0021E50
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetTracingCookie@CManipulationTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0021F80 (-EmitSetTracingCookie@CManipulationTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@.c)
 *     ?EmitSetComponents@CManipulationTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0021FF4 (-EmitSetComponents@CManipulationTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CManipulationTransformMarshaler::EmitUpdateCommands(
        DirectComposition::CManipulationTransformMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CManipulationTransformMarshaler::EmitSetComponents(this, a2) )
    return DirectComposition::CManipulationTransformMarshaler::EmitSetTracingCookie(this, a2);
  return v4;
}
