/*
 * XREFs of WPP_SF_qd @ 0x18004B79C
 * Callers:
 *     AUDIOSERVER_rundown @ 0x1800024E0 (AUDIOSERVER_rundown.c)
 *     ?DeleteVolumeClientNotification@CVolumeStrip@@QEAAJK@Z @ 0x180002780 (-DeleteVolumeClientNotification@CVolumeStrip@@QEAAJK@Z.c)
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180014FA0 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?CalculateAPOVolume@CPerStreamVolumeAudioStream@@MEAAJKQEAMAEA_NAEA_J@Z @ 0x180016A50 (-CalculateAPOVolume@CPerStreamVolumeAudioStream@@MEAAJKQEAMAEA_NAEA_J@Z.c)
 *     ?AddVolumeClientNotification@CVolumeStrip@@QEAAJK@Z @ 0x180017EBC (-AddVolumeClientNotification@CVolumeStrip@@QEAAJK@Z.c)
 *     ?Release@CVolumeStrip@@UEAAKXZ @ 0x180017FD0 (-Release@CVolumeStrip@@UEAAKXZ.c)
 *     ?AddRef@CVolumeStrip@@UEAAKXZ @ 0x180018030 (-AddRef@CVolumeStrip@@UEAAKXZ.c)
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x180018220 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 *     ?ReleaseClientReference@CAudioStream@@UEAAKXZ @ 0x180019490 (-ReleaseClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?AddClientReference@CAudioStream@@UEAAKXZ @ 0x180019540 (-AddClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?SetAllVolumes@CVADServer@@UEAAJIPEBM@Z @ 0x18001AAF0 (-SetAllVolumes@CVADServer@@UEAAJIPEBM@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x18001CA60 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x1800207F0 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180020C90 (-OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180021120 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?AddRef@CAudioSessionManager@@UEAAKXZ @ 0x1800214A0 (-AddRef@CAudioSessionManager@@UEAAKXZ.c)
 *     ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180032590 (-DestroyStream@CVADServer@@UEAAJ_K@Z.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18003ADF0 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18003B440 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?GetMeteringChannelCount@CMeterControlBase@@UEAAJPEAI@Z @ 0x180083AB0 (-GetMeteringChannelCount@CMeterControlBase@@UEAAJPEAI@Z.c)
 *     ?InitializeAPOs@CMuteSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180084000 (-InitializeAPOs@CMuteSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?SetMuteValue@CMuteHardware@@UEAAJH@Z @ 0x180084840 (-SetMuteValue@CMuteHardware@@UEAAJH@Z.c)
 *     ?SetMuteValue@CMuteSoftware@@UEAAJH@Z @ 0x1800848C0 (-SetMuteValue@CMuteSoftware@@UEAAJH@Z.c)
 *     ?GetChannelCount@CVolumeControlBase@@UEAAJPEAI@Z @ 0x180084DC0 (-GetChannelCount@CVolumeControlBase@@UEAAJPEAI@Z.c)
 *     ?InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1800855A0 (-InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x180086420 (-ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ.c)
 *     ?OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@@@Z @ 0x1800911D0 (-OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@.c)
 *     ?OnDisplayNameChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z @ 0x180091430 (-OnDisplayNameChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z.c)
 *     ?OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z @ 0x180091610 (-OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z.c)
 *     ?OnIconPathChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z @ 0x1800917A0 (-OnIconPathChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z.c)
 *     ?OnVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z @ 0x180091980 (-OnVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z.c)
 *     ?AddAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z @ 0x180092C90 (-AddAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z.c)
 *     ?DeleteAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z @ 0x180092F00 (-DeleteAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z.c)
 *     ?DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x180093278 (-DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180093820 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     ?NotifySessionAudioProtocol@CAudioSessionManager@@QEAAJKI@Z @ 0x180093F30 (-NotifySessionAudioProtocol@CAudioSessionManager@@QEAAJKI@Z.c)
 *     ?GetStreamChannelVolume@CAudioStream@@QEAAJIPEAM@Z @ 0x18009600C (-GetStreamChannelVolume@CAudioStream@@QEAAJIPEAM@Z.c)
 *     ?SendSpatialResourceChangeNotification@CAudioStream@@UEAAJK_JI@Z @ 0x180096890 (-SendSpatialResourceChangeNotification@CAudioStream@@UEAAJK_JI@Z.c)
 *     ?GetChannelVolume@CVADServer@@UEAAJIPEAM@Z @ 0x1800A07F0 (-GetChannelVolume@CVADServer@@UEAAJIPEAM@Z.c)
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x1800B4A2C (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?ScheduleMonitorRestartTimer@CMonitorManager@@AEAAXXZ @ 0x1800B4CC0 (-ScheduleMonitorRestartTimer@CMonitorManager@@AEAAXXZ.c)
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z @ 0x1800B59BC (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z.c)
 *     ?OnDeviceDescriptionChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x1800B6BAC (-OnDeviceDescriptionChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z.c)
 *     ?OnDeviceIconChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x1800B6D40 (-OnDeviceIconChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z.c)
 *     ?OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x1800B6FB4 (-OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qd(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  return EtwTraceMessage(a1, 43LL, a3, a2, (__int64 *)va, 8LL, va1);
}
