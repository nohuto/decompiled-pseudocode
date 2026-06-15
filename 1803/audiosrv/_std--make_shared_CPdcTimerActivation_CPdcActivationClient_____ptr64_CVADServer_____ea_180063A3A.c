/*
 * XREFs of _std::make_shared_CPdcTimerActivation_CPdcActivationClient_____ptr64_CVADServer_____ptr64_&___ptr64__::_1_::dtor$5 @ 0x180063A3A
 * Callers:
 *     <none>
 * Callees:
 *     ?OnEndpointUnavailableForUse@CBaseStreamGroupProxy@@UEAAXPEBG@Z @ 0x180044230 (-OnEndpointUnavailableForUse@CBaseStreamGroupProxy@@UEAAXPEBG@Z.c)
 */

void __fastcall std::make_shared_CPdcTimerActivation_CPdcActivationClient_____ptr64_CVADServer_____ptr64_____ptr64__::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  CBaseStreamGroupProxy::OnEndpointUnavailableForUse(
    *(CBaseStreamGroupProxy **)(a2 + 104),
    (const unsigned __int16 *)(*(_QWORD *)(a2 + 80) + 16LL));
}
