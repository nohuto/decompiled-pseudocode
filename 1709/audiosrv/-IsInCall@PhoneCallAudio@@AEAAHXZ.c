/*
 * XREFs of ?IsInCall@PhoneCallAudio@@AEAAHXZ @ 0x1800C84A4
 * Callers:
 *     ?EndSession@PhoneCallAudio@@UEAAJXZ @ 0x1800C7FE0 (-EndSession@PhoneCallAudio@@UEAAJXZ.c)
 *     ?OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ @ 0x1800C87AC (-OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ.c)
 *     ?SetRoutingPolicy@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x1800C8C50 (-SetRoutingPolicy@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?TimerCallback@PhoneCallEndTimer@@EEAAXPEAX@Z @ 0x1800C8EE0 (-TimerCallback@PhoneCallEndTimer@@EEAAXPEAX@Z.c)
 * Callees:
 *     ?GetPhoneCallAudioState@PhoneCallAudio@@AEAA?AW4_PhoneCallAudioState@@XZ @ 0x1800C8304 (-GetPhoneCallAudioState@PhoneCallAudio@@AEAA-AW4_PhoneCallAudioState@@XZ.c)
 */

_BOOL8 __fastcall PhoneCallAudio::IsInCall(PhoneCallAudio *this)
{
  return (unsigned int)PhoneCallAudio::GetPhoneCallAudioState((__int64)this) == 1;
}
