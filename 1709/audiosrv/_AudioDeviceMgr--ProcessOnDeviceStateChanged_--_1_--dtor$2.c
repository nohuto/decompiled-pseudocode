/*
 * XREFs of _AudioDeviceMgr::ProcessOnDeviceStateChanged_::_1_::dtor$2 @ 0x1800E7E9D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioDeviceMgr::ProcessOnDeviceStateChanged_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::~CComCritSecLock<ATL::CComAutoCriticalSection>(a2 + 72);
}
