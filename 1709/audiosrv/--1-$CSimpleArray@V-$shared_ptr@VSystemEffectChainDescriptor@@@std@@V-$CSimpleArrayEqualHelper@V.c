/*
 * XREFs of ??1?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAA@XZ @ 0x18005AEB0
 * Callers:
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180021110 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180023A10 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     _SystemEffectDescriptor::ResolveAllOverridingChains_::_1_::dtor$1 @ 0x18003976C (_SystemEffectDescriptor--ResolveAllOverridingChains_--_1_--dtor$1.c)
 *     _DeriveAudioProcessingModeConfiguration_::_1_::dtor$1 @ 0x1800398EC (_DeriveAudioProcessingModeConfiguration_--_1_--dtor$1.c)
 *     _DeriveAudioProcessingModeConfiguration_::_1_::dtor$33 @ 0x18003991C (_DeriveAudioProcessingModeConfiguration_--_1_--dtor$33.c)
 *     _DeriveAudioProcessingModeConfiguration_::_1_::dtor$46 @ 0x180039934 (_DeriveAudioProcessingModeConfiguration_--_1_--dtor$46.c)
 *     _DeriveAudioProcessingModeConfiguration_::_1_::dtor$55 @ 0x18003994C (_DeriveAudioProcessingModeConfiguration_--_1_--dtor$55.c)
 *     _DeriveAudioProcessingModeConfiguration_::_1_::dtor$68 @ 0x180039964 (_DeriveAudioProcessingModeConfiguration_--_1_--dtor$68.c)
 *     _DeriveAudioProcessingModeConfiguration_::_1_::dtor$81 @ 0x18003997C (_DeriveAudioProcessingModeConfiguration_--_1_--dtor$81.c)
 *     _DeriveAudioProcessingModeConfiguration_::_1_::dtor$90 @ 0x180039994 (_DeriveAudioProcessingModeConfiguration_--_1_--dtor$90.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(
        __int64 a1)
{
  int v2; // esi
  __int64 v3; // rbp
  volatile signed __int32 *v4; // rdi

  if ( *(_QWORD *)a1 )
  {
    v2 = 0;
    if ( *(int *)(a1 + 8) > 0 )
    {
      v3 = 0LL;
      do
      {
        v4 = *(volatile signed __int32 **)(*(_QWORD *)a1 + v3 + 8);
        if ( v4 )
        {
          if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
            if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
          }
        }
        ++v2;
        v3 += 16LL;
      }
      while ( v2 < *(_DWORD *)(a1 + 8) );
    }
    free(*(void **)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
}
