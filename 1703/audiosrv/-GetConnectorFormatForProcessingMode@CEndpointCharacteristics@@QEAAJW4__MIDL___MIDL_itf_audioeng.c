/*
 * XREFs of ?GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180041BCC
 * Callers:
 *     ?IsValidMicArrayForAEC@@YA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180038BB0 (-IsValidMicArrayForAEC@@YA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18009991C (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 *     ?GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x18009C564 (-GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 *     AudioServerGetDevicePeriod @ 0x1800A25D0 (AudioServerGetDevicePeriod.c)
 * Callees:
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000DC50 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800330C0 (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetConnectorFormatForProcessingMode(
        CEndpointCharacteristics *this,
        unsigned __int32 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4)
{
  __int64 result; // rax
  struct _GUID v8; // [rsp+30h] [rbp-18h] BYREF

  v8 = *a3;
  result = CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
             this,
             (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
             &v8,
             a4);
  if ( (int)result < 0 )
    return CEndpointCharacteristics::GetDeviceFormat(this, 0, 0, a2, a4);
  return result;
}
