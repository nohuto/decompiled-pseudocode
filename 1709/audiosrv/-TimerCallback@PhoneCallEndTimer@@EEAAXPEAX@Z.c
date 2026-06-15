/*
 * XREFs of ?TimerCallback@PhoneCallEndTimer@@EEAAXPEAX@Z @ 0x1800C8EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInCall@PhoneCallAudio@@AEAAHXZ @ 0x1800C84A4 (-IsInCall@PhoneCallAudio@@AEAAHXZ.c)
 *     ?UpdatePhoneCallAudioState@PhoneCallAudio@@AEAAJXZ @ 0x1800C8F88 (-UpdatePhoneCallAudioState@PhoneCallAudio@@AEAAJXZ.c)
 */

void __fastcall PhoneCallEndTimer::TimerCallback(PhoneCallEndTimer *this, PhoneCallAudio *a2)
{
  if ( a2 )
  {
    if ( (int)PhoneCallAudio::UpdatePhoneCallAudioState(a2) >= 0 )
      PhoneCallAudio::IsInCall(a2);
  }
}
