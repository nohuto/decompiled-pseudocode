/*
 * XREFs of _AudioDeviceMgr::AddWorkItemToQueue_::_1_::dtor$0 @ 0x1800E6BDC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioDeviceMgr::AddWorkItemToQueue_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::~CComCritSecLock<ATL::CComAutoCriticalSection>(a2 + 40);
}
