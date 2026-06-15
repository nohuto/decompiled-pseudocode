/*
 * XREFs of ?UpdateAudioVolume@CPerStreamVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J4@Z @ 0x18002D020
 * Callers:
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180018810 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPerStreamVolumeAudioSession::UpdateAudioVolume(
        __int64 a1,
        int a2,
        bool a3,
        struct SessionPolicyGains *a4,
        bool a5,
        float a6,
        unsigned int a7,
        float *a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rax

  v10 = a9;
  if ( a9 <= a10 )
    v10 = a10;
  return CAudioSession::SetVolumeAllStreams(a1, a2, a3, a4, a5, a6, a7, a8, v10);
}
