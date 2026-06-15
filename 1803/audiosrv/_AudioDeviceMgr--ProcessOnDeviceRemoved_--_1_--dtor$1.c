/*
 * XREFs of _AudioDeviceMgr::ProcessOnDeviceRemoved_::_1_::dtor$1 @ 0x1801171B9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioDeviceMgr::ProcessOnDeviceRemoved_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CComPtr<EndpointDevice>::~CComPtr<EndpointDevice>((EndpointDevice **)(a2 + 120));
}
