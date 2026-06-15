/*
 * XREFs of ?AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ @ 0x1800B16C8
 * Callers:
 *     ?AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x1800B1548 (-AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180009C7C (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180020D74 (-IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180021110 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x1800216F8 (-GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingMode.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180034CF8 (IsGetDefaultSpatialRenderingModePresent.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x1800B79E4 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800BC460 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x1800BC5D4 (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::AddProcessingModeSupport_for_VSS(CEndpointCharacteristics *this)
{
  unsigned int v2; // r15d
  int v4; // eax
  int OverridingChain; // eax
  unsigned int v6; // ebx
  int v7; // r14d
  __int64 *SupportedConnectorModesInternal; // r13
  int DefaultEffectChainClsids; // eax
  __int64 v10; // rdx
  struct _GUID **v11; // r12
  __int64 v12; // xmm6_8
  struct _GUID v13; // xmm7
  struct _GUID v14; // xmm0
  __int64 (__fastcall **v15)(); // r11
  __int64 (__fastcall **v16)(); // r11
  GUID v17; // [rsp+48h] [rbp-89h] BYREF
  unsigned int v18; // [rsp+58h] [rbp-79h] BYREF
  __int64 (__fastcall **v19)(); // [rsp+60h] [rbp-71h] BYREF
  struct _GUID v20; // [rsp+68h] [rbp-69h]
  __int64 v21; // [rsp+78h] [rbp-59h]
  __int64 (__fastcall ***v22)(); // [rsp+98h] [rbp-39h]
  __int64 v23; // [rsp+A0h] [rbp-31h]
  struct _GUID v24; // [rsp+A8h] [rbp-29h] BYREF
  __int64 v25; // [rsp+B8h] [rbp-19h]
  CLSID pClsid; // [rsp+C8h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]

  v23 = -2LL;
  v2 = 0;
  if ( *((_DWORD *)this + 37)
    || IsGetDefaultSpatialRenderingModePresent() && !(unsigned int)IsVirtualSurroundAllowedOnCurrentPlatform()
    || CoGetPSClsid(&GUID_b8bb0d7d_75ea_4359_abdf_d256f849d065, &pClsid) < 0 )
  {
    return 0LL;
  }
  *(_QWORD *)&v24.Data1 = this;
  *(_QWORD *)v24.Data4 = this;
  if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, eHostProcessConnector) )
  {
    v7 = 0;
    v17 = (GUID)0LL;
    SupportedConnectorModesInternal = (__int64 *)CEndpointCharacteristics::GetSupportedConnectorModesInternal(
                                                   (__int64)this,
                                                   0,
                                                   0);
    DefaultEffectChainClsids = SystemEffectDescriptor::GetDefaultEffectChainClsids(
                                 (CEndpointCharacteristics *)((char *)this + 232),
                                 (struct CAudioSignalProcessingModeArray *)&v17,
                                 &v18,
                                 0LL);
    v6 = DefaultEffectChainClsids;
    if ( DefaultEffectChainClsids < 0 )
    {
      v10 = 1662LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v10,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)DefaultEffectChainClsids);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v17);
      return v6;
    }
    v11 = off_1800F9D10;
    v12 = v25;
    v13 = v24;
    do
    {
      v14 = **v11;
      v24 = v14;
      v18 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(SupportedConnectorModesInternal, &v24);
      if ( v18 != -1
        || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find((__int64 *)&v17, &v24) != -1 )
      {
        v19 = v15;
        v20 = v13;
        v21 = v12;
        v22 = &v19;
        v24 = v14;
        DefaultEffectChainClsids = SystemEffectDescriptor::CreateOverridingChain(
                                     (int)this + 232,
                                     (unsigned int)&v24,
                                     1,
                                     (unsigned int)&unk_18014B3C8,
                                     1,
                                     v18 != -1,
                                     (__int64)&v19);
        v6 = DefaultEffectChainClsids;
        if ( DefaultEffectChainClsids < 0 )
        {
          v10 = 1676LL;
          goto LABEL_26;
        }
        ++v7;
      }
      ++v2;
      ++v11;
    }
    while ( v2 < 3 );
    if ( !v7
      && (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         SupportedConnectorModesInternal,
                         &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) != -1 )
    {
      LOBYTE(v7) = (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                                   SupportedConnectorModesInternal,
                                   &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) != -1;
      v19 = v16;
      v20 = v13;
      v21 = v12;
      v22 = &v19;
      v24 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      DefaultEffectChainClsids = SystemEffectDescriptor::CreateOverridingChain(
                                   (int)this + 232,
                                   (unsigned int)&v24,
                                   1,
                                   (unsigned int)&unk_18014B3C8,
                                   1,
                                   v7,
                                   (__int64)&v19);
      v6 = DefaultEffectChainClsids;
      if ( DefaultEffectChainClsids < 0 )
      {
        v10 = 1690LL;
        goto LABEL_26;
      }
      v24 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      if ( !(unsigned int)CEndpointCharacteristics::IsAPOModeSupported(this, &v24, eHostProcessConnector) )
      {
        v22 = 0LL;
        v24 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        DefaultEffectChainClsids = SystemEffectDescriptor::CreateOverridingChain(
                                     (int)this + 616,
                                     (unsigned int)&v24,
                                     0,
                                     0,
                                     2,
                                     v7,
                                     (__int64)&v19);
        v6 = DefaultEffectChainClsids;
        if ( DefaultEffectChainClsids < 0 )
        {
          v10 = 1697LL;
          goto LABEL_26;
        }
      }
    }
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v17);
    return 0LL;
  }
  v4 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
         (__int64 *)this + 8,
         &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
  v19 = off_1800F45A8;
  v20 = v24;
  v21 = v25;
  v22 = &v19;
  v17 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                      (int)this + 232,
                      (unsigned int)&v17,
                      1,
                      (unsigned int)&unk_18014B3C8,
                      1,
                      v4 != -1,
                      (__int64)&v19);
  v6 = OverridingChain;
  if ( OverridingChain >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x670,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)OverridingChain);
  return v6;
}
