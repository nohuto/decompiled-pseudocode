/*
 * XREFs of ?AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x1800B1A7C
 * Callers:
 *     ?AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x1800B1548 (-AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180009C7C (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180021110 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x1800216F8 (-GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingMode.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ?GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEAPEAU2@W4SED_RESOLVEOPT@@@Z @ 0x18005ACC8 (-GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEA.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18005ADF8 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FormFactor@CEndpointCharacteristics@@AEAA?AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ @ 0x1800B4C20 (-FormFactor@CEndpointCharacteristics@@AEAA-AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x1800B79E4 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800BC078 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800BC460 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::AddSpatialAudioProcessingSupport(CEndpointCharacteristics *this)
{
  int SystemEffectClsidsForMode; // esi
  __int64 v3; // rdx
  int v5; // eax
  int OverridingChain; // ebx
  __int64 v7; // rdx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  SystemEffectDescriptor *v11; // r15
  __int64 *SupportedConnectorModesInternal; // r14
  unsigned int v13; // ebx
  GUID **v14; // rsi
  _OWORD *v15; // rdx
  int v16; // eax
  _DWORD v17[4]; // [rsp+48h] [rbp-69h] BYREF
  GUID v18; // [rsp+58h] [rbp-59h] BYREF
  __int64 (__fastcall **v19)(); // [rsp+68h] [rbp-49h] BYREF
  __int128 v20; // [rsp+70h] [rbp-41h]
  __int64 v21; // [rsp+80h] [rbp-31h]
  __int64 (__fastcall ***v22)(); // [rsp+A0h] [rbp-11h]
  _BYTE v23[24]; // [rsp+A8h] [rbp-9h]
  __int64 v24; // [rsp+C0h] [rbp+Fh]
  GUID v25; // [rsp+C8h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v24 = -2LL;
  if ( !*((_DWORD *)this + 37) )
  {
    v25 = GUID_5bbc2c71_dec2_4ba3_961a_36f37d1cc8a5;
    *(_QWORD *)v23 = this;
    *(GUID *)&v23[8] = GUID_5bbc2c71_dec2_4ba3_961a_36f37d1cc8a5;
    if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, eHostProcessConnector) )
    {
      if ( *(_DWORD *)(CEndpointCharacteristics::GetSupportedConnectorModesInternal((__int64)this, 0, 0) + 8) == 1 )
      {
        v17[0] = 0;
        v18 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        SystemEffectClsidsForMode = SystemEffectDescriptor::GetSystemEffectClsidsForMode(
                                      (__int64)this + 1000,
                                      (__int128 *)&v18,
                                      0,
                                      v17,
                                      0LL,
                                      1u);
        if ( SystemEffectClsidsForMode < 0 )
        {
          v3 = 1423LL;
          goto LABEL_5;
        }
        if ( v17[0] && CEndpointCharacteristics::FormFactor(this) == DigitalAudioDisplayDevice )
        {
          v9 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                 (__int64 *)this + 8,
                 &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
          v19 = off_1800F4608;
          v20 = *(_OWORD *)v23;
          v21 = *(_QWORD *)&v23[16];
          v22 = &v19;
          v18 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                              (int)this + 1000,
                              (unsigned int)&v18,
                              1,
                              (unsigned int)&v25,
                              1,
                              v9 != -1,
                              (__int64)&v19);
          if ( OverridingChain < 0 )
          {
            v7 = 1435LL;
            goto LABEL_10;
          }
        }
        else
        {
          v10 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                  (__int64 *)this + 8,
                  &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
          v22 = 0LL;
          v18 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                              (int)this + 1000,
                              (unsigned int)&v18,
                              1,
                              (unsigned int)&v25,
                              1,
                              v10 != -1,
                              (__int64)&v19);
          if ( OverridingChain < 0 )
          {
            v7 = 1440LL;
            goto LABEL_10;
          }
        }
      }
      else
      {
        v11 = (CEndpointCharacteristics *)((char *)this + 616);
        SupportedConnectorModesInternal = (__int64 *)CEndpointCharacteristics::GetSupportedConnectorModesInternal(
                                                       (__int64)this,
                                                       0,
                                                       0);
        v18 = (GUID)0LL;
        v13 = 0;
        v14 = off_1800F9D28;
        do
        {
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                               SupportedConnectorModesInternal,
                               *v14) != -1 )
            ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add((__int64)&v18, v15);
          ++v13;
          ++v14;
        }
        while ( v13 < 4 );
        if ( *(int *)v18.Data4 > 0 )
        {
          v22 = 0LL;
          v16 = SystemEffectDescriptor::CreateOverridingChain(
                  v11,
                  (struct CAudioSignalProcessingModeArray *)&v18,
                  1,
                  1,
                  (__int64)&v19);
          OverridingChain = v16;
          if ( v16 < 0 )
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x5B7,
              (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)(unsigned int)v16);
            ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v18);
            return (unsigned int)OverridingChain;
          }
        }
        ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v18);
      }
    }
    else
    {
      v17[0] = 0;
      v18 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      SystemEffectClsidsForMode = SystemEffectDescriptor::GetSystemEffectClsidsForMode(
                                    (__int64)this + 616,
                                    (__int128 *)&v18,
                                    0,
                                    v17,
                                    0LL,
                                    1u);
      if ( SystemEffectClsidsForMode < 0 )
      {
        v3 = 1391LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v3,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)SystemEffectClsidsForMode);
        return (unsigned int)SystemEffectClsidsForMode;
      }
      if ( v17[0] && CEndpointCharacteristics::FormFactor(this) == DigitalAudioDisplayDevice )
      {
        v5 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
               (__int64 *)this + 8,
               &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
        v19 = off_1800F4608;
        v20 = *(_OWORD *)v23;
        v21 = *(_QWORD *)&v23[16];
        v22 = &v19;
        v18 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                            (int)this + 616,
                            (unsigned int)&v18,
                            1,
                            (unsigned int)&v25,
                            1,
                            v5 != -1,
                            (__int64)&v19);
        if ( OverridingChain < 0 )
        {
          v7 = 1403LL;
LABEL_10:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v7,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)OverridingChain);
          return (unsigned int)OverridingChain;
        }
      }
      else
      {
        v8 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
               (__int64 *)this + 8,
               &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
        v22 = 0LL;
        v18 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                            (int)this + 616,
                            (unsigned int)&v18,
                            1,
                            (unsigned int)&v25,
                            1,
                            v8 != -1,
                            (__int64)&v19);
        if ( OverridingChain < 0 )
        {
          v7 = 1408LL;
          goto LABEL_10;
        }
      }
    }
  }
  return 0LL;
}
