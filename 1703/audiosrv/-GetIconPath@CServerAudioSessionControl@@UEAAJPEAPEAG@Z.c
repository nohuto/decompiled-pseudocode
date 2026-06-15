/*
 * XREFs of ?GetIconPath@CServerAudioSessionControl@@UEAAJPEAPEAG@Z @ 0x180091050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::GetIconPath(CServerAudioSessionControl *this, unsigned __int16 **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 **))(**((_QWORD **)this + 9) + 232LL))(
           *((_QWORD *)this + 9),
           a2);
}
