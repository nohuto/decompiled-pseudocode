/*
 * XREFs of _AudioDeviceMgr::AudioDeviceMgr_::_1_::dtor$4 @ 0x180068886
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioDeviceMgr::AudioDeviceMgr_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  ATL::CComPtr<EndpointDevice>::~CComPtr<EndpointDevice>((void *)(*(_QWORD *)(a2 + 64) + 72LL));
}
