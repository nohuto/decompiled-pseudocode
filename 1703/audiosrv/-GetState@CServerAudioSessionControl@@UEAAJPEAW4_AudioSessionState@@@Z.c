/*
 * XREFs of ?GetState@CServerAudioSessionControl@@UEAAJPEAW4_AudioSessionState@@@Z @ 0x180020E20
 * Callers:
 *     AudioSessionGetState @ 0x180023E30 (AudioSessionGetState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::GetState(CServerAudioSessionControl *this, enum _AudioSessionState *a2)
{
  enum _AudioSessionState *v2; // rcx
  __int64 (__fastcall *v3)(enum _AudioSessionState *, enum _AudioSessionState *); // rax

  v2 = (enum _AudioSessionState *)*((_QWORD *)this + 9);
  v3 = *(__int64 (__fastcall **)(enum _AudioSessionState *, enum _AudioSessionState *))(*(_QWORD *)v2 + 104LL);
  if ( v3 == CAudioSession::GetState )
    return CAudioSession::GetState(v2, a2);
  else
    return v3(v2, a2);
}
