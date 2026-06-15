/*
 * XREFs of _AudioDeviceMgr::AddEndpointDevice_::_1_::dtor$1 @ 0x180068822
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioDeviceMgr::AddEndpointDevice_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CComPtr<EndpointDevice>::~CComPtr<EndpointDevice>((void *)(a2 + 40));
}
