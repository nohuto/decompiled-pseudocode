/*
 * XREFs of _PhoneCallAudio::SetCallState_::_1_::dtor$0 @ 0x1800C8B57
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PhoneCallAudio::SetCallState_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::~CComCritSecLock<ATL::CComAutoCriticalSection>(a2 + 40);
}
