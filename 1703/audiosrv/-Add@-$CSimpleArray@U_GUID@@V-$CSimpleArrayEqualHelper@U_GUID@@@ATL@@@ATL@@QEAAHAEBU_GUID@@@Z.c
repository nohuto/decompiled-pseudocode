/*
 * XREFs of ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800336DC
 * Callers:
 *     ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000D390 (-CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioe.c)
 *     _lambda_2cdbfdbf6a906d093ee55c9100591272_::operator() @ 0x18000FC80 (_lambda_2cdbfdbf6a906d093ee55c9100591272_--operator().c)
 *     ?ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z @ 0x180010B20 (-ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z.c)
 *     ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x1800334D4 (-GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W.c)
 *     ?CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@I1AEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x180041770 (-CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GU.c)
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x180042494 (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180042940 (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?AddInternalSpeechProcessingMode@CEndpointCharacteristics@@AEAAJXZ @ 0x180042EA8 (-AddInternalSpeechProcessingMode@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x18004363C (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z.c)
 *     ?GetAPOModesSupportedForStreaming@CEndpointCharacteristics@@AEAAJPEAUIPropertyStore@@U_tagpropertykey@@_NPEAVCAudioSignalProcessingModeArray@@@Z @ 0x180043C90 (-GetAPOModesSupportedForStreaming@CEndpointCharacteristics@@AEAAJPEAUIPropertyStore@@U_tagproper.c)
 *     ?SeparateStreamingModes@SystemEffectDescriptor@@AEAAJAEAVCAudioSignalProcessingModeArray@@00@Z @ 0x1800447C4 (-SeparateStreamingModes@SystemEffectDescriptor@@AEAAJAEAVCAudioSignalProcessingModeArray@@00@Z.c)
 *     _lambda_667eb01a999704ac1c933d543c16abf4_::operator() @ 0x18004C4DC (_lambda_667eb01a999704ac1c933d543c16abf4_--operator().c)
 *     ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@@Z @ 0x1800C127C (-SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(__int64 a1, _OWORD *a2)
{
  int v2; // edi
  int v5; // edi
  __int64 v6; // rax
  _OWORD *v7; // rcx
  bool v9; // sf

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 == *(_DWORD *)(a1 + 12) )
  {
    if ( *(_DWORD *)(a1 + 12) )
    {
      v9 = (v2 & 0x40000000) != 0;
      v5 = 2 * v2;
      if ( v9 || (unsigned int)v5 > 0x7FFFFFF )
        return 0LL;
    }
    else
    {
      v5 = 1;
    }
    v6 = _o__recalloc(*(_QWORD *)a1, v5, 16LL);
    if ( v6 )
    {
      *(_DWORD *)(a1 + 12) = v5;
      *(_QWORD *)a1 = v6;
      goto LABEL_6;
    }
    return 0LL;
  }
LABEL_6:
  v7 = (_OWORD *)(*(_QWORD *)a1 + 16LL * *(int *)(a1 + 8));
  if ( v7 )
    *v7 = *a2;
  ++*(_DWORD *)(a1 + 8);
  return 1LL;
}
