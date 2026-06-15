/*
 * XREFs of _CSharedStreamGroupProxy::OnEndpointUnavailableForUse_::_1_::dtor$9 @ 0x1800CA6EC
 * Callers:
 *     <none>
 * Callees:
 *     ?OnEndpointUnavailableForUse@CBaseStreamGroupProxy@@UEAAXPEBG@Z @ 0x180044230 (-OnEndpointUnavailableForUse@CBaseStreamGroupProxy@@UEAAXPEBG@Z.c)
 */

void __fastcall CSharedStreamGroupProxy::OnEndpointUnavailableForUse_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  CBaseStreamGroupProxy::OnEndpointUnavailableForUse(
    *(CBaseStreamGroupProxy **)(a2 + 80),
    (const unsigned __int16 *)(*(_QWORD *)(a2 + 64) + 16LL));
}
