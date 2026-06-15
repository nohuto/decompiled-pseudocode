/*
 * XREFs of ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x1800108F0
 * Callers:
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18000E870 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800443E0 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AA50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
        __int64 a1,
        __int64 *a2)
{
  int v2; // edi
  int v4; // eax
  bool v6; // sf
  int v7; // edi
  __int64 v8; // rax
  _QWORD *v9; // rdi
  __int64 v11; // rbp
  __int64 v12; // rsi
  std::_Ref_count_base *v13; // rcx

  v2 = *(_DWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 12);
  if ( v2 != v4 )
    goto LABEL_7;
  if ( v4 )
  {
    v6 = (v2 & 0x40000000) != 0;
    v7 = 2 * v2;
    if ( v6 || (unsigned int)v7 > 0x7FFFFFF )
      return 0LL;
  }
  else
  {
    v7 = 1;
  }
  v8 = _o__recalloc(*(_QWORD *)a1, v7, 16LL);
  if ( !v8 )
    return 0LL;
  *(_DWORD *)(a1 + 12) = v7;
  *(_QWORD *)a1 = v8;
LABEL_7:
  v9 = (_QWORD *)(*(_QWORD *)a1 + 16LL * *(int *)(a1 + 8));
  if ( v9 )
  {
    *v9 = 0LL;
    v9[1] = 0LL;
    v11 = a2[1];
    v12 = *a2;
    if ( v11 )
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    v13 = (std::_Ref_count_base *)v9[1];
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    v9[1] = v11;
    *v9 = v12;
  }
  ++*(_DWORD *)(a1 + 8);
  return 1LL;
}
