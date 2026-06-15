/*
 * XREFs of ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180032E24
 * Callers:
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@PEBUSPATIAL_STREAM_PROPERTIES@@6_NPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x180010BE0 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x180011CC0 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ @ 0x180033158 (-InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ.c)
 *     GetPackedSysFx2List @ 0x18003931C (GetPackedSysFx2List.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@4@Z @ 0x18009B0C4 (-DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3@Z @ 0x18009CB94 (-IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MID.c)
 *     ?GetSystemEffect@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800BE064 (-GetSystemEffect@CEndpointCharacteristics@@QEAAJU_tagpropertykey@@U_GUID@@HW4__MIDL___MIDL_itf_a.c)
 * Callees:
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18000DF80 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180010540 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ?IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180032CDC (-IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18004CE8C (-GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W.c)
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
  unsigned int v7; // esi
  __int64 v8; // r13
  __int64 v10; // rbx
  __int64 SupportedConnectorModes; // rax
  int v12; // ecx
  int v13; // r8d
  __int64 v14; // r9
  __int64 v15; // rax
  struct _GUID v17; // [rsp+60h] [rbp-48h] BYREF

  v7 = 0;
  v8 = a4;
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  v10 = 96LL * a4;
  SystemEffectDescriptor::ResolveAllOverridingChains((CEndpointCharacteristics *)((char *)this + v10 + 224));
  SystemEffectDescriptor::ResolveAllOverridingChains((CEndpointCharacteristics *)((char *)this + v10 + 608));
  SystemEffectDescriptor::ResolveAllOverridingChains((CEndpointCharacteristics *)((char *)this + v10 + 992));
  if ( *((_DWORD *)this + v8 + 10) )
  {
    if ( a3
      || (v17 = *a2,
          (unsigned int)CEndpointCharacteristics::IsAPOModeSupported(
                          this,
                          &v17,
                          (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v8)) )
    {
      v17 = *a2;
      SupportedConnectorModes = CEndpointCharacteristics::GetSupportedConnectorModes(this, (unsigned int)v8, 0LL);
      v12 = 0;
      v13 = *(_DWORD *)(SupportedConnectorModes + 8);
      if ( v13 <= 0 )
      {
LABEL_20:
        v12 = -1;
      }
      else
      {
        v14 = *(_QWORD *)SupportedConnectorModes;
        while ( 1 )
        {
          v15 = *(_QWORD *)(v14 + 16LL * v12) - *(_QWORD *)&v17.Data1;
          if ( !v15 )
            v15 = *(_QWORD *)(v14 + 16LL * v12 + 8) - *(_QWORD *)v17.Data4;
          if ( !v15 )
            break;
          if ( ++v12 >= v13 )
            goto LABEL_20;
        }
      }
      v17 = *a2;
      return (unsigned int)CEndpointCharacteristics::GetInitializedSystemEffectInterface(
                             (__int64)this,
                             (__int64)this + v10 + 608,
                             2u,
                             v12 != -1,
                             &v17,
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
