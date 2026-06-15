/*
 * XREFs of ??1?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAA@XZ @ 0x18007B53C
 * Callers:
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18000E870 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$7 @ 0x18005A0F0 (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$7.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$56 @ 0x18005A114 (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$56.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$67 @ 0x18005A12C (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$67.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$76 @ 0x18005A144 (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$76.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$125 @ 0x18005A168 (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$125.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$136 @ 0x18005A180 (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$136.c)
 *     _SystemEffectDescriptor::ResolveAllOverridingChains_::_1_::dtor$1 @ 0x18005A27C (_SystemEffectDescriptor--ResolveAllOverridingChains_--_1_--dtor$1.c)
 * Callees:
 *     ??_G?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z @ 0x180010A10 (--_G-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z.c)
 */

void __fastcall ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(
        __int64 a1)
{
  int i; // edi

  if ( *(_QWORD *)a1 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 8); ++i )
      std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(*(_QWORD *)a1 + 16LL * i);
    free(*(void **)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
}
