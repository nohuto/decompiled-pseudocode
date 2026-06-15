/*
 * XREFs of ?GetMute@CServerAudioSessionControl@@UEAAJPEAH@Z @ 0x180020BF0
 * Callers:
 *     AudioSessionGetMute @ 0x180024430 (AudioSessionGetMute.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::GetMute(CServerAudioSessionControl *this, int *a2)
{
  CAudioSession *v2; // rcx
  __int64 (__fastcall *v3)(CAudioSession *, int *); // rax

  v2 = (CAudioSession *)*((_QWORD *)this + 9);
  v3 = *(__int64 (__fastcall **)(CAudioSession *, int *))(*(_QWORD *)v2 + 328LL);
  if ( v3 == CAudioSession::GetMute )
    return CAudioSession::GetMute(v2, a2);
  else
    return v3(v2, a2);
}
