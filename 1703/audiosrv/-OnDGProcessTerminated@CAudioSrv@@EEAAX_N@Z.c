/*
 * XREFs of ?OnDGProcessTerminated@CAudioSrv@@EEAAX_N@Z @ 0x180023F30
 * Callers:
 *     ?OnADGInactivityTimerFired@CAudioDGProcess@@AEAAXXZ @ 0x18001726C (-OnADGInactivityTimerFired@CAudioDGProcess@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioSrv::OnDGProcessTerminated(CAudioSrv *this, bool a2)
{
  VAD_AudiosrvAudioDGProcessTerminated(a2);
}
