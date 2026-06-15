/*
 * XREFs of ?Release@CPerEndpointVolumeAudioSession@@EEAAKXZ @ 0x1800AC890
 * Callers:
 *     ?Release@CPerEndpointVolumeAudioSession@@G7EAAKXZ @ 0x180065960 (-Release@CPerEndpointVolumeAudioSession@@G7EAAKXZ.c)
 *     ?Release@CPerEndpointVolumeAudioSession@@GBA@EAAKXZ @ 0x180065970 (-Release@CPerEndpointVolumeAudioSession@@GBA@EAAKXZ.c)
 *     ?Release@CPerEndpointVolumeAudioSession@@GBI@EAAKXZ @ 0x180065980 (-Release@CPerEndpointVolumeAudioSession@@GBI@EAAKXZ.c)
 *     ?Release@CPerEndpointVolumeAudioSession@@GCA@EAAKXZ @ 0x180065990 (-Release@CPerEndpointVolumeAudioSession@@GCA@EAAKXZ.c)
 *     ?Release@CPerEndpointVolumeAudioSession@@GDNI@EAAKXZ @ 0x1800659A0 (-Release@CPerEndpointVolumeAudioSession@@GDNI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::Release(CPerEndpointVolumeAudioSession *this)
{
  return CUnknown::Release((CPerEndpointVolumeAudioSession *)((char *)this + 32));
}
