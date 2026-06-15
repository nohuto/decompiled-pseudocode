/*
 * XREFs of ?DestroyStream@CSystemAudioDeviceExclusive@@WBI@EAAJ_K@Z @ 0x14001EF00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 CSystemAudioDeviceExclusive::DestroyStream()
{
  return CSystemAudioDeviceOffloadGraph::UpdateRegistry();
}
