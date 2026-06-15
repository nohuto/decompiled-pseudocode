/*
 * XREFs of ?AddRef@CPerEndpointVolumeAudioSession@@GEBA@EAAKXZ @ 0x180036C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::AddRef(__int64 a1)
{
  return CAudioSession::AddRef((CAudioSession *)(a1 - 1040));
}
