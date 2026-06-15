/*
 * XREFs of ?GetState@CAudioSession@@UEAAJPEAW4_AudioSessionState@@@Z @ 0x180034320
 * Callers:
 *     ?GetState@CServerAudioSessionControl@@UEAAJPEAW4_AudioSessionState@@@Z @ 0x180004D20 (-GetState@CServerAudioSessionControl@@UEAAJPEAW4_AudioSessionState@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSession::GetState(enum _AudioSessionState *this, enum _AudioSessionState *a2)
{
  *a2 = this[102];
  return 0LL;
}
