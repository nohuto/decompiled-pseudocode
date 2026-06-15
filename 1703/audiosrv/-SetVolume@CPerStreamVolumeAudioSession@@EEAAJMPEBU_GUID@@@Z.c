/*
 * XREFs of ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z @ 0x18008FFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18001D484 (-StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@@Z @ 0x18008FE90 (-SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@@Z.c)
 *     ?StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180090088 (-StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ValidateAudioLevel @ 0x180090594 (ValidateAudioLevel.c)
 *     WPP_SF_Sg @ 0x18009086C (WPP_SF_Sg.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::SetVolume(
        CPerStreamVolumeAudioSession *this,
        float a2,
        const struct _GUID *a3)
{
  CVolumeStrip *v5; // rcx
  int v6; // ebx
  double v8; // [rsp+20h] [rbp-28h]

  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v8 = a2;
    WPP_SF_Sg(*((_QWORD *)WPP_GLOBAL_Control + 2), 18, (_DWORD)a3, *((_QWORD *)this + 108), SLOBYTE(v8));
  }
  if ( (unsigned __int8)ValidateAudioLevel(v5) )
  {
    CPerStreamVolumeAudioSession::StopSessionPersistanceTimer(this);
    v6 = CAudioSession::SetVolume(this, a2, a3);
    if ( v6 >= 0 )
    {
      CPerStreamVolumeAudioSession::StartSessionPersistanceTimer(this);
      return (unsigned int)v6;
    }
  }
  else
  {
    v6 = -2147024809;
  }
  AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioSession::SetVolume", 874, v6);
  return (unsigned int)v6;
}
