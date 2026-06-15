/*
 * XREFs of ?SetDuckingPreference@CServerAudioSessionControl@@UEAAJH@Z @ 0x1800AF700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::SetDuckingPreference(CAudioSession **this, int a2)
{
  return CAudioSession::SetDuckingOptOutPreference(this[9], a2 != 0);
}
