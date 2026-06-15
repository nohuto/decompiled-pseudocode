/*
 * XREFs of ?SetAllVolumes@CPerStreamVolumeAudioSession@@EEAAJIPEBMPEBU_GUID@@@Z @ 0x18008F410
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetAllVolumes@CAudioSession@@UEAAJIPEBMPEBU_GUID@@@Z @ 0x18008F2B0 (-SetAllVolumes@CAudioSession@@UEAAJIPEBMPEBU_GUID@@@Z.c)
 *     ?StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180090088 (-StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::SetAllVolumes(
        CPerStreamVolumeAudioSession *this,
        unsigned int a2,
        const float *a3,
        const struct _GUID *a4)
{
  int v5; // eax
  unsigned int v6; // ebx

  v5 = CAudioSession::SetAllVolumes(this, a2, a3, a4);
  v6 = v5;
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioSession::SetAllVolumes", 1316, v5);
  else
    CPerStreamVolumeAudioSession::StartSessionPersistanceTimer(this);
  return v6;
}
