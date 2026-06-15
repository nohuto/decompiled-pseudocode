/*
 * XREFs of ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800BC078
 * Callers:
 *     ?AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x1800B1A7C (-AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x1800B4464 (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800BC460 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 * Callees:
 *     ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x1800200A0 (-Add@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002A270 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x1800B79E4 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x1800BBB78 (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     ?CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@I1AEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x1800BBDB4 (-CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GU.c)
 *     ?CreateOverrideChainLists@SystemEffectDescriptor@@AEAAJIPEBU_GUID@@W4SED_APOPLACEMENT@@AEAV?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@2@Z @ 0x1800BBF50 (-CreateOverrideChainLists@SystemEffectDescriptor@@AEAAJIPEBU_GUID@@W4SED_APOPLACEMENT@@AEAV-$CSi.c)
 *     ?MarkAsUnresolved@SystemEffectChainDescriptor@@IEAAJV?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800BD1A8 (-MarkAsUnresolved@SystemEffectChainDescriptor@@IEAAJV-$function@$$A6AJPEAVSystemEffectDescriptor.c)
 *     ?RemoveModesFromOverridingChains@SystemEffectDescriptor@@AEAAXAEAVCAudioSignalProcessingModeArray@@@Z @ 0x1800BD374 (-RemoveModesFromOverridingChains@SystemEffectDescriptor@@AEAAXAEAVCAudioSignalProcessingModeArra.c)
 *     ?SeparateStreamingModes@SystemEffectDescriptor@@AEAAJAEAVCAudioSignalProcessingModeArray@@00@Z @ 0x1800BD604 (-SeparateStreamingModes@SystemEffectDescriptor@@AEAAJAEAVCAudioSignalProcessingModeArray@@00@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall SystemEffectDescriptor::CreateOverridingChain(
        SystemEffectDescriptor *this,
        struct CAudioSignalProcessingModeArray *a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7)
{
  __int64 v11; // rbx
  int EffectChain; // eax
  int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // rcx
  void (__fastcall *v16)(__int64, __int64); // rax
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rax
  struct _GUID *v21; // rcx
  unsigned int v22; // r9d
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  std::_Ref_count_base *v27[2]; // [rsp+38h] [rbp-71h] BYREF
  const struct _GUID *v28; // [rsp+48h] [rbp-61h] BYREF
  __int64 v29; // [rsp+50h] [rbp-59h]
  const struct _GUID *v30; // [rsp+58h] [rbp-51h] BYREF
  __int64 v31; // [rsp+60h] [rbp-49h]
  __int64 v32; // [rsp+68h] [rbp-41h] BYREF
  __int64 v33; // [rsp+70h] [rbp-39h]
  __int64 v34; // [rsp+78h] [rbp-31h] BYREF
  __int64 v35; // [rsp+80h] [rbp-29h]
  __int64 v36; // [rsp+90h] [rbp-19h]
  _BYTE v37[64]; // [rsp+98h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+47h]

  v36 = -2LL;
  SystemEffectDescriptor::RemoveModesFromOverridingChains(this, a2);
  v34 = 0LL;
  v35 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  SystemEffectDescriptor::SeparateStreamingModes(
    this,
    a2,
    (struct CAudioSignalProcessingModeArray *)&v34,
    (struct CAudioSignalProcessingModeArray *)&v32);
  v30 = 0LL;
  v31 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  SystemEffectDescriptor::CreateOverrideChainLists((__int64)this, a3, a4, a5, (__int64)&v30, &v28);
  v11 = a7;
  if ( (int)v35 > 0 )
  {
    *(_OWORD *)v27 = 0LL;
    EffectChain = SystemEffectChainDescriptor::CreateEffectChain((__int64)&v34, v29, v28, 0, 0LL, (__int64 *)v27);
    v13 = EffectChain;
    if ( EffectChain < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x15A,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)(unsigned int)EffectChain);
      if ( v27[1] )
        std::_Ref_count_base::_Decref(v27[1]);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v28);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v30);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v32);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v34);
      v11 = a7;
LABEL_6:
      v15 = *(_QWORD *)(v11 + 56);
      if ( !v15 )
        return (unsigned int)v13;
      v16 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 32LL);
LABEL_8:
      LOBYTE(v14) = v15 != v11;
      v16(v15, v14);
      *(_QWORD *)(v11 + 56) = 0LL;
      return (unsigned int)v13;
    }
    if ( *(_QWORD *)(a7 + 56) )
    {
      v18 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
              (__int64)v37,
              a7);
      v19 = SystemEffectChainDescriptor::MarkAsUnresolved(v27[0], v18);
      v13 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x15B,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)(unsigned int)v19);
LABEL_13:
        if ( v27[1] )
          std::_Ref_count_base::_Decref(v27[1]);
        ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v28);
        ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v30);
        ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v32);
        ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v34);
        goto LABEL_6;
      }
    }
    if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                          (__int64)this + 32,
                          (__int64 *)v27) )
    {
      v13 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15C,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)0x8007000ELL);
      if ( v27[1] )
        std::_Ref_count_base::_Decref(v27[1]);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v28);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v30);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v32);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v34);
      v15 = *(_QWORD *)(a7 + 56);
      if ( !v15 )
        return (unsigned int)v13;
      v16 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 32LL);
      goto LABEL_8;
    }
    if ( v27[1] )
      std::_Ref_count_base::_Decref(v27[1]);
  }
  if ( (int)v33 > 0 )
  {
    *(_OWORD *)v27 = 0LL;
    if ( a6 == 1 && (v20 = *((_QWORD *)this + 2)) != 0 )
    {
      v21 = *(struct _GUID **)(v20 + 56);
      v22 = *(_DWORD *)(v20 + 64);
    }
    else
    {
      v21 = 0LL;
      v22 = 0;
    }
    v13 = SystemEffectChainDescriptor::CreateEffectChain((__int64)&v32, v31, v30, v22, v21, (__int64 *)v27);
    if ( v13 < 0 )
    {
      v23 = 359LL;
LABEL_30:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v23,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)(unsigned int)v13);
      goto LABEL_13;
    }
    if ( *(_QWORD *)(a7 + 56) )
    {
      v24 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
              (__int64)v37,
              a7);
      v13 = SystemEffectChainDescriptor::MarkAsUnresolved(v27[0], v24);
      if ( v13 < 0 )
      {
        v23 = 360LL;
        goto LABEL_30;
      }
    }
    if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                          (__int64)this + 32,
                          (__int64 *)v27) )
    {
      v13 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x169,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_13;
    }
    if ( v27[1] )
      std::_Ref_count_base::_Decref(v27[1]);
  }
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v28);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v30);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v32);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v34);
  v26 = *(_QWORD *)(a7 + 56);
  if ( v26 )
  {
    LOBYTE(v25) = v26 != a7;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 32LL))(v26, v25);
    *(_QWORD *)(a7 + 56) = 0LL;
  }
  return 0LL;
}
