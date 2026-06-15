/*
 * XREFs of ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180053910
 * Callers:
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@PEBUSPATIAL_STREAM_PROPERTIES@@6_N_NPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x18000B8A0 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180011D90 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x180039F30 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z @ 0x180050724 (-ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x1800508E0 (-AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z.c)
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x1800511A4 (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800516AC (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?AddInternalSpeechProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180051CEC (-AddInternalSpeechProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioenginee.c)
 *     ?AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x1800520A4 (-AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x1800521D4 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z.c)
 *     ?CreateOverrideChainLists@SystemEffectDescriptor@@AEAAJIPEBU_GUID@@W4SED_APOPLACEMENT@@AEAV?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@2@Z @ 0x180052F18 (-CreateOverrideChainLists@SystemEffectDescriptor@@AEAAJIPEBU_GUID@@W4SED_APOPLACEMENT@@AEAV-$CSi.c)
 *     ?SeparateStreamingModes@SystemEffectDescriptor@@AEAAJAEAVCAudioSignalProcessingModeArray@@00@Z @ 0x180052FFC (-SeparateStreamingModes@SystemEffectDescriptor@@AEAAJAEAVCAudioSignalProcessingModeArray@@00@Z.c)
 *     ?AddEnhancementsDisabledProcessingMode@SystemEffectDescriptor@@QEAAJU_GUID@@@Z @ 0x180053194 (-AddEnhancementsDisabledProcessingMode@SystemEffectDescriptor@@QEAAJU_GUID@@@Z.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800532AC (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x18005399C (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@I1AEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x180053A90 (-CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GU.c)
 *     _lambda_541a0aba8a0dd1ccbfde03220634244f_::operator() @ 0x180064580 (_lambda_541a0aba8a0dd1ccbfde03220634244f_--operator().c)
 *     _lambda_7f4a656a268d6d0b9fd67fb138151b91_::operator() @ 0x180064978 (_lambda_7f4a656a268d6d0b9fd67fb138151b91_--operator().c)
 *     ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x180097458 (-GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W.c)
 *     ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@@Z @ 0x1800F0DC8 (-SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(__int64 a1, _OWORD *a2)
{
  int v4; // ecx
  int v5; // edi
  __int64 v6; // rax
  _OWORD *v7; // rdx
  __int64 result; // rax

  v4 = *(_DWORD *)(a1 + 8);
  if ( v4 == *(_DWORD *)(a1 + 12) )
  {
    if ( *(_DWORD *)(a1 + 12) )
    {
      v5 = 2 * v4;
      if ( (v4 & 0x40000000) != 0 )
        return 0LL;
    }
    else
    {
      v5 = 1;
    }
    if ( (unsigned __int64)v5 <= 0x7FFFFFF )
    {
      v6 = _o__recalloc(*(_QWORD *)a1, v5, 16LL);
      if ( v6 )
      {
        v4 = *(_DWORD *)(a1 + 8);
        *(_DWORD *)(a1 + 12) = v5;
        *(_QWORD *)a1 = v6;
        goto LABEL_7;
      }
    }
    return 0LL;
  }
LABEL_7:
  v7 = (_OWORD *)(*(_QWORD *)a1 + 16LL * v4);
  if ( v7 )
  {
    *v7 = *a2;
    v4 = *(_DWORD *)(a1 + 8);
  }
  result = 1LL;
  *(_DWORD *)(a1 + 8) = v4 + 1;
  return result;
}
