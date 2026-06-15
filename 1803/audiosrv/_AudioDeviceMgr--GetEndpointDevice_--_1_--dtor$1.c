/*
 * XREFs of _AudioDeviceMgr::GetEndpointDevice_::_1_::dtor$1 @ 0x180116CA6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioDeviceMgr::GetEndpointDevice_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::~CComCritSecLock<ATL::CComAutoCriticalSection>(a2 + 40);
}
