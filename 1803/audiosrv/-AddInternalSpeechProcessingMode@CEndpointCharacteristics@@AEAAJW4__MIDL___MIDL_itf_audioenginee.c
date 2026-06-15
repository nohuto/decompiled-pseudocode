/*
 * XREFs of ?AddInternalSpeechProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180051CEC
 * Callers:
 *     ?AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180051604 (-AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?AddEnhancementsDisabledProcessingMode@SystemEffectDescriptor@@QEAAJU_GUID@@@Z @ 0x180053194 (-AddEnhancementsDisabledProcessingMode@SystemEffectDescriptor@@QEAAJU_GUID@@@Z.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800532AC (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180053910 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180053A28 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180053A60 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ?Add@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z @ 0x1800E9990 (-Add@-$CSimpleMap@U_GUID@@U1@V-$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z.c)
 *     ?RemoveAt@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z @ 0x1800ECFDC (-RemoveAt@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::AddInternalSpeechProcessingMode(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2)
{
  char *v3; // rdi
  SystemEffectDescriptor *v4; // rdi
  int OverridingChain; // ebx
  __int64 v7; // rdx
  __int64 v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-98h]
  _BYTE v12[56]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v13; // [rsp+88h] [rbp-30h]
  struct _GUID v14; // [rsp+90h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  if ( *((_DWORD *)this + 37) != 1 )
    return 0LL;
  v3 = (char *)this + 64;
  if ( !*((_DWORD *)this + 10) )
  {
    *((_DWORD *)this + 10) = 1;
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((char *)this + 64);
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                         v3,
                         &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) )
    {
      *((_DWORD *)this + 346) = 1;
      if ( (unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                           (char *)this + 1400,
                           v7,
                           &GUID_00000000_0000_0000_0000_000000000000) )
        goto LABEL_4;
      v8 = 1747LL;
    }
    else
    {
      v8 = 1743LL;
    }
LABEL_9:
    OverridingChain = -2147024882;
    goto LABEL_11;
  }
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                       (char *)this + 64,
                       &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) != -1 )
    goto LABEL_4;
  v9 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
         v3,
         &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
  if ( v9 == -1 || !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAt(v3, v9) )
  {
    OverridingChain = -2147418113;
    v8 = 1755LL;
    goto LABEL_11;
  }
  if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                        v3,
                        &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) )
  {
    v8 = 1756LL;
    goto LABEL_9;
  }
  if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                        (char *)this + 1400,
                        v10,
                        &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
  {
    v8 = 1758LL;
    goto LABEL_9;
  }
LABEL_4:
  v13 = 0LL;
  v4 = (CEndpointCharacteristics *)((char *)this + 616);
  v14 = GUID_73fb9979_623f_41a6_bf1c_ba817c519c4f;
  OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                      (CEndpointCharacteristics *)((char *)this + 616),
                      2,
                      0,
                      (__int64)v12);
  if ( OverridingChain < 0 )
  {
    v8 = 1764LL;
  }
  else
  {
    v14 = GUID_8335b450_c436_4bb7_8639_f4bb0553e6e0;
    OverridingChain = SystemEffectDescriptor::AddEnhancementsDisabledProcessingMode(v4, &v14);
    if ( OverridingChain >= 0 )
      return 0LL;
    v8 = 1767LL;
  }
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)OverridingChain,
    v11);
  return (unsigned int)OverridingChain;
}
