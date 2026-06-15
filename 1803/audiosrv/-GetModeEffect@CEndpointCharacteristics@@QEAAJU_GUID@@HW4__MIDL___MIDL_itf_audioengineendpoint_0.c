/*
 * XREFs of ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18009586C
 * Callers:
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@PEBUSPATIAL_STREAM_PROPERTIES@@6_N_NPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x18000B8A0 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x180039F30 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@4@Z @ 0x1800BAB48 (-DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3@Z @ 0x1800BC60C (-IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MID.c)
 *     ?GetSystemEffect@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800EC0E8 (-GetSystemEffect@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HW4__MIDL___MIDL_itf_a.c)
 *     ?InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ @ 0x1800EC1C0 (-InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ.c)
 *     GetPackedSysFx2List @ 0x1800EF318 (GetPackedSysFx2List.c)
 * Callees:
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180002760 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@.c)
 *     ?IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180050A70 (-IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180052E4C (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180052E78 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetModeEffect(
        CEndpointCharacteristics *this,
        struct _GUID *a2,
        int a3,
        int a4,
        struct ICompositeSystemEffect **a5,
        struct IAudioProcessingObject **a6,
        struct IAudioSystemEffects2 **a7)
{
  unsigned int v7; // ebx
  __int64 v8; // rbp
  BOOL IsConnectorModeSupported; // eax
  struct _GUID v14; // [rsp+60h] [rbp-38h] BYREF

  v7 = 0;
  v8 = a4;
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, a4) )
  {
    if ( a3
      || (v14 = *a2,
          CEndpointCharacteristics::IsAPOModeSupported(
            this,
            &v14,
            (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v8)) )
    {
      v14 = *a2;
      IsConnectorModeSupported = CEndpointCharacteristics::IsConnectorModeSupported(this, v8, &v14);
      v14 = *a2;
      return (unsigned int)CEndpointCharacteristics::GetInitializedSystemEffectInterface(
                             (__int64)this,
                             (__int64)this + 96 * v8 + 616,
                             2,
                             IsConnectorModeSupported,
                             &v14,
                             a3,
                             0,
                             (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v8,
                             a5,
                             a6,
                             a7);
    }
  }
  return v7;
}
