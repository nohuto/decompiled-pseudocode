/*
 * XREFs of ?GetMute@CServerAudioSessionControl@@UEAAJPEAH@Z @ 0x180016DE0
 * Callers:
 *     AudioSessionGetMute @ 0x1800317E0 (AudioSessionGetMute.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::GetMute(CServerAudioSessionControl *this, int *a2)
{
  CAudioSession *v2; // rcx
  __int64 (__fastcall *v3)(CAudioSession *__hidden, int *); // rax

  v2 = (CAudioSession *)*((_QWORD *)this + 9);
  v3 = *(__int64 (__fastcall **)(CAudioSession *__hidden, int *))(*(_QWORD *)v2 + 320LL);
  if ( v3 == CAudioSession::GetMute )
    return CAudioSession::GetMute(v2, a2);
  else
    return v3(v2, a2);
}
