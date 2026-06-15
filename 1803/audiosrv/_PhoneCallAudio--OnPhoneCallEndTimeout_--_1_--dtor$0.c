/*
 * XREFs of _PhoneCallAudio::OnPhoneCallEndTimeout_::_1_::dtor$0 @ 0x1800FADAA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PhoneCallAudio::OnPhoneCallEndTimeout_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::~CComCritSecLock<ATL::CComAutoCriticalSection>(a2 + 40);
}
