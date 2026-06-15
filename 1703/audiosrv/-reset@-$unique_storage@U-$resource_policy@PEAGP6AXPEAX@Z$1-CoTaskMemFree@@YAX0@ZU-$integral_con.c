/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180039790
 * Callers:
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x1800031B0 (-OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     ??1CSaDeviceProxy@@MEAA@XZ @ 0x180009890 (--1CSaDeviceProxy@@MEAA@XZ.c)
 *     ??I?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x18002F1FC (--I-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     VerifyCriticalProcessing @ 0x180039234 (VerifyCriticalProcessing.c)
 *     EnableSpatialOnSpeakerEndpoint @ 0x180039A24 (EnableSpatialOnSpeakerEndpoint.c)
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z @ 0x180039AF4 (-DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z.c)
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180042940 (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x18007CE58 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMem.c)
 *     ?AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@PEBG@Z @ 0x1800A51E0 (-AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@PEBG@Z.c)
 *     ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800AC8A4 (-RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDe.c)
 *     ?GetAppSubmixClientContext@CProcessSubmixManager@@UEAAJPEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x1800AF180 (-GetAppSubmixClientContext@CProcessSubmixManager@@UEAAJPEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixC.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        void **a1,
        void *a2)
{
  void *v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
