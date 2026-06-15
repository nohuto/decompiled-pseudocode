/*
 * XREFs of ?AddSpatialAudioProcessingSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180043230
 * Callers:
 *     ?AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x1800428E0 (-AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180033474 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033790 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18004421C (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     std::function_long___cdecl(SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64)_::function_long___cdecl(SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64)___lambda_104fe0bd16c4203916a8d385bc72c031__void_ @ 0x18004B908 (std--function_long___cdecl(SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr6.c)
 *     ?GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18004CE8C (-GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W.c)
 *     ?GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEAPEAU2@W4SED_RESOLVEOPT@@@Z @ 0x18007B414 (-GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEA.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FormFactor@CEndpointCharacteristics@@AEAA?AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ @ 0x1800BD058 (-FormFactor@CEndpointCharacteristics@@AEAA-AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ.c)
 */

__int64 __fastcall CEndpointCharacteristics::AddSpatialAudioProcessingSupport(CEndpointCharacteristics *this)
{
  int OverridingChain; // esi
  __int64 v3; // rdx
  int v5; // eax
  int v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rax
  int v10; // r11d
  int v11; // eax
  int v12; // r14d
  __int64 SupportedConnectorModes; // r12
  GUID **i; // r15
  GUID *v15; // r11
  int v16; // ecx
  _QWORD *v17; // rdx
  int v18; // eax
  GUID *v19; // r11
  int v20; // [rsp+28h] [rbp-89h]
  int v21; // [rsp+28h] [rbp-89h]
  _DWORD v22[4]; // [rsp+48h] [rbp-69h] BYREF
  GUID v23; // [rsp+58h] [rbp-59h] BYREF
  __int64 v24; // [rsp+68h] [rbp-49h]
  __int64 (__fastcall **v25)(); // [rsp+78h] [rbp-39h] BYREF
  __int128 v26; // [rsp+80h] [rbp-31h]
  __int64 v27; // [rsp+90h] [rbp-21h]
  __int64 (__fastcall ***v28)(); // [rsp+B0h] [rbp-1h]
  _BYTE v29[24]; // [rsp+B8h] [rbp+7h]
  GUID v30; // [rsp+D0h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  if ( !*((_DWORD *)this + 37) )
  {
    *(_QWORD *)v29 = this;
    v30 = GUID_5bbc2c71_dec2_4ba3_961a_36f37d1cc8a5;
    *(GUID *)&v29[8] = GUID_5bbc2c71_dec2_4ba3_961a_36f37d1cc8a5;
    if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, 0) )
    {
      if ( *(_DWORD *)(CEndpointCharacteristics::GetSupportedConnectorModes(this, 0LL, 0LL) + 8) != 1 )
      {
        v12 = 0;
        SupportedConnectorModes = CEndpointCharacteristics::GetSupportedConnectorModes(this, 0LL, 0LL);
        for ( i = off_1800E5F30; ; ++i )
        {
          v15 = *i;
          v16 = 0;
          if ( *(int *)(SupportedConnectorModes + 8) <= 0 )
          {
LABEL_27:
            v16 = -1;
          }
          else
          {
            while ( 1 )
            {
              v17 = (_QWORD *)(*(_QWORD *)SupportedConnectorModes + 16LL * v16);
              if ( *v17 == *(_QWORD *)&v15->Data1 && v17[1] == *(_QWORD *)v15->Data4 )
                break;
              if ( ++v16 >= *(_DWORD *)(SupportedConnectorModes + 8) )
                goto LABEL_27;
            }
          }
          if ( v16 != -1 )
          {
            v18 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find((__int64 *)this + 8, *i);
            v28 = 0LL;
            v23 = *v19;
            OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                                (int)this + 608,
                                (unsigned int)&v23,
                                1,
                                (unsigned int)&v30,
                                1,
                                v18 != -1,
                                (__int64)&v25);
            if ( OverridingChain < 0 )
              break;
          }
          if ( (unsigned int)++v12 >= 4 )
            return 0LL;
        }
        v3 = 1460LL;
        goto LABEL_5;
      }
      v22[0] = 0;
      v23 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v20 = 0;
      OverridingChain = SystemEffectDescriptor::GetSystemEffectClsidsForMode((char *)this + 992, &v23, 0LL, v22);
      if ( OverridingChain < 0 )
      {
        v3 = 1424LL;
        goto LABEL_5;
      }
      if ( v22[0] && CEndpointCharacteristics::FormFactor(this) == DigitalAudioDisplayDevice )
      {
        ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
          (__int64 *)this + 8,
          &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
        v23 = *(GUID *)v29;
        v24 = *(_QWORD *)&v29[16];
        v9 = std::function_long___cdecl_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64__::function_long___cdecl_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64____lambda_104fe0bd16c4203916a8d385bc72c031__void_(
               &v25,
               &v23);
        v23 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v6 = SystemEffectDescriptor::CreateOverridingChain(
               (int)this + 992,
               (unsigned int)&v23,
               1,
               (unsigned int)&v30,
               1,
               v10 != -1,
               v9);
        if ( v6 < 0 )
        {
          v7 = 1436LL;
          goto LABEL_10;
        }
      }
      else
      {
        v11 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                (__int64 *)this + 8,
                &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
        v28 = 0LL;
        v23 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v6 = SystemEffectDescriptor::CreateOverridingChain(
               (int)this + 992,
               (unsigned int)&v23,
               1,
               (unsigned int)&v30,
               1,
               v11 != -1,
               (__int64)&v25);
        if ( v6 < 0 )
        {
          v7 = 1441LL;
          goto LABEL_10;
        }
      }
    }
    else
    {
      v20 = 0;
      v22[0] = 0;
      v23 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      OverridingChain = SystemEffectDescriptor::GetSystemEffectClsidsForMode((char *)this + 608, &v23, 0LL, v22);
      if ( OverridingChain < 0 )
      {
        v3 = 1392LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v3,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)OverridingChain,
          v20);
        return (unsigned int)OverridingChain;
      }
      if ( v22[0] && CEndpointCharacteristics::FormFactor(this) == DigitalAudioDisplayDevice )
      {
        v5 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
               (__int64 *)this + 8,
               &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
        v25 = off_1800DE380;
        v26 = *(_OWORD *)v29;
        v28 = &v25;
        v23 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v27 = *(_QWORD *)&v29[16];
        v6 = SystemEffectDescriptor::CreateOverridingChain(
               (int)this + 608,
               (unsigned int)&v23,
               1,
               (unsigned int)&v30,
               1,
               v5 != -1,
               (__int64)&v25);
        if ( v6 < 0 )
        {
          v7 = 1404LL;
LABEL_10:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v7,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v6,
            v21);
          return (unsigned int)v6;
        }
      }
      else
      {
        v8 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
               (__int64 *)this + 8,
               &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
        v28 = 0LL;
        v23 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v6 = SystemEffectDescriptor::CreateOverridingChain(
               (int)this + 608,
               (unsigned int)&v23,
               1,
               (unsigned int)&v30,
               1,
               v8 != -1,
               (__int64)&v25);
        if ( v6 < 0 )
        {
          v7 = 1409LL;
          goto LABEL_10;
        }
      }
    }
  }
  return 0LL;
}
