/*
 * XREFs of _PhoneCallAudio::StartSession_::_1_::dtor$1 @ 0x1800C8EC9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PhoneCallAudio::StartSession_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::~CComCritSecLock<ATL::CComAutoCriticalSection>(a2 + 40);
}
