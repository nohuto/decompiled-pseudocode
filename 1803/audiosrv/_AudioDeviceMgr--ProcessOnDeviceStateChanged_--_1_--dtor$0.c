/*
 * XREFs of _AudioDeviceMgr::ProcessOnDeviceStateChanged_::_1_::dtor$0 @ 0x1801172D5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioDeviceMgr::ProcessOnDeviceStateChanged_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CComPtr<EndpointDevice>::~CComPtr<EndpointDevice>((EndpointDevice **)(a2 + 32));
}
