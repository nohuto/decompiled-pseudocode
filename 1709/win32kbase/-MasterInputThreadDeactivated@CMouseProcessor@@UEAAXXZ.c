/*
 * XREFs of ?MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ @ 0x1C0016440
 * Callers:
 *     <none>
 * Callees:
 *     ?Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z @ 0x1C008B9E4 (-Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z.c)
 */

void __fastcall CMouseProcessor::MasterInputThreadDeactivated(CMouseProcessor *this)
{
  CMouseProcessor::MouseInterceptState::Disable((char *)this + 2904);
}
