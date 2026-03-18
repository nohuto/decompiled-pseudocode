/*
 * XREFs of ?EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0142020
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002B834 (-EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitEdgyConfiguration@CManipulationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0141CBC (-EmitEdgyConfiguration@CManipulationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitInjections@CManipulationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0141D60 (-EmitInjections@CManipulationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSettings@CManipulationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0141E4C (-EmitSettings@CManipulationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSourceModifiers@CManipulationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0141F18 (-EmitSourceModifiers@CManipulationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CManipulationMarshaler::EmitUpdateCommands(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CNotificationResourceMarshaler::EmitSetCallbackId(this, a2)
    && DirectComposition::CManipulationMarshaler::EmitSettings(this, a2)
    && DirectComposition::CManipulationMarshaler::EmitInjections(this, a2)
    && DirectComposition::CManipulationMarshaler::EmitSourceModifiers(this, a2) )
  {
    return DirectComposition::CManipulationMarshaler::EmitEdgyConfiguration(this, a2) != 0;
  }
  return v4;
}
