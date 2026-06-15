/*
 * XREFs of ?AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x1800520A4
 * Callers:
 *     ?AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180051604 (-AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEAPEAU2@W4SED_RESOLVEOPT@@@Z @ 0x180002944 (-GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEA.c)
 *     ?GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x1800367AC (-GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@.c)
 *     ?GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x180050DD4 (-GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingMode.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180052E78 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800532AC (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800533D0 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180053910 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180053A28 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180053A60 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ?FormFactor@CEndpointCharacteristics@@QEAA?AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ @ 0x1800EAC6C (-FormFactor@CEndpointCharacteristics@@QEAA-AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::AddSpatialAudioProcessingSupport(CEndpointCharacteristics *this)
{
  __int64 ChainDescriptorForMode; // rax
  int v3; // eax
  int v4; // ebx
  int SystemEffectClsidsForMode; // eax
  unsigned int v7; // esi
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  SystemEffectDescriptor *v12; // r15
  char *SupportedConnectorModesInternal; // r14
  unsigned int v14; // ebx
  GUID **v15; // rsi
  __int64 v16; // rdx
  int OverridingChain; // eax
  int v18; // [rsp+28h] [rbp-79h]
  int v19; // [rsp+28h] [rbp-79h]
  int v20; // [rsp+28h] [rbp-79h]
  GUID v21; // [rsp+48h] [rbp-59h] BYREF
  int v22; // [rsp+58h] [rbp-49h] BYREF
  __int64 v23; // [rsp+60h] [rbp-41h] BYREF
  __int128 v24; // [rsp+68h] [rbp-39h]
  __int64 v25; // [rsp+78h] [rbp-29h]
  __int64 *v26; // [rsp+98h] [rbp-9h]
  _BYTE v27[24]; // [rsp+A0h] [rbp-1h]
  __int64 v28; // [rsp+B8h] [rbp+17h]
  GUID v29; // [rsp+C0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v28 = -2LL;
  if ( *((_DWORD *)this + 37) )
    return 0LL;
  v29 = GUID_5bbc2c71_dec2_4ba3_961a_36f37d1cc8a5;
  *(_QWORD *)v27 = this;
  *(GUID *)&v27[8] = GUID_5bbc2c71_dec2_4ba3_961a_36f37d1cc8a5;
  if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, eHostProcessConnector) )
  {
    if ( *((_DWORD *)CEndpointCharacteristics::GetSupportedConnectorModesInternal(this, 0, 0) + 2) != 1 )
    {
      v12 = (CEndpointCharacteristics *)((char *)this + 616);
      SupportedConnectorModesInternal = CEndpointCharacteristics::GetSupportedConnectorModesInternal(this, 0, 0);
      v21 = (GUID)0LL;
      v14 = 0;
      v15 = off_18012DE10;
      do
      {
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                             SupportedConnectorModesInternal,
                             *v15) != -1 )
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(&v21, v16);
        ++v14;
        ++v15;
      }
      while ( v14 < 4 );
      if ( *(int *)v21.Data4 > 0 )
      {
        v26 = 0LL;
        OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                            v12,
                            (struct CAudioSignalProcessingModeArray *)&v21,
                            1,
                            1,
                            (__int64)&v23);
        v4 = OverridingChain;
        if ( OverridingChain < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5A5,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)OverridingChain,
            v20);
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v21);
          return (unsigned int)v4;
        }
      }
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v21);
      return 0LL;
    }
    v21 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    ChainDescriptorForMode = SystemEffectDescriptor::GetChainDescriptorForMode((__int64)this + 1000, (__int128 *)&v21);
    if ( ChainDescriptorForMode
      && *(_DWORD *)(ChainDescriptorForMode + 48)
      && CEndpointCharacteristics::FormFactor(this) == DigitalAudioDisplayDevice )
    {
      v11 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
              (char *)this + 64,
              &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
      v23 = (__int64)off_18012C9B0;
      v24 = *(_OWORD *)v27;
      v25 = *(_QWORD *)&v27[16];
      v26 = &v23;
      v21 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v4 = SystemEffectDescriptor::CreateOverridingChain(
             (CEndpointCharacteristics *)((char *)this + 1000),
             1,
             v11 != -1,
             (__int64)&v23);
      if ( v4 < 0 )
      {
        v9 = 1417LL;
        goto LABEL_14;
      }
      return 0LL;
    }
    v3 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
           (char *)this + 64,
           &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
    v26 = 0LL;
    v21 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    v4 = SystemEffectDescriptor::CreateOverridingChain(
           (CEndpointCharacteristics *)((char *)this + 1000),
           1,
           v3 != -1,
           (__int64)&v23);
    if ( v4 >= 0 )
      return 0LL;
    v9 = 1422LL;
  }
  else
  {
    v22 = 0;
    v21 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    SystemEffectClsidsForMode = SystemEffectDescriptor::GetSystemEffectClsidsForMode(
                                  (__int64)this + 616,
                                  (__int128 *)&v21,
                                  0,
                                  &v22,
                                  0LL,
                                  1u);
    v7 = SystemEffectClsidsForMode;
    if ( SystemEffectClsidsForMode < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x55D,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)SystemEffectClsidsForMode,
        v19);
      return v7;
    }
    if ( v22 && CEndpointCharacteristics::FormFactor(this) == DigitalAudioDisplayDevice )
    {
      v8 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
             (char *)this + 64,
             &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
      v23 = (__int64)off_18012C9B0;
      v24 = *(_OWORD *)v27;
      v25 = *(_QWORD *)&v27[16];
      v26 = &v23;
      v21 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v4 = SystemEffectDescriptor::CreateOverridingChain(
             (CEndpointCharacteristics *)((char *)this + 616),
             1,
             v8 != -1,
             (__int64)&v23);
      if ( v4 >= 0 )
        return 0LL;
      v9 = 1385LL;
    }
    else
    {
      v10 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
              (char *)this + 64,
              &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
      v26 = 0LL;
      v21 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v4 = SystemEffectDescriptor::CreateOverridingChain(
             (CEndpointCharacteristics *)((char *)this + 616),
             1,
             v10 != -1,
             (__int64)&v23);
      if ( v4 >= 0 )
        return 0LL;
      v9 = 1390LL;
    }
  }
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v4,
    v18);
  return (unsigned int)v4;
}
