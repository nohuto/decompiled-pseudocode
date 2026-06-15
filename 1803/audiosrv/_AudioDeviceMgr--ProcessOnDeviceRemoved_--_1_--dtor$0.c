/*
 * XREFs of _AudioDeviceMgr::ProcessOnDeviceRemoved_::_1_::dtor$0 @ 0x1801171AD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioDeviceMgr::ProcessOnDeviceRemoved_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CComPtr<EndpointDevice>::~CComPtr<EndpointDevice>((EndpointDevice **)(a2 + 112));
}
