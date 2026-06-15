/*
 * XREFs of _PhoneCallAudio::PhoneCallAudio_::_1_::dtor$3 @ 0x1800686F8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PhoneCallAudio::PhoneCallAudio_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<PhoneCallEndTimer>::~CAutoPtr<PhoneCallEndTimer>(*(_QWORD *)(a2 + 80) + 72LL);
}
