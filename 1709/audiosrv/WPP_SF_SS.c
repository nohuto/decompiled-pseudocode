/*
 * XREFs of WPP_SF_SS @ 0x180078E1C
 * Callers:
 *     ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180015CC0 (-OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180016390 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x180016930 (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 *     ?GetVolume@CServerAudioSessionControl@@UEAAJPEAM@Z @ 0x180016E10 (-GetVolume@CServerAudioSessionControl@@UEAAJPEAM@Z.c)
 *     ?FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z @ 0x1800171B0 (-FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z.c)
 *     ?GetChannelCount@CServerAudioSessionControl@@UEAAJPEAI@Z @ 0x180077440 (-GetChannelCount@CServerAudioSessionControl@@UEAAJPEAI@Z.c)
 *     ?OnDisplayNameChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z @ 0x180077A50 (-OnDisplayNameChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z.c)
 *     ?OnIconPathChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z @ 0x180077DC0 (-OnIconPathChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1800A3714 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXPEBG@Z @ 0x1800A3B98 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?FindMonitor@CMonitorManager@@AEAA?AV?$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z @ 0x1800A41A0 (-FindMonitor@CMonitorManager@@AEAA-AV-$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z.c)
 *     ?OnPowerStateChanged@CMonitorManager@@QEAAXE@Z @ 0x1800A611C (-OnPowerStateChanged@CMonitorManager@@QEAAXE@Z.c)
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x1800A6B94 (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_SS(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4, __int64 a5)
{
  __int64 v6; // rcx
  __int64 v7; // rax

  v6 = -1LL;
  if ( a5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)(a5 + 2 * v7) );
  }
  if ( a4 )
  {
    do
      ++v6;
    while ( a4[v6] );
  }
  if ( !a4 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, a3, a2, a4);
}
