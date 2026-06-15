/*
 * XREFs of ?AddRef@CAudioSession@@UEAAKXZ @ 0x18002F8F0
 * Callers:
 *     ?AddRef@CPerEndpointVolumeAudioSession@@G7EAAKXZ @ 0x1800580D0 (-AddRef@CPerEndpointVolumeAudioSession@@G7EAAKXZ.c)
 *     ?AddRef@CAudioSession@@WBA@EAAKXZ @ 0x1800580E0 (-AddRef@CAudioSession@@WBA@EAAKXZ.c)
 *     ?AddRef@CAudioSession@@WBI@EAAKXZ @ 0x1800580F0 (-AddRef@CAudioSession@@WBI@EAAKXZ.c)
 *     ?AddRef@CAudioSession@@WCA@EAAKXZ @ 0x180058100 (-AddRef@CAudioSession@@WCA@EAAKXZ.c)
 *     ?AddRef@CPerEndpointVolumeAudioSession@@GECA@EAAKXZ @ 0x180058110 (-AddRef@CPerEndpointVolumeAudioSession@@GECA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSession::AddRef(CAudioSession *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 10);
}
