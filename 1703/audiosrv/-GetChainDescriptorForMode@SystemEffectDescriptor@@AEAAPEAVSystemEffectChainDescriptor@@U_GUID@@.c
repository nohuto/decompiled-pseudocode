/*
 * XREFs of ?GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x180033678
 * Callers:
 *     ?IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x18003361C (-IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE.c)
 *     ?GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEAPEAU2@W4SED_RESOLVEOPT@@@Z @ 0x18007B414 (-GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEA.c)
 * Callees:
 *     ?GetOverridingChainDescriptorIndex@SystemEffectDescriptor@@AEAAHU_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x1800107FC (-GetOverridingChainDescriptorIndex@SystemEffectDescriptor@@AEAAHU_GUID@@W4SED_RESOLVEOPT@@@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x1800109B0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033790 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 */

__int64 __fastcall SystemEffectDescriptor::GetChainDescriptorForMode(__int64 a1, __int128 *a2, int a3)
{
  int OverridingChainDescriptorIndex; // eax
  __int64 v6; // r11
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v8 = *a2;
  OverridingChainDescriptorIndex = SystemEffectDescriptor::GetOverridingChainDescriptorIndex(a1, &v8, a3);
  if ( OverridingChainDescriptorIndex != -1 )
    return *(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                        a1 + 32,
                        OverridingChainDescriptorIndex);
  if ( !*(_QWORD *)(a1 + 16)
    || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*(_QWORD *)(a1 + 16), a2) == -1 )
  {
    return 0LL;
  }
  return v6;
}
