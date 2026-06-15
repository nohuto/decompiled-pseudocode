/*
 * XREFs of ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800BC460
 * Callers:
 *     ?AddInternalSpeechProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800B12F4 (-AddInternalSpeechProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioenginee.c)
 *     ?AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ @ 0x1800B16C8 (-AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x1800B1A7C (-AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800B21B4 (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18005ADF8 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x1800B79E4 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x1800BBB78 (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800BC078 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemEffectDescriptor::CreateOverridingChain(
        SystemEffectDescriptor *a1,
        _OWORD *a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7)
{
  unsigned int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rcx
  void (__fastcall *v14)(__int64, __int64); // rax
  __int64 v16; // rax
  int OverridingChain; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // [rsp+58h] [rbp-11h] BYREF
  int v21; // [rsp+60h] [rbp-9h]
  int v22; // [rsp+64h] [rbp-5h]
  _BYTE v23[64]; // [rsp+68h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+47h]

  v20 = 0LL;
  v21 = 0;
  v22 = 0;
  if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add((__int64)&v20, a2) )
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x138,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v20);
    v12 = a7;
    v13 = *(_QWORD *)(a7 + 56);
    if ( !v13 )
      return v10;
    v14 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 32LL);
LABEL_4:
    LOBYTE(v11) = v13 != v12;
    v14(v13, v11);
    *(_QWORD *)(v12 + 56) = 0LL;
    return v10;
  }
  v12 = a7;
  v16 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
          (__int64)v23,
          a7);
  OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                      a1,
                      (struct CAudioSignalProcessingModeArray *)&v20,
                      a3,
                      a4,
                      a5,
                      a6,
                      v16);
  v10 = OverridingChain;
  if ( OverridingChain < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x139,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)OverridingChain);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v20);
    v13 = *(_QWORD *)(a7 + 56);
    if ( !v13 )
      return v10;
    v14 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 32LL);
    goto LABEL_4;
  }
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v20);
  v19 = *(_QWORD *)(a7 + 56);
  if ( v19 )
  {
    LOBYTE(v18) = v19 != a7;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 32LL))(v19, v18);
    *(_QWORD *)(a7 + 56) = 0LL;
  }
  return 0LL;
}
