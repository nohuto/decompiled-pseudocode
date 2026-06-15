/*
 * XREFs of ?UpdatePhoneCallAudioState@PhoneCallAudio@@AEAAJXZ @ 0x1800559FC
 * Callers:
 *     ?Initialize@PhoneCallAudio@@AEAAJXZ @ 0x180055AF8 (-Initialize@PhoneCallAudio@@AEAAJXZ.c)
 *     ?EndSession@PhoneCallAudio@@UEAAJXZ @ 0x1800FA4B0 (-EndSession@PhoneCallAudio@@UEAAJXZ.c)
 *     ?OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ @ 0x1800FACEC (-OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ.c)
 *     ?OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ @ 0x1800FADB8 (-OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ.c)
 *     ?SetRoutingPolicy@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x1800FB530 (-SetRoutingPolicy@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x1800FB660 (-StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 * Callees:
 *     ?GetPhoneCallAudioState@PhoneCallAudio@@AEAA?AW4_PhoneCallAudioState@@XZ @ 0x18005595C (-GetPhoneCallAudioState@PhoneCallAudio@@AEAA-AW4_PhoneCallAudioState@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::UpdatePhoneCallAudioState(PhoneCallAudio *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 208);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 208));
  *((_DWORD *)this + 24) = PhoneCallAudio::GetPhoneCallAudioState((__int64)this);
  LeaveCriticalSection(v2);
  return 0LL;
}
