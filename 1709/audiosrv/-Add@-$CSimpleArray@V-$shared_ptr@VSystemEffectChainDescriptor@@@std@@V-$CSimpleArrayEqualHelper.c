/*
 * XREFs of ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x1800200A0
 * Callers:
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180021110 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180023A10 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800BC078 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002A270 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
        __int64 a1,
        __int64 *a2)
{
  int v2; // ebx
  int v4; // eax
  int v6; // ebx
  __int64 v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rsi
  std::_Ref_count_base *v11; // rcx
  bool v13; // sf

  v2 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 12);
  if ( v2 != v4 )
    goto LABEL_7;
  if ( v4 )
  {
    v13 = (v2 & 0x40000000) != 0;
    v6 = 2 * v2;
    if ( v13 )
      return 0LL;
  }
  else
  {
    v6 = 1;
  }
  if ( (unsigned __int64)v6 > 0x7FFFFFF )
    return 0LL;
  v7 = _o__recalloc(*(_QWORD *)a1, v6, 16LL);
  if ( !v7 )
    return 0LL;
  *(_DWORD *)(a1 + 12) = v6;
  *(_QWORD *)a1 = v7;
LABEL_7:
  v8 = (_QWORD *)(*(_QWORD *)a1 + 16LL * *(int *)(a1 + 8));
  if ( v8 )
  {
    *v8 = 0LL;
    v8[1] = 0LL;
    v9 = *a2;
    v10 = a2[1];
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v11 = (std::_Ref_count_base *)v8[1];
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    v8[1] = v10;
    *v8 = v9;
  }
  ++*(_DWORD *)(a1 + 8);
  return 1LL;
}
