/*
 * XREFs of ?IsInCall@PhoneCallAudio@@AEAAHXZ @ 0x1800FAA14
 * Callers:
 *     ?EndSession@PhoneCallAudio@@UEAAJXZ @ 0x1800FA4B0 (-EndSession@PhoneCallAudio@@UEAAJXZ.c)
 *     ?OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ @ 0x1800FACEC (-OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ.c)
 *     ?OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ @ 0x1800FADB8 (-OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ.c)
 *     ?SetRoutingPolicy@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x1800FB530 (-SetRoutingPolicy@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 * Callees:
 *     ?GetPhoneCallAudioState@PhoneCallAudio@@AEAA?AW4_PhoneCallAudioState@@XZ @ 0x18005595C (-GetPhoneCallAudioState@PhoneCallAudio@@AEAA-AW4_PhoneCallAudioState@@XZ.c)
 */

_BOOL8 __fastcall PhoneCallAudio::IsInCall(PhoneCallAudio *this)
{
  return (unsigned int)PhoneCallAudio::GetPhoneCallAudioState((__int64)this) == 1;
}
