/*
 * XREFs of ?GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180079D74
 * Callers:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x18000C130 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 *     ?GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x18009C564 (-GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 * Callees:
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180041C10 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?GetDefaultConnectorProcessingMode@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18004CE18 (-GetDefaultConnectorProcessingMode@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MIDL_itf_a.c)
 */

void __fastcall CEndpointCharacteristics::GetExclusiveModeProcessingModeConfiguration(
        CEndpointCharacteristics *this,
        __int64 a2,
        struct _GUID *a3,
        struct _GUID *a4,
        struct _GUID *a5)
{
  unsigned int v7; // r14d
  struct _GUID *DefaultConnectorProcessingMode; // rax
  struct _GUID v10; // [rsp+20h] [rbp-58h] BYREF
  GUID v11; // [rsp+30h] [rbp-48h] BYREF

  v10 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  v7 = a2;
  if ( CEndpointCharacteristics::IsConnectorModeSupported(this, a2, &v10) )
  {
    DefaultConnectorProcessingMode = &v10;
    v10 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  }
  else
  {
    DefaultConnectorProcessingMode = CEndpointCharacteristics::GetDefaultConnectorProcessingMode(
                                       (__int64)this,
                                       &v11,
                                       v7,
                                       0);
  }
  if ( a3 )
    *a3 = *DefaultConnectorProcessingMode;
  if ( a4 )
    *a4 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  if ( a5 )
    *a5 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
}
