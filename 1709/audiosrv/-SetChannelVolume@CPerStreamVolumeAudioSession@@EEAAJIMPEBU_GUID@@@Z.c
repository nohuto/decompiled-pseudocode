/*
 * XREFs of ?SetChannelVolume@CPerStreamVolumeAudioSession@@EEAAJIMPEBU_GUID@@@Z @ 0x180075C20
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetChannelVolume@CAudioSession@@UEAAJIMPEBU_GUID@@@Z @ 0x180075B00 (-SetChannelVolume@CAudioSession@@UEAAJIMPEBU_GUID@@@Z.c)
 *     ?StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180076698 (-StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::SetChannelVolume(
        const wchar_t **this,
        unsigned int a2,
        float a3,
        const struct _GUID *a4)
{
  int v5; // eax
  unsigned int v6; // ebx

  v5 = CAudioSession::SetChannelVolume(this, a2, a3, a4);
  v6 = v5;
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioSession::SetChannelVolume", 1165, v5);
  else
    CPerStreamVolumeAudioSession::StartSessionPersistanceTimer((CPerStreamVolumeAudioSession *)this);
  return v6;
}
