/*
 * XREFs of ?AddInternalSpeechProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800B12F4
 * Callers:
 *     ?AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x1800B1548 (-AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180009C7C (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18005ADF8 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Add@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z @ 0x1800B1194 (-Add@-$CSimpleMap@U_GUID@@U1@V-$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z.c)
 *     ?Remove@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800B792C (-Remove@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x1800B79E4 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?AddEnhancementsDisabledProcessingMode@SystemEffectDescriptor@@QEAAJU_GUID@@@Z @ 0x1800BBD7C (-AddEnhancementsDisabledProcessingMode@SystemEffectDescriptor@@QEAAJU_GUID@@@Z.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800BC460 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 */

__int64 __fastcall CEndpointCharacteristics::AddInternalSpeechProcessingMode(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  int OverridingChain; // ebx
  char *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdx
  GUID v10; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v11[56]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v12; // [rsp+88h] [rbp-30h]
  struct _GUID v13; // [rsp+90h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  if ( *((_DWORD *)this + 37) == 1 )
  {
    if ( *((_DWORD *)this + 10) )
    {
      v7 = (char *)this + 64;
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                           (__int64 *)this + 8,
                           &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
      {
        if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(
                              v7,
                              &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
        {
          OverridingChain = -2147418113;
          v4 = 1773LL;
          goto LABEL_6;
        }
        if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                              (__int64)v7,
                              &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) )
        {
          v4 = 1774LL;
          goto LABEL_5;
        }
        if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                              (__int64 *)this + 175,
                              v8,
                              &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
        {
          v4 = 1776LL;
          goto LABEL_5;
        }
      }
    }
    else
    {
      *((_DWORD *)this + 10) = 1;
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((char *)this + 64);
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                            (__int64)this + 64,
                            &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) )
      {
        v4 = 1761LL;
LABEL_5:
        OverridingChain = -2147024882;
LABEL_6:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v4,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)OverridingChain);
        return (unsigned int)OverridingChain;
      }
      *((_DWORD *)this + 346) = 1;
      if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                            (__int64 *)this + 175,
                            v3,
                            &GUID_00000000_0000_0000_0000_000000000000) )
      {
        v4 = 1765LL;
        goto LABEL_5;
      }
    }
    v12 = 0LL;
    v13 = GUID_73fb9979_623f_41a6_bf1c_ba817c519c4f;
    v10 = GUID_8335b450_c436_4bb7_8639_f4bb0553e6e0;
    OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                        (int)this + 616,
                        (unsigned int)&v10,
                        1,
                        (unsigned int)&v13,
                        2,
                        0,
                        (__int64)v11);
    if ( OverridingChain < 0 )
    {
      v9 = 1782LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v9,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)OverridingChain);
      return (unsigned int)OverridingChain;
    }
    v13 = GUID_8335b450_c436_4bb7_8639_f4bb0553e6e0;
    OverridingChain = SystemEffectDescriptor::AddEnhancementsDisabledProcessingMode(
                        (CEndpointCharacteristics *)((char *)this + 616),
                        &v13);
    if ( OverridingChain < 0 )
    {
      v9 = 1785LL;
      goto LABEL_19;
    }
  }
  return 0LL;
}
