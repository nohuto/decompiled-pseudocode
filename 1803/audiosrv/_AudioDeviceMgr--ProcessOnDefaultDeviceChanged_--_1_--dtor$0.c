/*
 * XREFs of _AudioDeviceMgr::ProcessOnDefaultDeviceChanged_::_1_::dtor$0 @ 0x180117018
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioDeviceMgr::ProcessOnDefaultDeviceChanged_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CComPtr<EndpointDevice>::~CComPtr<EndpointDevice>((EndpointDevice **)(a2 + 48));
}
