/*
 * XREFs of ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001C8B8
 * Callers:
 *     ?RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z @ 0x180005E20 (-RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z.c)
 *     ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x180006050 (-HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA-AW4AccessibilityStateChange@@XZ.c)
 *     ?GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ @ 0x180010A40 (-GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ.c)
 *     ?GetEndpointVolumeOverridePolicyVolume@CProcess@@UEAAMPEBG@Z @ 0x180010AE0 (-GetEndpointVolumeOverridePolicyVolume@CProcess@@UEAAMPEBG@Z.c)
 *     ?GenerateActiveAppNotification@CApplicationManager@@QEAAJPEAU_ActiveMediaAppsNotificationContext@@@Z @ 0x180014EF0 (-GenerateActiveAppNotification@CApplicationManager@@QEAAJPEAU_ActiveMediaAppsNotificationContext.c)
 *     ?ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x180015DBC (-ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z.c)
 *     ?RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x180015FB0 (-RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z.c)
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAEA_J@Z @ 0x180019970 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAE.c)
 *     ?IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@H@Z @ 0x180019DC0 (-IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_00.c)
 *     ?UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z @ 0x180019ED0 (-UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z.c)
 *     ?DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z @ 0x18001BC24 (-DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z.c)
 *     ?TsSessionIdGetAudioProtocol@@YAJKPEAIPEAK@Z @ 0x18001C924 (-TsSessionIdGetAudioProtocol@@YAJKPEAIPEAK@Z.c)
 *     ?TsSessionIdIsMuted@@YAHK@Z @ 0x18001CA78 (-TsSessionIdIsMuted@@YAHK@Z.c)
 *     ?TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18001CAD8 (-TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18001CBE8 (-TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z @ 0x18001CC98 (-TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z.c)
 *     ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18001CE1C (-TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18001CEE0 (-TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z @ 0x18001CF80 (-TsSessionIsActiveMediaApplication@@YAHPEAVCApplication@@@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18001D144 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x18001D1E8 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x18001D3A4 (-TsSessionIdLogon@@YAJK@Z.c)
 *     ?TsSessionIdTerminate@@YAJK@Z @ 0x18001D504 (-TsSessionIdTerminate@@YAJK@Z.c)
 *     ?TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAH@Z @ 0x18001D5AC (-TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAH@Z.c)
 *     ?TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z @ 0x18001D65C (-TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x18001D6F8 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 *     ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x18001D8D0 (-TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z.c)
 *     ?TsSessionIdAreAccessibilityAudioSettingsInitialized@@YAHK@Z @ 0x18001DACC (-TsSessionIdAreAccessibilityAudioSettingsInitialized@@YAHK@Z.c)
 *     ?TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z @ 0x18001DB2C (-TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z.c)
 *     ?TsSessionIdGetAccessibilityAudioMonoMixState@@YAHK@Z @ 0x18001DB94 (-TsSessionIdGetAccessibilityAudioMonoMixState@@YAHK@Z.c)
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18001DD00 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 *     ?TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x18001DF70 (-TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     ?TS_SessionIdStreamStopped@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x18001E098 (-TS_SessionIdStreamStopped@@YAJKPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     ?Invoke@CTransportControlRouterWorkItem@@UEAAXXZ @ 0x18001FCC0 (-Invoke@CTransportControlRouterWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001C164 (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

__int64 __fastcall TsSessionFromSessionId(DWORD a1, int a2, void **a3, struct TSSession **a4)
{
  _QWORD *v6; // rax
  void *v7; // r8
  struct TSSession *v8; // rcx
  __int64 result; // rax

  if ( a3 )
    *a3 = 0LL;
  *a4 = 0LL;
  v6 = qword_18003AE48;
  while ( 1 )
  {
    v7 = v6;
    if ( !v6 )
      break;
    v8 = (struct TSSession *)v6[2];
    v6 = (_QWORD *)*v6;
    if ( a1 == *(_DWORD *)v8 )
    {
      if ( a3 )
        *a3 = v7;
      *a4 = v8;
      break;
    }
  }
  result = *a4 == 0LL ? 0x490 : 0;
  if ( !*a4 )
  {
    if ( a2 )
      return TsSessionCreate(a1, a3, a4);
  }
  return result;
}
