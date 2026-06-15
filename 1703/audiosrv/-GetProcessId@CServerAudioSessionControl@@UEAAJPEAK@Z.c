/*
 * XREFs of ?GetProcessId@CServerAudioSessionControl@@UEAAJPEAK@Z @ 0x180091160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::GetProcessId(CServerAudioSessionControl *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 9) + 128LL))(
           *((_QWORD *)this + 9),
           a2);
}
