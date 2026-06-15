/*
 * XREFs of ?IsCaptureStream@CAudioStream@@UEAAHXZ @ 0x180019DF0
 * Callers:
 *     ?GetPolicyVolumeForStream@CAudioSession@@IEAAMPEAUSessionPolicyGains@@PEAVCAudioStream@@@Z @ 0x1800023CC (-GetPolicyVolumeForStream@CAudioSession@@IEAAMPEAUSessionPolicyGains@@PEAVCAudioStream@@@Z.c)
 *     ?SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z @ 0x180019E70 (-SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x18001D7F0 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CAudioStream::IsCaptureStream(CAudioStream *this)
{
  return (unsigned int)(*((_DWORD *)this + 133) - 1) <= 1;
}
