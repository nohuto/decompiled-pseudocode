/*
 * XREFs of ??1?$CAutoPtr@VPhoneCallEndTimer@@@ATL@@QEAA@XZ @ 0x1800C7940
 * Callers:
 *     _PhoneCallAudio::PhoneCallAudio_::_1_::dtor$3 @ 0x1800C78FF (_PhoneCallAudio--PhoneCallAudio_--_1_--dtor$3.c)
 *     _PhoneCallAudio::_PhoneCallAudio_::_1_::dtor$3 @ 0x1800C7A68 (_PhoneCallAudio--_PhoneCallAudio_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CAutoPtr<PhoneCallEndTimer>::~CAutoPtr<PhoneCallEndTimer>(__int64 a1)
{
  return ATL::CAutoPtr<PhoneCallEndTimer>::Free(a1);
}
