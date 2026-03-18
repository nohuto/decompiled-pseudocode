/*
 * XREFs of ?EmitUpdateCommands@CNotificationResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002B820
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002B834 (-EmitSetCallbackId@CNotificationResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CNotificationResourceMarshaler::EmitUpdateCommands(
        DirectComposition::CNotificationResourceMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  return DirectComposition::CNotificationResourceMarshaler::EmitSetCallbackId(this, a2);
}
