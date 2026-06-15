/*
 * XREFs of ?AddInternalSpeechProcessingMode@CEndpointCharacteristics@@AEAAJXZ @ 0x180042EA8
 * Callers:
 *     ?AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x1800428E0 (-AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800336DC (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180033760 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033790 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18004421C (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ?Remove@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800461C8 (-Remove@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Add@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z @ 0x1800BBE4C (-Add@-$CSimpleMap@U_GUID@@U1@V-$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::AddInternalSpeechProcessingMode(CEndpointCharacteristics *this)
{
  char *v2; // rbx
  int OverridingChain; // eax
  unsigned int v4; // ebx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-98h]
  int v10; // [rsp+20h] [rbp-98h]
  GUID v11; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v12[56]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v13; // [rsp+88h] [rbp-30h]
  GUID v14; // [rsp+90h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  if ( *((_DWORD *)this + 37) != 1 )
    return 0LL;
  if ( !*((_DWORD *)this + 10) )
  {
    *((_DWORD *)this + 10) = 1;
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)this + 64);
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                         (__int64)this + 64,
                         &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) )
    {
      *((_DWORD *)this + 344) = 1;
      if ( (unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                           (char *)this + 1392,
                           v6,
                           &GUID_00000000_0000_0000_0000_000000000000) )
        goto LABEL_4;
      v7 = 1762LL;
    }
    else
    {
      v7 = 1758LL;
    }
    goto LABEL_8;
  }
  v2 = (char *)this + 64;
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                       (__int64 *)this + 8,
                       &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
  {
    if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(
                          v2,
                          &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
    {
      v4 = -2147418113;
      v7 = 1770LL;
      goto LABEL_10;
    }
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                         (__int64)v2,
                         &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) )
    {
      if ( (unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                           (char *)this + 1392,
                           v8,
                           &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
        goto LABEL_4;
      v7 = 1773LL;
    }
    else
    {
      v7 = 1771LL;
    }
LABEL_8:
    v4 = -2147024882;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v4,
      v9);
    return v4;
  }
LABEL_4:
  v13 = 0LL;
  v14 = GUID_73fb9979_623f_41a6_bf1c_ba817c519c4f;
  v11 = GUID_8335b450_c436_4bb7_8639_f4bb0553e6e0;
  OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                      (int)this + 608,
                      (unsigned int)&v11,
                      1,
                      (unsigned int)&v14,
                      2,
                      0,
                      (__int64)v12);
  v4 = OverridingChain;
  if ( OverridingChain >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x6F3,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)OverridingChain,
    v10);
  return v4;
}
