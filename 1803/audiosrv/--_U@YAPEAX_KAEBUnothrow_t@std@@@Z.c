/*
 * XREFs of ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061040
 * Callers:
 *     AudioServerGetMixFormat @ 0x1800014A0 (AudioServerGetMixFormat.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x1800022C4 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180004BF0 (-OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@.c)
 *     ?IsDolbyOEMLicensePresent@DolbyOEMLicenseCheck@@QEAA_NXZ @ 0x180017334 (-IsDolbyOEMLicensePresent@DolbyOEMLicenseCheck@@QEAA_NXZ.c)
 *     MIDL_user_allocate @ 0x180017CA0 (MIDL_user_allocate.c)
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180024820 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x180025900 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?InitializeVolumeCoefficientCount@CPerStreamVolumeAudioStream@@UEAAJI@Z @ 0x18002B8D0 (-InitializeVolumeCoefficientCount@CPerStreamVolumeAudioStream@@UEAAJI@Z.c)
 *     ?NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z @ 0x180032AC4 (-NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z.c)
 *     ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180032BE0 (-OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180035930 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x180035BF0 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 *     s_rtgGetDefaultAudioEndpoint @ 0x180036970 (s_rtgGetDefaultAudioEndpoint.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180040AC4 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x1800412F0 (-SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 *     ?SetSidOnSACL@@YAKPEAXPEAU_ACL@@PEAPEAU1@PEAK@Z @ 0x18004145C (-SetSidOnSACL@@YAKPEAXPEAU_ACL@@PEAPEAU1@PEAK@Z.c)
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180041A18 (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?LoadPropertyStore@CAudioSessionStore@@AEAAJXZ @ 0x180041F60 (-LoadPropertyStore@CAudioSessionStore@@AEAAJXZ.c)
 *     ?OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z @ 0x1800420A8 (-OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z.c)
 *     ?Initialize@CAudioSessionStore@@QEAAJPEBG@Z @ 0x1800426C8 (-Initialize@CAudioSessionStore@@QEAAJPEBG@Z.c)
 *     s_winmmGetPnpInfo @ 0x1800431A0 (s_winmmGetPnpInfo.c)
 *     ?InitializeVolumeCoefficientCount@CAudioStream@@UEAAJI@Z @ 0x1800960E0 (-InitializeVolumeCoefficientCount@CAudioStream@@UEAAJI@Z.c)
 *     ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x1800A5F30 (-OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z.c)
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z @ 0x1800AADAC (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z.c)
 *     ?NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z @ 0x1800AB4F8 (-NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z.c)
 *     ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x1800AB760 (-OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 *     ?OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@@@Z @ 0x1800AEB30 (-OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@.c)
 *     ?OnDisplayNameChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z @ 0x1800AED90 (-OnDisplayNameChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z.c)
 *     ?OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z @ 0x1800AEF70 (-OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z.c)
 *     ?OnIconPathChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z @ 0x1800AF100 (-OnIconPathChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z.c)
 *     ?OnVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z @ 0x1800AF2E0 (-OnVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z.c)
 *     ?SendSpatialResourceChangeNotification@CAudioStream@@UEAAJK_JI@Z @ 0x1800B60F0 (-SendSpatialResourceChangeNotification@CAudioStream@@UEAAJK_JI@Z.c)
 *     ?AddSidToSACL@@YAKPEAUHKEY__@@PEAXPEAPEAU_ACL@@PEAK@Z @ 0x1800B8730 (-AddSidToSACL@@YAKPEAUHKEY__@@PEAXPEAPEAU_ACL@@PEAK@Z.c)
 *     ?ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x1800B8B74 (-ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@.c)
 *     ?FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z @ 0x1800BB838 (-FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z.c)
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_bc829bb10b63470994cc211668497c87___ @ 0x1800E7650 (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_bc829bb10b63470994cc211668497c87.c)
 *     ?CreateHash@CRSABCrypt@@QEAAJPEAEKPEAPEAEPEAK@Z @ 0x18010FF34 (-CreateHash@CRSABCrypt@@QEAAJPEAEKPEAPEAEPEAK@Z.c)
 *     ?GetMany@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUHSTRING__@@PEAI@Z @ 0x1801105D0 (-GetMany@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collection.c)
 *     ?IndexOf@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAIPEAE@Z @ 0x180110AD0 (-IndexOf@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collection.c)
 *     ?Initialize@CRSABCrypt@@QEAAJXZ @ 0x180110CB8 (-Initialize@CRSABCrypt@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LPVOID __fastcall operator new[](SIZE_T a1, const struct std::nothrow_t *a2)
{
  return operator new(a1, a2);
}
