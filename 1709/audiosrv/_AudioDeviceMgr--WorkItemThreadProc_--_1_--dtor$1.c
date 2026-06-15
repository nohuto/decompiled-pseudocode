/*
 * XREFs of _AudioDeviceMgr::WorkItemThreadProc_::_1_::dtor$1 @ 0x1800E825D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioDeviceMgr::WorkItemThreadProc_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::~CComCritSecLock<ATL::CComAutoCriticalSection>(a2 + 40);
}
