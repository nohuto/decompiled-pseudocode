/*
 * XREFs of _AudioDeviceMgr::WorkItemThreadProc_::_1_::dtor$1 @ 0x1800687F2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioDeviceMgr::WorkItemThreadProc_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::~CComCritSecLock<ATL::CComAutoCriticalSection>(a2 + 40);
}
