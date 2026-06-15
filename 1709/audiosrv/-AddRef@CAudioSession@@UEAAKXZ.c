/*
 * XREFs of ?AddRef@CAudioSession@@UEAAKXZ @ 0x180031D10
 * Callers:
 *     ?AddRef@CPerEndpointVolumeAudioSession@@G7EAAKXZ @ 0x180036C20 (-AddRef@CPerEndpointVolumeAudioSession@@G7EAAKXZ.c)
 *     ?AddRef@CAudioSession@@WBA@EAAKXZ @ 0x180036C30 (-AddRef@CAudioSession@@WBA@EAAKXZ.c)
 *     ?AddRef@CAudioSession@@WBI@EAAKXZ @ 0x180036C40 (-AddRef@CAudioSession@@WBI@EAAKXZ.c)
 *     ?AddRef@CAudioSession@@WCA@EAAKXZ @ 0x180036C50 (-AddRef@CAudioSession@@WCA@EAAKXZ.c)
 *     ?AddRef@CPerEndpointVolumeAudioSession@@GEBA@EAAKXZ @ 0x180036C60 (-AddRef@CPerEndpointVolumeAudioSession@@GEBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSession::AddRef(CAudioSession *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 10);
}
