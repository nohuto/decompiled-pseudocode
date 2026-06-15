/*
 * XREFs of ?OnDGProcessTerminated@CAudioSrv@@EEAAX_N@Z @ 0x18002C730
 * Callers:
 *     ?OnADGInactivityTimerFired@CAudioDGProcess@@AEAAXXZ @ 0x18001D9D0 (-OnADGInactivityTimerFired@CAudioDGProcess@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioSrv::OnDGProcessTerminated(CAudioSrv *this, bool a2)
{
  VAD_AudiosrvAudioDGProcessTerminated(a2);
}
