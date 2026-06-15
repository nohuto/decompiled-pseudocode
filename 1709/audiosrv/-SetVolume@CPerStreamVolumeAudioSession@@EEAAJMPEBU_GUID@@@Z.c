/*
 * XREFs of ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z @ 0x1800765E0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18002CFEC (-StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@@Z @ 0x1800764A0 (-SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@@Z.c)
 *     ?StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180076698 (-StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     WPP_SF_Sg @ 0x180076E18 (WPP_SF_Sg.c)
 *     ValidateAudioLevel @ 0x1800784AC (ValidateAudioLevel.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::SetVolume(
        CPerStreamVolumeAudioSession *this,
        float a2,
        const struct _GUID *a3)
{
  CAudioDGProcess *v5; // rcx
  int v6; // ebx
  double v8; // [rsp+20h] [rbp-28h]

  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v8 = a2;
    WPP_SF_Sg(*((_QWORD *)WPP_GLOBAL_Control + 2), 16, (_DWORD)a3, *((_QWORD *)this + 99), SLOBYTE(v8));
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
  AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioSession::SetVolume", 837, v6);
  return (unsigned int)v6;
}
