/*
 * XREFs of ?AddRef@CServerAudioSessionControl@@UEAAKXZ @ 0x18002F8E0
 * Callers:
 *     ?AddRef@CServerAudioSessionControl@@W7EAAKXZ @ 0x180058250 (-AddRef@CServerAudioSessionControl@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::AddRef(CServerAudioSessionControl *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}
