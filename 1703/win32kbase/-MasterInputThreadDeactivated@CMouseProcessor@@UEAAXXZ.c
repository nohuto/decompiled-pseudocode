/*
 * XREFs of ?MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ @ 0x1C0047520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMouseProcessor::MasterInputThreadDeactivated(CMouseProcessor *this)
{
  CMouseProcessor::MouseInterceptState::Disable((char *)this + 2752);
}
