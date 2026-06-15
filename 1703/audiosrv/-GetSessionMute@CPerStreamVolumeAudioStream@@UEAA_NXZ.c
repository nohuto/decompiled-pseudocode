/*
 * XREFs of ?GetSessionMute@CPerStreamVolumeAudioStream@@UEAA_NXZ @ 0x18002F870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CPerStreamVolumeAudioStream::GetSessionMute(CPerStreamVolumeAudioStream *this)
{
  return *((_BYTE *)this + 568);
}
