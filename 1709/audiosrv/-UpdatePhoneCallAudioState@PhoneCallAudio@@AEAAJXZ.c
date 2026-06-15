/*
 * XREFs of ?UpdatePhoneCallAudioState@PhoneCallAudio@@AEAAJXZ @ 0x1800C8F88
 * Callers:
 *     ?CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z @ 0x1800C7B7C (-CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z.c)
 *     ?EndSession@PhoneCallAudio@@UEAAJXZ @ 0x1800C7FE0 (-EndSession@PhoneCallAudio@@UEAAJXZ.c)
 *     ?OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ @ 0x1800C87AC (-OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ.c)
 *     ?SetRoutingPolicy@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x1800C8C50 (-SetRoutingPolicy@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x1800C8D70 (-StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?TimerCallback@PhoneCallEndTimer@@EEAAXPEAX@Z @ 0x1800C8EE0 (-TimerCallback@PhoneCallEndTimer@@EEAAXPEAX@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?GetPhoneCallAudioState@PhoneCallAudio@@AEAA?AW4_PhoneCallAudioState@@XZ @ 0x1800C8304 (-GetPhoneCallAudioState@PhoneCallAudio@@AEAA-AW4_PhoneCallAudioState@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::UpdatePhoneCallAudioState(PhoneCallAudio *this)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v4; // [rsp+30h] [rbp-18h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 128));
  *((_DWORD *)this + 22) = PhoneCallAudio::GetPhoneCallAudioState((__int64)this);
  if ( v4 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
