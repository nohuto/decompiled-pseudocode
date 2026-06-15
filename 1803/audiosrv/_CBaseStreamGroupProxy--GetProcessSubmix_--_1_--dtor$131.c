/*
 * XREFs of _CBaseStreamGroupProxy::GetProcessSubmix_::_1_::dtor$131 @ 0x180069395
 * Callers:
 *     <none>
 * Callees:
 *     ?OnEndpointUnavailableForUse@CBaseStreamGroupProxy@@UEAAXPEBG@Z @ 0x180044230 (-OnEndpointUnavailableForUse@CBaseStreamGroupProxy@@UEAAXPEBG@Z.c)
 */

void __fastcall CBaseStreamGroupProxy::GetProcessSubmix_::_1_::dtor_131(__int64 a1, __int64 a2)
{
  CBaseStreamGroupProxy::OnEndpointUnavailableForUse(
    *(CBaseStreamGroupProxy **)(a2 + 112),
    (const unsigned __int16 *)(*(_QWORD *)(a2 + 120) + 16LL));
}
