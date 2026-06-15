/*
 * XREFs of ?Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180070D80
 * Callers:
 *     <none>
 * Callees:
 *     ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18002CFEC (-StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180070514 (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180070A30 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::Disconnect(__int64 a1, int a2, char a3)
{
  int v4; // eax
  unsigned int v5; // edi

  v4 = CAudioSession::Disconnect(a1, a2, a3);
  v5 = v4;
  if ( v4 < 0 )
  {
    AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioSession::Disconnect", 2462, v4);
  }
  else if ( *(_BYTE *)(a1 + 1024) )
  {
    CPerStreamVolumeAudioSession::StopSessionPersistanceTimer((CPerStreamVolumeAudioSession *)(a1 - 16));
    CPerStreamVolumeAudioSession::CloseSessionPropertyStore((CPerStreamVolumeAudioSession *)(a1 - 16));
  }
  return v5;
}
