/*
 * XREFs of ?GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180095D94
 * Callers:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHHPEAU_GUID@@444@Z @ 0x1800102E0 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x1800BC0B8 (-GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 * Callees:
 *     ?GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x180038AA0 (-GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MI.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180052E4C (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 */

void __fastcall CEndpointCharacteristics::GetExclusiveModeProcessingModeConfiguration(
        CEndpointCharacteristics *this,
        int a2,
        struct _GUID *a3,
        struct _GUID *a4,
        struct _GUID *a5)
{
  struct _GUID *DefaultConnectorProcessingModeInternal; // rax
  struct _GUID v10; // [rsp+20h] [rbp-58h] BYREF
  GUID v11; // [rsp+30h] [rbp-48h] BYREF

  v10 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  if ( CEndpointCharacteristics::IsConnectorModeSupported(this, a2, &v10) )
  {
    DefaultConnectorProcessingModeInternal = &v10;
    v10 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  }
  else
  {
    DefaultConnectorProcessingModeInternal = CEndpointCharacteristics::GetDefaultConnectorProcessingModeInternal(
                                               (__int64)this,
                                               &v11,
                                               a2,
                                               0);
  }
  if ( a3 )
    *a3 = *DefaultConnectorProcessingModeInternal;
  if ( a4 )
    *a4 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  if ( a5 )
    *a5 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
}
