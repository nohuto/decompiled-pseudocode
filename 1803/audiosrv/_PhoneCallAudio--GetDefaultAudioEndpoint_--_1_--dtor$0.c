/*
 * XREFs of _PhoneCallAudio::GetDefaultAudioEndpoint_::_1_::dtor$0 @ 0x18006AA30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PhoneCallAudio::GetDefaultAudioEndpoint_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::~CComCritSecLock<ATL::CComAutoCriticalSection>(a2 + 64);
}
