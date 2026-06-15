/*
 * XREFs of ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000D390
 * Callers:
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x1800037E0 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@PEBUSPATIAL_STREAM_PROPERTIES@@6_NPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x180010BE0 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x180011CC0 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18009991C (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 * Callees:
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180010540 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x1800109B0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800336DC (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033790 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x180046104 (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18004CE8C (-GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(
        CEndpointCharacteristics *this,
        unsigned int a2)
{
  __int64 v2; // r15
  CEndpointCharacteristics *v3; // r13
  unsigned int v4; // ebx
  _QWORD *v5; // rsi
  int v6; // r14d
  int v7; // r12d
  __int64 SupportedConnectorModes; // rax
  int v9; // edx
  int v10; // r9d
  __int64 v11; // r8
  unsigned __int64 v12; // rax
  BOOL v13; // edi
  __int64 v14; // rcx
  int v15; // edx
  __int64 v16; // r15
  unsigned int v17; // edi
  __int64 v18; // rax
  int v19; // edi
  __int64 v20; // r13
  _QWORD *v21; // rcx
  int v22; // edx
  _OWORD *v23; // rcx
  __int64 v24; // rax
  _OWORD *v25; // rax
  int v26; // r12d
  __int64 v27; // rdi
  _OWORD *v28; // r15
  __int64 v29; // rax
  int v30; // edx
  int v31; // r8d
  __int64 v32; // r9
  unsigned __int64 v33; // rax
  unsigned int i; // esi
  _QWORD *v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rax
  __int64 v40; // r8
  _QWORD *v41; // [rsp+28h] [rbp-38h] BYREF
  __int64 v42; // [rsp+30h] [rbp-30h]
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v44; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  _OWORD *v48; // [rsp+B0h] [rbp+50h]

  v2 = (int)a2;
  v3 = this;
  v4 = 0;
  v5 = 0LL;
  v41 = 0LL;
  v6 = 0;
  v42 = 0LL;
  v7 = 0;
  *(GUID *)pvar = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  SupportedConnectorModes = CEndpointCharacteristics::GetSupportedConnectorModes(this, a2, 0LL);
  v9 = 0;
  v10 = *(_DWORD *)(SupportedConnectorModes + 8);
  if ( v10 <= 0 )
    goto LABEL_42;
  v11 = *(_QWORD *)SupportedConnectorModes;
  while ( 1 )
  {
    v12 = *(_QWORD *)(v11 + 16LL * v9) - (unsigned __int64)pvar[0];
    if ( !v12 )
      v12 = *(_QWORD *)(v11 + 16LL * v9 + 8) - (unsigned __int64)pvar[1];
    if ( !v12 )
      break;
    if ( ++v9 >= v10 )
      goto LABEL_42;
  }
  if ( v9 == -1 )
    goto LABEL_42;
  v13 = 1;
  v14 = *((_QWORD *)v3 + 7);
  if ( !v14 )
    goto LABEL_12;
  pvar[0] = 0LL;
  pvar[1] = 0LL;
  v44 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v14 + 40LL))(
         v14,
         &PKEY_AudioEndpoint_Disable_SysFx,
         pvar) >= 0
    && LOWORD(pvar[0]) == 19 )
  {
    v13 = LODWORD(pvar[1]) == 0;
  }
  PropVariantClear(pvar);
  if ( v13 || (v15 = 0, (_DWORD)v2 == 3) )
LABEL_12:
    v15 = 1;
  v16 = (__int64)v3 + 96 * v2 + 608;
  if ( !v15 )
  {
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(&v41, v16);
    v6 = v42;
    if ( (_DWORD)v42 != *(_DWORD *)(v16 + 8) )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x219,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)0x8007000ELL,
        -2);
    v5 = v41;
    goto LABEL_32;
  }
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)v16);
  v17 = 0;
  if ( *(int *)(v16 + 40) > 0 )
  {
    do
    {
      for ( i = 0;
            (signed int)i < *(_DWORD *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                                     v16 + 32,
                                                     v17)
                                      + 8LL);
            ++i )
      {
        v36 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v16 + 32, v17);
        v37 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](*v36, i);
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(&v41, v37) == -1 )
        {
          v38 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v16 + 32, v17);
          v39 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](*v38, i);
          if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(&v41, v39) )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x227,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)0x8007000ELL,
              -2);
            v6 = v42;
            v5 = v41;
            goto LABEL_32;
          }
        }
      }
      ++v17;
    }
    while ( (signed int)v17 < *(_DWORD *)(v16 + 40) );
    v7 = HIDWORD(v42);
    v6 = v42;
    v5 = v41;
  }
  v18 = *(_QWORD *)(v16 + 16);
  if ( !v18 )
    goto LABEL_32;
  v19 = 0;
  if ( *(int *)(v18 + 8) <= 0 )
    goto LABEL_32;
  v20 = 0LL;
  while ( 1 )
  {
    if ( v19 < 0 || v19 >= *(_DWORD *)(v18 + 8) )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x180064E98LL);
    }
    v21 = (_QWORD *)(*(_QWORD *)v18 + 16LL * v19);
    v22 = 0;
    if ( v6 > 0 )
    {
      while ( 1 )
      {
        v40 = v5[2 * v22] - *v21;
        if ( !v40 )
          v40 = v5[2 * v22 + 1] - v21[1];
        if ( !v40 )
          break;
        if ( ++v22 >= v6 )
          goto LABEL_21;
      }
      if ( v22 != -1 )
        goto LABEL_30;
    }
LABEL_21:
    if ( v19 >= *(_DWORD *)(v18 + 8) )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x180064E82LL);
    }
    v23 = (_OWORD *)(v20 + *(_QWORD *)v18);
    v48 = v23;
    if ( v6 == v7 )
      break;
LABEL_27:
    v25 = &v5[2 * v6];
    if ( v25 )
      *v25 = *v23;
    LODWORD(v42) = ++v6;
LABEL_30:
    ++v19;
    v20 += 16LL;
    v18 = *(_QWORD *)(v16 + 16);
    if ( v19 >= *(_DWORD *)(v18 + 8) )
      goto LABEL_31;
  }
  if ( !v7 )
  {
    v7 = 1;
LABEL_25:
    v24 = _o__recalloc(v5, v7, 16LL);
    if ( !v24 )
      goto LABEL_69;
    HIDWORD(v42) = v7;
    v5 = (_QWORD *)v24;
    v41 = (_QWORD *)v24;
    v23 = v48;
    goto LABEL_27;
  }
  v7 = 2 * v6;
  if ( (v6 & 0x40000000) == 0 && (unsigned int)v7 <= 0x7FFFFFF )
    goto LABEL_25;
LABEL_69:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x233,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL,
    -2);
LABEL_31:
  v3 = this;
LABEL_32:
  v26 = 0;
  if ( v6 > 0 )
  {
    v27 = 0LL;
    v28 = v5;
    while ( 1 )
    {
      if ( v27 < 0 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x180064ECCLL);
      }
      *(_OWORD *)pvar = *v28;
      v29 = CEndpointCharacteristics::GetSupportedConnectorModes(v3, a2, 0LL);
      v30 = 0;
      v31 = *(_DWORD *)(v29 + 8);
      if ( v31 <= 0 )
        break;
      v32 = *(_QWORD *)v29;
      while ( 1 )
      {
        v33 = *(_QWORD *)(v32 + 16LL * v30) - (unsigned __int64)pvar[0];
        if ( !v33 )
          v33 = *(_QWORD *)(v32 + 16LL * v30 + 8) - (unsigned __int64)pvar[1];
        if ( !v33 )
          break;
        if ( ++v30 >= v31 )
          goto LABEL_41;
      }
      if ( v30 == -1 )
        break;
      ++v26;
      ++v27;
      ++v28;
      if ( v26 >= v6 )
        goto LABEL_42;
    }
LABEL_41:
    v4 = 1;
  }
LABEL_42:
  if ( v5 )
    free(v5);
  return v4;
}
