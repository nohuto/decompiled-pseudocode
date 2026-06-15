/*
 * XREFs of _AudioDeviceMgr::FindEndpointDeviceInCollection_::_1_::dtor$1 @ 0x18011699E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioDeviceMgr::FindEndpointDeviceInCollection_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CComPtr<EndpointDevice>::~CComPtr<EndpointDevice>((EndpointDevice **)(a2 + 32));
}
