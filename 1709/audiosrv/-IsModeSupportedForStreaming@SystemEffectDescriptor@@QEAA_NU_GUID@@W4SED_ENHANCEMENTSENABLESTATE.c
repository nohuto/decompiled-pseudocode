/*
 * XREFs of ?IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x1800235B4
 * Callers:
 *     ?IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180020D74 (-IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?IsSFXModeSupported@CEndpointCharacteristics@@AEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180021690 (-IsSFXModeSupported@CEndpointCharacteristics@@AEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180021B6C (-GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180009C7C (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??A?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAAEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@H@Z @ 0x180020164 (--A-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ?GetOverridingChainDescriptorIndex@SystemEffectDescriptor@@AEAAHU_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x18002378C (-GetOverridingChainDescriptorIndex@SystemEffectDescriptor@@AEAAHU_GUID@@W4SED_RESOLVEOPT@@@Z.c)
 */

bool __fastcall SystemEffectDescriptor::IsModeSupportedForStreaming(__int64 a1, _QWORD *a2, int a3)
{
  int OverridingChainDescriptorIndex; // eax
  __int64 v5; // r11
  bool v6; // zf
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  if ( a3 )
  {
    v6 = *(_BYTE *)(a1 + 52) == 0;
    v9 = *(_OWORD *)a2;
    v8 = v9;
    OverridingChainDescriptorIndex = SystemEffectDescriptor::GetOverridingChainDescriptorIndex(a1, &v8, v6);
    if ( OverridingChainDescriptorIndex == -1 )
    {
      if ( !*(_QWORD *)(a1 + 16)
        || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*(__int64 **)(a1 + 16), &v9) == -1 )
      {
        v5 = 0LL;
      }
    }
    else
    {
      v5 = *(_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                        a1 + 32,
                        OverridingChainDescriptorIndex);
    }
    v6 = v5 == 0;
  }
  else
  {
    v6 = (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find((__int64 *)a1, a2) == -1;
  }
  return !v6;
}
