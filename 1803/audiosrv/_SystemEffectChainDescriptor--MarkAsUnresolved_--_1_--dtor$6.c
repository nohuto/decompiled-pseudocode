/*
 * XREFs of _SystemEffectChainDescriptor::MarkAsUnresolved_::_1_::dtor$6 @ 0x180068021
 * Callers:
 *     <none>
 * Callees:
 *     ?OnEndpointUnavailableForUse@CBaseStreamGroupProxy@@UEAAXPEBG@Z @ 0x180044230 (-OnEndpointUnavailableForUse@CBaseStreamGroupProxy@@UEAAXPEBG@Z.c)
 */

void __fastcall SystemEffectChainDescriptor::MarkAsUnresolved_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  CBaseStreamGroupProxy::OnEndpointUnavailableForUse(
    *(CBaseStreamGroupProxy **)(a2 + 104),
    (const unsigned __int16 *)(*(_QWORD *)(a2 + 96) + 16LL));
}
