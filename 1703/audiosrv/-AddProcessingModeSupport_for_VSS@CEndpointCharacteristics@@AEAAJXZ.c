/*
 * XREFs of ?AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ @ 0x180043044
 * Callers:
 *     ?AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x1800428E0 (-AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180032CDC (-IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180033474 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180033760 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033790 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x18004415C (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18004421C (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18004AE50 (IsGetDefaultSpatialRenderingModePresent.c)
 *     ?GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18004CE8C (-GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::AddProcessingModeSupport_for_VSS(CEndpointCharacteristics *this)
{
  unsigned int v2; // r15d
  int v3; // r14d
  __int64 *SupportedConnectorModes; // r13
  int DefaultEffectChainClsids; // eax
  unsigned int v6; // ebx
  struct _GUID **v7; // r12
  __int64 v8; // xmm6_8
  struct _GUID v9; // xmm7
  struct _GUID v10; // xmm0
  __int64 (__fastcall **v11)(); // r11
  int v13; // eax
  int OverridingChain; // eax
  __int64 v15; // rdx
  BOOL v16; // r14d
  __int64 (__fastcall **v17)(); // r11
  int v18; // [rsp+28h] [rbp-A9h]
  int v19; // [rsp+28h] [rbp-A9h]
  GUID v20; // [rsp+48h] [rbp-89h] BYREF
  unsigned int v21; // [rsp+58h] [rbp-79h] BYREF
  __int64 (__fastcall **v22)(); // [rsp+60h] [rbp-71h] BYREF
  struct _GUID v23; // [rsp+68h] [rbp-69h]
  __int64 v24; // [rsp+78h] [rbp-59h]
  __int64 (__fastcall ***v25)(); // [rsp+98h] [rbp-39h]
  __int64 v26; // [rsp+A0h] [rbp-31h]
  struct _GUID v27; // [rsp+A8h] [rbp-29h] BYREF
  __int64 v28; // [rsp+B8h] [rbp-19h]
  CLSID pClsid; // [rsp+C8h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]

  v26 = -2LL;
  v2 = 0;
  if ( *((_DWORD *)this + 37)
    || (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(this)
    && !(unsigned int)IsVirtualSurroundAllowedOnCurrentPlatform()
    || CoGetPSClsid(&GUID_b8bb0d7d_75ea_4359_abdf_d256f849d065, &pClsid) < 0 )
  {
    return 0LL;
  }
  *(_QWORD *)&v27.Data1 = this;
  *(_QWORD *)v27.Data4 = this;
  if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, 0) )
  {
    v3 = 0;
    v20 = (GUID)0LL;
    SupportedConnectorModes = (__int64 *)CEndpointCharacteristics::GetSupportedConnectorModes(this, 0LL, 0LL);
    DefaultEffectChainClsids = SystemEffectDescriptor::GetDefaultEffectChainClsids(
                                 (CEndpointCharacteristics *)((char *)this + 224),
                                 (struct CAudioSignalProcessingModeArray *)&v20,
                                 &v21,
                                 0LL);
    v6 = DefaultEffectChainClsids;
    if ( DefaultEffectChainClsids < 0 )
    {
      v15 = 1659LL;
      goto LABEL_28;
    }
    v7 = off_1800E5F10;
    v8 = v28;
    v9 = v27;
    do
    {
      v10 = **v7;
      v27 = v10;
      v21 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(SupportedConnectorModes, &v27);
      if ( v21 != -1
        || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find((__int64 *)&v20, &v27) != -1 )
      {
        v22 = v11;
        v23 = v9;
        v24 = v8;
        v25 = &v22;
        v27 = v10;
        DefaultEffectChainClsids = SystemEffectDescriptor::CreateOverridingChain(
                                     (int)this + 224,
                                     (unsigned int)&v27,
                                     1,
                                     (unsigned int)&unk_18012AC98,
                                     1,
                                     v21 != -1,
                                     (__int64)&v22);
        v6 = DefaultEffectChainClsids;
        if ( DefaultEffectChainClsids < 0 )
        {
          v15 = 1673LL;
          goto LABEL_28;
        }
        ++v3;
      }
      ++v2;
      ++v7;
    }
    while ( v2 < 3 );
    if ( v3
      || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         SupportedConnectorModes,
                         &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
    {
      goto LABEL_12;
    }
    v16 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
            SupportedConnectorModes,
            &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) != -1;
    v22 = v17;
    v23 = v9;
    v24 = v8;
    v25 = &v22;
    v27 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    DefaultEffectChainClsids = SystemEffectDescriptor::CreateOverridingChain(
                                 (int)this + 224,
                                 (unsigned int)&v27,
                                 1,
                                 (unsigned int)&unk_18012AC98,
                                 1,
                                 v16,
                                 (__int64)&v22);
    v6 = DefaultEffectChainClsids;
    if ( DefaultEffectChainClsids < 0 )
    {
      v15 = 1687LL;
      goto LABEL_28;
    }
    v27 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    if ( (unsigned int)CEndpointCharacteristics::IsAPOModeSupported(this, &v27, eHostProcessConnector)
      || (v25 = 0LL,
          v27 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3,
          DefaultEffectChainClsids = SystemEffectDescriptor::CreateOverridingChain(
                                       (int)this + 608,
                                       (unsigned int)&v27,
                                       0,
                                       0,
                                       2,
                                       v16,
                                       (__int64)&v22),
          v6 = DefaultEffectChainClsids,
          DefaultEffectChainClsids >= 0) )
    {
LABEL_12:
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v20);
      return 0LL;
    }
    v15 = 1694LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v15,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)DefaultEffectChainClsids,
      v18);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v20);
    return v6;
  }
  v13 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
          (__int64 *)this + 8,
          &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
  v22 = off_1800DDF50;
  v23 = v27;
  v24 = v28;
  v25 = &v22;
  v20 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                      (int)this + 224,
                      (unsigned int)&v20,
                      1,
                      (unsigned int)&unk_18012AC98,
                      1,
                      v13 != -1,
                      (__int64)&v22);
  v6 = OverridingChain;
  if ( OverridingChain >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x66D,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)OverridingChain,
    v19);
  return v6;
}
