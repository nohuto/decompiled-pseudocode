/*
 * XREFs of ?GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x180030384
 * Callers:
 *     ?GetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@HPEA_J1@Z @ 0x180030284 (-GetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@HPEA_J1@Z.c)
 *     AudioServerGetDevicePeriod @ 0x18008EC00 (AudioServerGetDevicePeriod.c)
 * Callees:
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180021268 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180022274 (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEA_J@Z @ 0x1800225C0 (-GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audio.c)
 *     ?GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180022664 (-GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::GetMinProcessingPeriodForExclusiveMode(
        struct CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        __int64 *a3)
{
  struct _GUID v5; // xmm6
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v6; // edx
  int ProposedConnectorFormatForProcessingMode; // ebx
  struct _GUID v9; // [rsp+40h] [rbp-28h] BYREF
  LPVOID pv; // [rsp+80h] [rbp+18h] BYREF

  pv = 0LL;
  CEndpointCharacteristics::GetExclusiveModeProcessingModeConfiguration(this, 0, &v9, 0LL, 0LL);
  *a3 = 0LL;
  v5 = v9;
  ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
                                               this,
                                               eHostProcessConnector,
                                               &v9,
                                               (struct tWAVEFORMATEX **)&pv);
  if ( ProposedConnectorFormatForProcessingMode < 0 )
    ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetDeviceFormat(
                                                 this,
                                                 0,
                                                 0,
                                                 0,
                                                 (struct tWAVEFORMATEX **)&pv);
  if ( ProposedConnectorFormatForProcessingMode >= 0 )
  {
    v9 = v5;
    ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetMinProcessingPeriodForExclusiveMode(
                                                 this,
                                                 v6,
                                                 (struct tWAVEFORMATEX *)pv,
                                                 &v9,
                                                 a3);
  }
  CoTaskMemFree(pv);
  return (unsigned int)ProposedConnectorFormatForProcessingMode;
}
