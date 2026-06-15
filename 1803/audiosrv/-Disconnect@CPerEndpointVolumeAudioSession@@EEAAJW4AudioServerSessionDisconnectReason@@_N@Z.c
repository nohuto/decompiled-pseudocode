/*
 * XREFs of ?Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800A8F40
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?DestroyVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAXXZ @ 0x1800A8BC4 (-DestroyVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAXXZ.c)
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800A8CA0 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::Disconnect(__int64 a1, int a2, char a3)
{
  int v6; // eax
  unsigned int v7; // ebx

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 44LL, &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids, a1 - 16);
  }
  v6 = CAudioSession::Disconnect(a1, a2, a3);
  v7 = v6;
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("CPerEndpointVolumeAudioSession::Disconnect", 2195, v6);
  else
    CPerEndpointVolumeAudioSession::DestroyVolumeStrip((CPerEndpointVolumeAudioSession *)(a1 - 16));
  return v7;
}
