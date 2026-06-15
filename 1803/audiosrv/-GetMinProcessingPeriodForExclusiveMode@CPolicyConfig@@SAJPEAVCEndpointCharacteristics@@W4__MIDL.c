/*
 * XREFs of ?GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x1800BC0B8
 * Callers:
 *     AudioServerGetDevicePeriod @ 0x1800C3E80 (AudioServerGetDevicePeriod.c)
 * Callees:
 *     ?GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180095B88 (-GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioeng.c)
 *     ?GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEA_J@Z @ 0x180095CF4 (-GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audio.c)
 *     ?GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180095D94 (-GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::GetMinProcessingPeriodForExclusiveMode(
        struct CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        __int64 *a3)
{
  struct _GUID v5; // xmm6
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v6; // edx
  int ConnectorFormatForProcessingMode; // ebx
  struct _GUID v9; // [rsp+40h] [rbp-28h] BYREF
  LPVOID pv; // [rsp+80h] [rbp+18h] BYREF

  pv = 0LL;
  CEndpointCharacteristics::GetExclusiveModeProcessingModeConfiguration(this, 0, &v9, 0LL, 0LL);
  *a3 = 0LL;
  v5 = v9;
  ConnectorFormatForProcessingMode = CEndpointCharacteristics::GetConnectorFormatForProcessingMode(
                                       this,
                                       0,
                                       &v9,
                                       (struct tWAVEFORMATEX **)&pv);
  if ( ConnectorFormatForProcessingMode >= 0 )
  {
    v9 = v5;
    ConnectorFormatForProcessingMode = CEndpointCharacteristics::GetMinProcessingPeriodForExclusiveMode(
                                         this,
                                         v6,
                                         (struct tWAVEFORMATEX *)pv,
                                         &v9,
                                         a3);
  }
  CoTaskMemFree(pv);
  return (unsigned int)ConnectorFormatForProcessingMode;
}
