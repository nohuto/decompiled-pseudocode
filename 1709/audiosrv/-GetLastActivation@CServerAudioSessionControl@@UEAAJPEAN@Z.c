/*
 * XREFs of ?GetLastActivation@CServerAudioSessionControl@@UEAAJPEAN@Z @ 0x180077660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::GetLastActivation(CServerAudioSessionControl *this, double *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, double *))(**((_QWORD **)this + 9) + 136LL))(*((_QWORD *)this + 9), a2);
}
