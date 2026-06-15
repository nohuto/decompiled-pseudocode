/*
 * XREFs of ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0
 * Callers:
 *     ?EventWorkerThread@@YAKPEAX@Z @ 0x180004970 (-EventWorkerThread@@YAKPEAX@Z.c)
 *     ?Initialize@CWindowsPolicyManager@@IEAAJXZ @ 0x180004EB4 (-Initialize@CWindowsPolicyManager@@IEAAJXZ.c)
 *     ?OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x1800074E0 (-OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAu.c)
 *     ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x1800077C0 (-OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x180007EA4 (-Init@CDuckingNotification@@QEAAJKPEBG_K@Z.c)
 *     ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x180008060 (-AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z.c)
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x180008240 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 *     ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x1800083F0 (-Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z.c)
 *     ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x18000884C (-NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z.c)
 *     ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x180008AA4 (-NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?QueueDuckingWorkItem@CDuckingManager@@AEAAJPEAUIAudioSessionInfo@@KW4DUCK_WORK_ITEM_TYPE@@H@Z @ 0x180008EFC (-QueueDuckingWorkItem@CDuckingManager@@AEAAJPEAUIAudioSessionInfo@@KW4DUCK_WORK_ITEM_TYPE@@H@Z.c)
 *     ?OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x18000920C (-OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 *     ?OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x18000955C (-OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 *     ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z @ 0x18000978C (-ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z @ 0x1800099B4 (-RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z.c)
 *     ?RemoveDuckingGainStages@CDuckingManager@@AEAAJPEBGAEA_J@Z @ 0x180009AF8 (-RemoveDuckingGainStages@CDuckingManager@@AEAAJPEBGAEA_J@Z.c)
 *     ?GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@@Z @ 0x180009C40 (-GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV-$CAtlList@PEAUIAudioSessionInfo@@V-$CEle.c)
 *     ?CreateInstance@CApplication@@SAJPEBGKPEAPEAV1@@Z @ 0x18000B6A4 (-CreateInstance@CApplication@@SAJPEBGKPEAPEAV1@@Z.c)
 *     ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x18000BB64 (-LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x18000BC8C (-DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x18000CA48 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 *     ?StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z @ 0x18000CBEC (-StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z.c)
 *     ?GoodFaithPLMExemptionTimerExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000CDB0 (-GoodFaithPLMExemptionTimerExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_.c)
 *     ?PostDelayedInteractivityNotification@CApplication@@IEAAJPEAVIPBMWorkItem@@@Z @ 0x18000D004 (-PostDelayedInteractivityNotification@CApplication@@IEAAJPEAVIPBMWorkItem@@@Z.c)
 *     ?DelayedInteractivityNotificationTimerExpiredCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000D290 (-DelayedInteractivityNotificationTimerExpiredCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE.c)
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x18000DBFC (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?BCMStartupGracePeriodExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000DF00 (-BCMStartupGracePeriodExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TI.c)
 *     ?CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHHHHHHHPEAPEAV1@@Z @ 0x18000E3A0 (-CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHHHHHHHPEAPEAV1@@Z.c)
 *     ?AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x18000F464 (-AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?RemoveSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x18000F53C (-RemoveSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?StartInactivityTimer@CProcess@@QEAAXXZ @ 0x18000FB68 (-StartInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?InactivityTimerCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000FE10 (-InactivityTimerCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x18000FF5C (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?SetupProcessTerminationWatcher@CProcess@@IEAAJXZ @ 0x1800103D8 (-SetupProcessTerminationWatcher@CProcess@@IEAAJXZ.c)
 *     ?ProcessTerminationWatcherCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800105F0 (-ProcessTerminationWatcherCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z.c)
 *     ?GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z @ 0x180012248 (-GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z.c)
 *     ?CreateInstance@CApplicationManager@@SAJPEAPEAV1@@Z @ 0x180012498 (-CreateInstance@CApplicationManager@@SAJPEAPEAV1@@Z.c)
 *     ?RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x18001282C (-RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 *     ?RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x180012914 (-RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x1800129E8 (-RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180012ABC (-RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@H@Z @ 0x180012B7C (-SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180012C64 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180012F34 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z @ 0x1800139B8 (-ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180013C08 (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x180013D3C (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z @ 0x180014140 (-RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z.c)
 *     ?OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z @ 0x180015640 (-OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z.c)
 *     ?OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z @ 0x180015AC0 (-OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z.c)
 *     ?ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x180015DBC (-ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z.c)
 *     ?RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x180015FB0 (-RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z.c)
 *     ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x1800161A4 (-UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x18001642C (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmana.c)
 *     ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z @ 0x180016750 (-OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z.c)
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x180016D74 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBGKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBGKW4HOSTED_APP_CHANGED@@@Z @ 0x180017058 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBGKW4HOSTED_APP_CHANGED@@@Z.c)
 *     ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z @ 0x18001715C (-GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z.c)
 *     ?CreateInstance@CHostedAppInteractivity@@SAJPEBGKPEAPEAV1@@Z @ 0x18001729C (-CreateInstance@CHostedAppInteractivity@@SAJPEBGKPEAPEAV1@@Z.c)
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z @ 0x1800173AC (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z.c)
 *     ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z @ 0x1800174D8 (-GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBGKPEAPEAVCHostedApp.c)
 *     ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBGKH@Z @ 0x1800176CC (-QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBGKH@Z.c)
 *     ?CreateInstance@CPlaybackManager@@SAJPEAPEAV1@@Z @ 0x180017B3C (-CreateInstance@CPlaybackManager@@SAJPEAPEAV1@@Z.c)
 *     ?QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180017D64 (-QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180017EDC (-QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?OnAppClosed@CPlaybackManager@@QEAAJPEBGK@Z @ 0x180018054 (-OnAppClosed@CPlaybackManager@@QEAAJPEBGK@Z.c)
 *     PbmAllowMediaPlaybackForApp @ 0x1800184B0 (PbmAllowMediaPlaybackForApp.c)
 *     ?HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z @ 0x180018FD0 (-HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z.c)
 *     ?CreateInstance@CStreamClassPolicyManager@@SAJPEAPEAV1@@Z @ 0x180019828 (-CreateInstance@CStreamClassPolicyManager@@SAJPEAPEAV1@@Z.c)
 *     ?UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAH@Z @ 0x180019BB8 (-UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAH@Z.c)
 *     ?UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z @ 0x180019ED0 (-UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z.c)
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x18001D3A4 (-TsSessionIdLogon@@YAJK@Z.c)
 *     ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x18001D8D0 (-TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z.c)
 *     ?TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x18001DF70 (-TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     ?TS_SessionIdStreamStopped@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x18001E098 (-TS_SessionIdStreamStopped@@YAJKPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     ?Initialize@CStreamStartedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18001EB18 (-Initialize@CStreamStartedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001EBD0 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Initialize@CStreamStoppedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18001F054 (-Initialize@CStreamStoppedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18001F110 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 *     ?CreateInstance@CAppStateChangedWorkItem@@SAJPEBGHKPEAPEAVIPBMWorkItem@@@Z @ 0x18001F574 (-CreateInstance@CAppStateChangedWorkItem@@SAJPEBGHKPEAPEAVIPBMWorkItem@@@Z.c)
 *     ?Invoke@CAppStateChangedWorkItem@@UEAAXXZ @ 0x18001F710 (-Invoke@CAppStateChangedWorkItem@@UEAAXXZ.c)
 *     ?CreateInstance@CTransportControlRouterWorkItem@@SAJKPEBGPEAPEAVIPBMWorkItem@@@Z @ 0x18001FB50 (-CreateInstance@CTransportControlRouterWorkItem@@SAJKPEBGPEAPEAVIPBMWorkItem@@@Z.c)
 *     ?Invoke@CTransportControlRouterWorkItem@@UEAAXXZ @ 0x18001FCC0 (-Invoke@CTransportControlRouterWorkItem@@UEAAXXZ.c)
 *     ?CreateInstance@HostedAppStateChangedContext@@SAJPEBGKHPEAPEAV1@@Z @ 0x18001FED4 (-CreateInstance@HostedAppStateChangedContext@@SAJPEBGKHPEAPEAV1@@Z.c)
 *     ?CreateInstance@ApplicationStateChangedContext@@SAJPEBGKW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0002@@PEAPEAU1@@Z @ 0x18001FFF0 (-CreateInstance@ApplicationStateChangedContext@@SAJPEBGKW4__MIDL___MIDL_itf_playbackmanagerrpc_0.c)
 * Callees:
 *     _TlgWrite @ 0x180001078 (_TlgWrite.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x1800044E8 (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x180026990 (__security_check_cookie.c)
 */

void __fastcall AudPolicyLogError(const char *a1, int a2, int a3)
{
  __int64 v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  __int64 v7; // rax
  const unsigned __int16 *v8; // rdx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-9h] BYREF
  const unsigned __int16 *v10; // [rsp+50h] [rbp+17h]
  int v11; // [rsp+58h] [rbp+1Fh]
  int v12; // [rsp+5Ch] [rbp+23h]
  int *v13; // [rsp+60h] [rbp+27h]
  int v14; // [rsp+68h] [rbp+2Fh]
  int v15; // [rsp+6Ch] [rbp+33h]
  int *v16; // [rsp+70h] [rbp+37h]
  int v17; // [rsp+78h] [rbp+3Fh]
  int v18; // [rsp+7Ch] [rbp+43h]
  int v19; // [rsp+A8h] [rbp+6Fh] BYREF
  int v20; // [rsp+B0h] [rbp+77h] BYREF

  if ( a3 < 0 )
  {
    v20 = a3;
    v19 = a2;
    v4 = *((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
    if ( *(_DWORD *)v4 > 3u && (*(_BYTE *)(v4 + 16) & 4) != 0 && (*(_QWORD *)(v4 + 24) & 4LL) == *(_QWORD *)(v4 + 24) )
    {
      LODWORD(v7) = 0;
      v8 = &word_18002D096;
      if ( a1 )
      {
        v8 = (const unsigned __int16 *)a1;
        v7 = -1LL;
        do
          ++v7;
        while ( a1[v7] );
      }
      v12 = 0;
      v15 = 0;
      v18 = 0;
      v11 = v7 + 1;
      v13 = &v19;
      v16 = &v20;
      v10 = v8;
      v14 = 4;
      v17 = 4;
      TlgWrite((TraceLoggingHProvider)v4, &unk_180032041, v5, v6, 5u, &pData);
    }
  }
}
