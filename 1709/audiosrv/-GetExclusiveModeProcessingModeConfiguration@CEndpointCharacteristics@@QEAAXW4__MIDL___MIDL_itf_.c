/*
 * XREFs of ?GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180022664
 * Callers:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180023A10 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x180030384 (-GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180009C7C (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18002153C (-GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MI.c)
 *     ?GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x1800216F8 (-GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingMode.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 */

void __fastcall CEndpointCharacteristics::GetExclusiveModeProcessingModeConfiguration(
        CEndpointCharacteristics *this,
        int a2,
        struct _GUID *a3,
        struct _GUID *a4,
        struct _GUID *a5)
{
  __int64 *SupportedConnectorModesInternal; // rax
  GUID *DefaultConnectorProcessingModeInternal; // rax
  GUID v11; // [rsp+20h] [rbp-58h] BYREF
  GUID v12; // [rsp+30h] [rbp-48h] BYREF

  v11 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  SupportedConnectorModesInternal = (__int64 *)CEndpointCharacteristics::GetSupportedConnectorModesInternal(
                                                 (__int64)this,
                                                 a2,
                                                 0);
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                       SupportedConnectorModesInternal,
                       &v11) == -1 )
  {
    DefaultConnectorProcessingModeInternal = CEndpointCharacteristics::GetDefaultConnectorProcessingModeInternal(
                                               this,
                                               &v12,
                                               a2,
                                               0);
  }
  else
  {
    DefaultConnectorProcessingModeInternal = &v11;
    v11 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  }
  if ( a3 )
    *a3 = *DefaultConnectorProcessingModeInternal;
  if ( a4 )
    *a4 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  if ( a5 )
    *a5 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
}
