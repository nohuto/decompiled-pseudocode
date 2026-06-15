/*
 * XREFs of ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180095BDC
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800B94C8 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x1800BBE98 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x180017ECC (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180052E4C (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180053A60 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?GetAPOSupportedProcessingModes@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAVCAudioSignalProcessingModeArray@@@Z @ 0x180095C9C (-GetAPOSupportedProcessingModes@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(
        CEndpointCharacteristics *this,
        __int32 a2)
{
  unsigned int v4; // ebx
  int v5; // edi
  __int64 v7; // [rsp+28h] [rbp-30h] BYREF
  __int64 v8; // [rsp+30h] [rbp-28h]
  struct _GUID v9; // [rsp+40h] [rbp-18h] BYREF

  v4 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  if ( CEndpointCharacteristics::IsConnectorModeSupported(this, a2, &v9) )
  {
    CEndpointCharacteristics::GetAPOSupportedProcessingModes(
      this,
      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
      (struct CAudioSignalProcessingModeArray *)&v7);
    v5 = 0;
    if ( (int)v8 > 0 )
    {
      while ( 1 )
      {
        v9 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)&v7, v5);
        if ( !CEndpointCharacteristics::IsConnectorModeSupported(this, a2, &v9) )
          break;
        if ( ++v5 >= (int)v8 )
          goto LABEL_7;
      }
      v4 = 1;
    }
  }
LABEL_7:
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v7);
  return v4;
}
