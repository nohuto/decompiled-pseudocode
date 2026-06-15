/*
 * XREFs of ?GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z @ 0x1800360A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x1800365C0 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x1800379F0 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointChar.c)
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180038250 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x180038580 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     ?GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x180038AA0 (-GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MI.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180038CD0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x180063378 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 *     ?SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEA_J@Z @ 0x1800BEC34 (-SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEA_J@Z.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 */

__int64 __fastcall CPolicyConfig::GetProcessingPeriod(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        int a3,
        __int64 *a4,
        __int64 *a5)
{
  int v5; // esi
  __int64 (__fastcall *v8)(CEndpointCharacteristicsCache *__hidden, const unsigned __int16 *, int, struct CEndpointCharacteristics **); // rax
  int AliasedEndpointCharacteristics; // eax
  int ProposedConnectorFormatForProcessingMode; // edi
  CEndpointCharacteristics *v11; // r14
  void (*v12)(void); // rax
  __int64 v13; // r10
  __int64 v14; // rcx
  BOOL v15; // ebx
  __int64 v16; // rax
  int v17; // edx
  int v18; // ecx
  __int64 v19; // r9
  struct _GUID *DefaultConnectorProcessingModeInternal; // rax
  struct _GUID v21; // xmm6
  int *v22; // rbx
  LPVOID v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rcx
  LPVOID pv; // [rsp+58h] [rbp-B0h] BYREF
  CEndpointCharacteristics *v28; // [rsp+60h] [rbp-A8h] BYREF
  PROPVARIANT pvar; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+70h] [rbp-98h]
  __int64 *v31; // [rsp+78h] [rbp-90h]
  PROPVARIANT v32; // [rsp+80h] [rbp-88h] BYREF
  __int64 v33; // [rsp+88h] [rbp-80h]
  __int64 v34; // [rsp+90h] [rbp-78h]
  __m256i v35; // [rsp+98h] [rbp-70h]
  struct _GUID v36; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v37; // [rsp+C8h] [rbp-40h]
  _BYTE v38[16]; // [rsp+D8h] [rbp-30h] BYREF

  v5 = 0;
  v28 = 0LL;
  v8 = *(__int64 (__fastcall **)(CEndpointCharacteristicsCache *__hidden, const unsigned __int16 *, int, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL);
  if ( v8 == CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics )
    AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                       g_pEndpointCharacteristicsCache,
                                       a2,
                                       0,
                                       &v28);
  else
    AliasedEndpointCharacteristics = v8(g_pEndpointCharacteristicsCache, a2, 0, &v28);
  ProposedConnectorFormatForProcessingMode = AliasedEndpointCharacteristics;
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_11;
  v11 = v28;
  ProposedConnectorFormatForProcessingMode = 0;
  pvar = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  if ( !v28 )
    goto LABEL_8;
  if ( a4 )
  {
    if ( !a5 )
    {
LABEL_45:
      if ( a4 )
      {
        if ( a3 )
        {
          *a4 = 100000LL;
        }
        else
        {
          while ( 1 )
          {
            ProposedConnectorFormatForProcessingMode = (*(__int64 (__fastcall **)(_QWORD, const struct _tagpropertykey *, PROPVARIANT *))(**((_QWORD **)v11 + 4) + 40LL))(
                                                         *((_QWORD *)v11 + 4),
                                                         &PKEY_AudioEngine_Period,
                                                         &pvar);
            if ( ProposedConnectorFormatForProcessingMode < 0 )
              break;
            if ( (_WORD)pvar != 65 )
            {
              if ( !(_WORD)pvar )
              {
                *a4 = 100000LL;
                ProposedConnectorFormatForProcessingMode = CPolicyConfig::SetProcessingPeriodInternal(v11, a4);
                goto LABEL_9;
              }
LABEL_63:
              ProposedConnectorFormatForProcessingMode = -2147024809;
              goto LABEL_9;
            }
            if ( (_DWORD)v30 != 8 )
              goto LABEL_63;
            v25 = *v31;
            *a4 = *v31;
            if ( v25 )
              goto LABEL_9;
            if ( (unsigned int)++v5 >= 0x7D0 )
            {
              ProposedConnectorFormatForProcessingMode = -2147467259;
              if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
              {
                WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, &WPP_143dd52affcd33359900bde90742b95f_Traceguids);
              }
              goto LABEL_9;
            }
            Sleep(5u);
          }
        }
      }
      else
      {
        ProposedConnectorFormatForProcessingMode = 0;
      }
      goto LABEL_9;
    }
LABEL_23:
    v14 = *((_QWORD *)v28 + 7);
    v15 = 1;
    v36 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    pv = 0LL;
    if ( !v14 )
      goto LABEL_29;
    v32 = 0LL;
    v33 = 0LL;
    v34 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v14 + 40LL))(
           v14,
           &PKEY_AudioEndpoint_Disable_SysFx,
           &v32) >= 0
      && (_WORD)v32 == 19 )
    {
      v15 = v33 == 0;
    }
    PropVariantClear(&v32);
    if ( v15 )
    {
LABEL_29:
      SystemEffectDescriptor::ResolveAllOverridingChains((CEndpointCharacteristics *)((char *)v11 + 232));
      SystemEffectDescriptor::ResolveAllOverridingChains((CEndpointCharacteristics *)((char *)v11 + 616));
      SystemEffectDescriptor::ResolveAllOverridingChains((CEndpointCharacteristics *)((char *)v11 + 1000));
      v16 = 64LL;
    }
    else
    {
      v16 = 128LL;
    }
    v17 = *(_DWORD *)((char *)v11 + v16 + 8);
    v18 = 0;
    if ( v17 <= 0 )
      goto LABEL_35;
    v19 = *(_QWORD *)((char *)v11 + v16);
    while ( *(_QWORD *)(v19 + 16LL * v18) != *(_QWORD *)&v36.Data1
         || *(_QWORD *)(v19 + 16LL * v18 + 8) != *(_QWORD *)v36.Data4 )
    {
      if ( ++v18 >= v17 )
        goto LABEL_35;
    }
    if ( v18 == -1 )
    {
LABEL_35:
      DefaultConnectorProcessingModeInternal = (struct _GUID *)CEndpointCharacteristics::GetDefaultConnectorProcessingModeInternal(
                                                                 v11,
                                                                 v38,
                                                                 0LL,
                                                                 0LL);
    }
    else
    {
      DefaultConnectorProcessingModeInternal = &v36;
      v36 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    }
    v21 = *DefaultConnectorProcessingModeInternal;
    *a5 = 0LL;
    v36 = v21;
    ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
                                                 v11,
                                                 eHostProcessConnector,
                                                 &v36,
                                                 (struct tWAVEFORMATEX **)&pv);
    if ( ProposedConnectorFormatForProcessingMode < 0 )
    {
      CEndpointCharacteristics::GetDefaultConnectorProcessingModeInternal(v11, &v36, 0LL, 1LL);
      v35.m256i_i64[0] = (__int64)v11;
      *(struct _GUID *)((char *)&v35.m256i_u64[1] + 4) = v36;
      v35.m256i_i32[2] = 0;
      v36 = *(struct _GUID *)v35.m256i_i8;
      v37 = *(_OWORD *)&v35.m256i_u64[2];
      ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___(
                                                   v11,
                                                   (__int64)&v36,
                                                   (__int64)&pv);
    }
    v22 = (int *)pv;
    if ( ProposedConnectorFormatForProcessingMode >= 0 )
    {
      v23 = pv;
      *a5 = 30000LL;
      v36 = v21;
      if ( (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity(v11, 0LL, v23, &v36, 0, 0LL, 0LL, &pv, 0LL) >= 0 )
      {
        v24 = (unsigned int)(int)((double)(int)pv * 10000000.0 / (double)v22[1] + 0.5);
        if ( v24 >= *a5 )
          v24 = *a5;
        *a5 = v24;
      }
      ProposedConnectorFormatForProcessingMode = 0;
    }
    CoTaskMemFree(v22);
    if ( ProposedConnectorFormatForProcessingMode < 0 )
      goto LABEL_9;
    goto LABEL_45;
  }
  if ( a5 )
    goto LABEL_23;
LABEL_8:
  ProposedConnectorFormatForProcessingMode = -2147467261;
LABEL_9:
  PropVariantClear(&pvar);
  if ( ProposedConnectorFormatForProcessingMode >= 0 )
    goto LABEL_15;
  AudSrvTraceLoggingErrorHelper(
    "CPolicyConfig::GetProcessingPeriodInternal",
    0xD6Fu,
    ProposedConnectorFormatForProcessingMode);
LABEL_11:
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      20LL,
      &WPP_143dd52affcd33359900bde90742b95f_Traceguids,
      (unsigned int)ProposedConnectorFormatForProcessingMode);
  }
LABEL_15:
  if ( v28 )
  {
    v12 = *(void (**)(void))(*(_QWORD *)v28 + 16LL);
    if ( (char *)v12 != (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
    {
LABEL_64:
      v12();
      return (unsigned int)ProposedConnectorFormatForProcessingMode;
    }
    if ( !ATL::SafeDecrementReferenceMultiThread((int *)v28 + 3) )
    {
      if ( v13 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 48LL))(v13, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        v12 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
        goto LABEL_64;
      }
    }
  }
  return (unsigned int)ProposedConnectorFormatForProcessingMode;
}
