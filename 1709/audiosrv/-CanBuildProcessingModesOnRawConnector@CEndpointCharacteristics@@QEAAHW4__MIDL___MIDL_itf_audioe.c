/*
 * XREFs of ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180022310
 * Callers:
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18000A70C (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x18000AA00 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@PEBUSPATIAL_STREAM_PROPERTIES@@6_NPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x18000B350 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180081300 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 * Callees:
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x1800233B0 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x18002362C (-GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2)
{
  __int64 v2; // r12
  unsigned int v4; // ebx
  GUID *v5; // r15
  BOOL v6; // edi
  __int64 v7; // rcx
  char *v8; // rsi
  int v9; // edx
  int v10; // r8d
  __int64 v11; // r9
  __int64 v12; // rax
  BOOL v13; // edi
  __int64 v14; // rcx
  __int64 v15; // r8
  char *v16; // r13
  __int64 v17; // rdi
  GUID *v18; // rax
  BOOL v19; // edi
  __int64 v20; // rcx
  bool v21; // zf
  char *v22; // rax
  int v23; // ecx
  int v24; // r8d
  __int64 v25; // r9
  __int64 v26; // rax
  GUID *v28; // [rsp+28h] [rbp-48h] BYREF
  __int64 v29; // [rsp+30h] [rbp-40h]
  GUID v30; // [rsp+40h] [rbp-30h]
  PROPVARIANT pvar; // [rsp+50h] [rbp-20h] BYREF
  __int64 v32; // [rsp+58h] [rbp-18h]
  __int64 v33; // [rsp+60h] [rbp-10h]
  int v34; // [rsp+B8h] [rbp+48h]
  __int64 v35; // [rsp+C0h] [rbp+50h]
  GUID *v36; // [rsp+C8h] [rbp+58h]

  v2 = a2;
  v4 = 0;
  v5 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  if ( a2 )
    goto LABEL_7;
  v6 = 1;
  v7 = *((_QWORD *)this + 7);
  if ( !v7 )
    goto LABEL_7;
  pvar = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v7 + 40LL))(
         v7,
         &PKEY_AudioEndpoint_Disable_SysFx,
         &pvar) >= 0
    && (_WORD)pvar == 19 )
  {
    v6 = v32 == 0;
  }
  PropVariantClear(&pvar);
  if ( v6 )
  {
LABEL_7:
    SystemEffectDescriptor::ResolveAllOverridingChains((CEndpointCharacteristics *)((char *)this + 96 * v2 + 232));
    SystemEffectDescriptor::ResolveAllOverridingChains((CEndpointCharacteristics *)((char *)this + 96 * v2 + 616));
    SystemEffectDescriptor::ResolveAllOverridingChains((CEndpointCharacteristics *)((char *)this + 96 * v2 + 1000));
    v8 = (char *)this + 16 * v2 + 64;
  }
  else
  {
    v8 = (char *)this + 128;
  }
  v9 = 0;
  v10 = *((_DWORD *)v8 + 2);
  if ( v10 > 0 )
  {
    v11 = *(_QWORD *)v8;
    while ( 1 )
    {
      v12 = *(_QWORD *)(v11 + 16LL * v9) - *(_QWORD *)&v30.Data1;
      if ( !v12 )
        v12 = *(_QWORD *)(v11 + 16LL * v9 + 8) - *(_QWORD *)v30.Data4;
      if ( !v12 )
        break;
      if ( ++v9 >= v10 )
        goto LABEL_37;
    }
    if ( v9 != -1 )
    {
      v13 = 1;
      v14 = *((_QWORD *)this + 7);
      if ( !v14 )
        goto LABEL_19;
      pvar = 0LL;
      v32 = 0LL;
      v33 = 0LL;
      if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v14 + 40LL))(
             v14,
             &PKEY_AudioEndpoint_Disable_SysFx,
             &pvar) >= 0
        && (_WORD)pvar == 19 )
      {
        v13 = v32 == 0;
      }
      PropVariantClear(&pvar);
      if ( v13 || (v15 = 0LL, (_DWORD)v2 == 3) )
LABEL_19:
        v15 = 1LL;
      v16 = (char *)this + 96 * v2;
      SystemEffectDescriptor::GetSupportedProcessingModes(v16 + 616, &v28, v15);
      v34 = 0;
      v5 = v28;
      if ( (int)v29 > 0 )
      {
        v17 = 0LL;
        v35 = 0LL;
        v18 = v28;
        v36 = v28;
        do
        {
          if ( v17 < 0 )
          {
            RaiseException(0xC000008C, 1u, 0, 0LL);
            JUMPOUT(0x180051D42LL);
          }
          v30 = *v18;
          if ( !(_DWORD)v2 )
          {
            v19 = 1;
            v20 = *((_QWORD *)this + 7);
            if ( v20 )
            {
              pvar = 0LL;
              v32 = 0LL;
              v33 = 0LL;
              if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v20 + 40LL))(
                     v20,
                     &PKEY_AudioEndpoint_Disable_SysFx,
                     &pvar) >= 0
                && (_WORD)pvar == 19 )
              {
                v19 = v32 == 0;
              }
              PropVariantClear(&pvar);
              v21 = !v19;
              v17 = v35;
              if ( v21 )
              {
                v22 = (char *)this + 128;
                goto LABEL_30;
              }
            }
            else
            {
              v17 = v35;
            }
          }
          SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v16 + 232));
          SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v16 + 616));
          SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v16 + 1000));
          v22 = (char *)this + 16 * v2 + 64;
LABEL_30:
          v23 = 0;
          v24 = *((_DWORD *)v22 + 2);
          if ( v24 <= 0 )
            goto LABEL_36;
          v25 = *(_QWORD *)v22;
          while ( 1 )
          {
            v26 = *(_QWORD *)(v25 + 16LL * v23) - *(_QWORD *)&v30.Data1;
            if ( !v26 )
              v26 = *(_QWORD *)(v25 + 16LL * v23 + 8) - *(_QWORD *)v30.Data4;
            if ( !v26 )
              break;
            if ( ++v23 >= v24 )
              goto LABEL_36;
          }
          if ( v23 == -1 )
          {
LABEL_36:
            v4 = 1;
            break;
          }
          ++v34;
          v35 = ++v17;
          v18 = ++v36;
        }
        while ( v34 < (int)v29 );
      }
    }
  }
LABEL_37:
  if ( v5 )
    free(v5);
  return v4;
}
