/*
 * XREFs of ?OnDGProcessTerminated@CAudioSrv@@EEAAX_N@Z @ 0x180008070
 * Callers:
 *     ?OnADGInactivityTimerFired@CAudioDGProcess@@AEAAXXZ @ 0x180007C38 (-OnADGInactivityTimerFired@CAudioDGProcess@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioSrv::OnDGProcessTerminated(CAudioSrv *this, bool a2)
{
  VAD_AudiosrvAudioDGProcessTerminated(a2);
}
