/*
 * XREFs of ?GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180050D58
 * Callers:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PEAH@Z @ 0x1800397A4 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PE.c)
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180051DF8 (-SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoin.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x180017ECC (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x180050DD4 (-GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingMode.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180053A28 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 */

struct _GUID *__fastcall CEndpointCharacteristics::GetDefaultConnectorProcessingModeForSpatialStream(
        CEndpointCharacteristics *this,
        struct _GUID *__return_ptr retstr,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3)
{
  __int64 SupportedConnectorModesInternal; // rax
  __int64 v5; // r11
  GUID v6; // xmm0
  __int64 v7; // r11
  struct _GUID *result; // rax

  SupportedConnectorModesInternal = CEndpointCharacteristics::GetSupportedConnectorModesInternal(this, 0LL, 0LL);
  if ( *(_DWORD *)(SupportedConnectorModesInternal + 8) )
  {
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         SupportedConnectorModesInternal,
                         &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
    {
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                           v5,
                           &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) == -1 )
        v6 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v7, 0);
      else
        v6 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    }
    else
    {
      v6 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    }
  }
  else
  {
    v6 = GUID_00000000_0000_0000_0000_000000000000;
  }
  result = retstr;
  *retstr = v6;
  return result;
}
