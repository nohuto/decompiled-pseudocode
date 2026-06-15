/*
 * XREFs of _AudioDeviceMgr::Initialize_::_1_::dtor$0 @ 0x18006883A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioDeviceMgr::Initialize_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::~CComCritSecLock<ATL::CComAutoCriticalSection>(a2 + 56);
}
