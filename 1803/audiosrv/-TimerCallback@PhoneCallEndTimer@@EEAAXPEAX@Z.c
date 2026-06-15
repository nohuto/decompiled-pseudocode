/*
 * XREFs of ?TimerCallback@PhoneCallEndTimer@@EEAAXPEAX@Z @ 0x1800FB7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ @ 0x1800FACEC (-OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ.c)
 */

void __fastcall PhoneCallEndTimer::TimerCallback(PhoneCallEndTimer *this, PhoneCallAudio *a2)
{
  if ( a2 )
    PhoneCallAudio::OnPhoneCallEndTimeout(a2);
}
