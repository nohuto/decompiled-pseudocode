/*
 * XREFs of ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x180046104
 * Callers:
 *     ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000D390 (-CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioe.c)
 *     ?CreateOverrideChainLists@SystemEffectDescriptor@@AEAAJIPEBU_GUID@@W4SED_APOPLACEMENT@@AEAV?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@2@Z @ 0x180010250 (-CreateOverrideChainLists@SystemEffectDescriptor@@AEAAJIPEBU_GUID@@W4SED_APOPLACEMENT@@AEAV-$CSi.c)
 *     ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x1800334D4 (-GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W.c)
 *     ?GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ @ 0x180041FC8 (-GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x18004415C (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x1800BC6DC (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180033760 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?RemoveAt@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z @ 0x180046088 (-RemoveAt@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z.c)
 */

__int64 __fastcall ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(__int64 a1, __int64 *a2)
{
  int v2; // edi
  void *v5; // rax
  int v6; // eax
  int v7; // ebp
  __int64 v8; // r14
  int v9; // edi
  __int64 v10; // r15
  _OWORD *v11; // rax
  int v13; // edi
  bool v14; // sf
  __int64 v15; // rax

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 == *((_DWORD *)a2 + 2) )
  {
    while ( v2 > 0 )
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAt(a1, --v2);
  }
  else
  {
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(a1);
    v5 = calloc(*((int *)a2 + 2), 0x10uLL);
    *(_QWORD *)a1 = v5;
    if ( v5 )
      *(_DWORD *)(a1 + 12) = *((_DWORD *)a2 + 2);
  }
  v6 = *((_DWORD *)a2 + 2);
  v7 = 0;
  if ( v6 > 0 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 < 0 || v7 >= v6 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x180078F62LL);
      }
      v9 = *(_DWORD *)(a1 + 8);
      v10 = *a2;
      if ( v9 != *(_DWORD *)(a1 + 12) )
        goto LABEL_9;
      if ( *(_DWORD *)(a1 + 12) )
      {
        v14 = (v9 & 0x40000000) != 0;
        v13 = 2 * v9;
        if ( v14 || (unsigned int)v13 > 0x7FFFFFF )
          goto LABEL_12;
      }
      else
      {
        v13 = 1;
      }
      v15 = _o__recalloc(*(_QWORD *)a1, v13, 16LL);
      if ( v15 )
      {
        *(_DWORD *)(a1 + 12) = v13;
        *(_QWORD *)a1 = v15;
LABEL_9:
        v11 = (_OWORD *)(*(_QWORD *)a1 + 16LL * *(int *)(a1 + 8));
        if ( v11 )
          *v11 = *(_OWORD *)(v8 + v10);
        ++*(_DWORD *)(a1 + 8);
      }
LABEL_12:
      v6 = *((_DWORD *)a2 + 2);
      ++v7;
      v8 += 16LL;
    }
    while ( v7 < v6 );
  }
  return a1;
}
