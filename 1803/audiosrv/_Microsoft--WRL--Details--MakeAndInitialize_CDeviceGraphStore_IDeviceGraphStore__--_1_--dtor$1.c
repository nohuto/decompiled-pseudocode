/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_CDeviceGraphStore_IDeviceGraphStore__::_1_::dtor$1 @ 0x18006B10C
 * Callers:
 *     <none>
 * Callees:
 *     ?OnEndpointUnavailableForUse@CBaseStreamGroupProxy@@UEAAXPEBG@Z @ 0x180044230 (-OnEndpointUnavailableForUse@CBaseStreamGroupProxy@@UEAAXPEBG@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_CDeviceGraphStore_IDeviceGraphStore__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  CBaseStreamGroupProxy::OnEndpointUnavailableForUse(
    *(CBaseStreamGroupProxy **)(a2 + 80),
    *(const unsigned __int16 **)(a2 + 72));
}
