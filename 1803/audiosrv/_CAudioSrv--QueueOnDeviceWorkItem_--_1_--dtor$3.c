/*
 * XREFs of _CAudioSrv::QueueOnDeviceWorkItem_::_1_::dtor$3 @ 0x1800685B5
 * Callers:
 *     <none>
 * Callees:
 *     ?OnEndpointUnavailableForUse@CBaseStreamGroupProxy@@UEAAXPEBG@Z @ 0x180044230 (-OnEndpointUnavailableForUse@CBaseStreamGroupProxy@@UEAAXPEBG@Z.c)
 */

void __fastcall CAudioSrv::QueueOnDeviceWorkItem_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  CBaseStreamGroupProxy::OnEndpointUnavailableForUse(
    *(CBaseStreamGroupProxy **)(a2 + 56),
    *(const unsigned __int16 **)(a2 + 152));
}
