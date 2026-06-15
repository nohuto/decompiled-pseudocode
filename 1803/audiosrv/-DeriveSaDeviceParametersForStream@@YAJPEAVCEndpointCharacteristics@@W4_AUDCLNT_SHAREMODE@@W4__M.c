/*
 * XREFs of ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@_NU_GUID@@4PEAUtWAVEFORMATEX@@5_JPEAPEAUSaDeviceParams@@@Z @ 0x180014500
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001FFE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEn.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800CFF20 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800D2C80 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUI.c)
 * Callees:
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x1800365C0 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x1800379F0 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointChar.c)
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180038250 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x180038580 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     ?GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x180038AA0 (-GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MI.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180038CD0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x180063378 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x180097CB0 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x1800BBE98 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEA_J@Z @ 0x1800BEC34 (-SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEA_J@Z.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 *     WPP_SF_dg @ 0x1800D3DD4 (WPP_SF_dg.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DeriveSaDeviceParametersForStream(
        struct CEndpointCharacteristics *a1,
        enum _AUDCLNT_SHAREMODE a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        char a4,
        struct _GUID *a5,
        struct _GUID *a6,
        struct tWAVEFORMATEX *a7,
        struct tWAVEFORMATEX *Src,
        __int64 a9,
        struct SaDeviceParams **a10)
{
  void *v11; // rbx
  SaDeviceParams *v12; // rsi
  unsigned int v13; // edx
  int DeviceDefaults; // r14d
  int (*v15)(CPolicyConfig *__hidden, const unsigned __int16 *, int, __int64 *, __int64 *); // rax
  __int64 (__fastcall *v16)(CEndpointCharacteristicsCache *__hidden, const unsigned __int16 *, int, struct CEndpointCharacteristics **); // rax
  int AliasedEndpointCharacteristics; // eax
  CEndpointCharacteristics *v18; // rdi
  int v19; // r15d
  BOOL v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // ecx
  int v24; // edx
  __int64 v25; // r9
  struct _GUID *DefaultConnectorProcessingModeInternal; // rax
  struct _GUID v27; // xmm6
  int *v28; // rbx
  double v29; // xmm1_8
  __int64 v30; // rcx
  __int64 (__fastcall *v31)(); // rax
  __int64 v32; // r10
  void *v33; // rax
  void *v34; // r15
  void *v35; // rdi
  __int64 cbSize; // r14
  void *v37; // rax
  void *v38; // r13
  __int64 v39; // r14
  void *v40; // rax
  void *v41; // r14
  void *v42; // r14
  bool v43; // al
  __int64 v46; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int16 *v47; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-98h] BYREF
  CEndpointCharacteristics *v49; // [rsp+70h] [rbp-90h] BYREF
  __int64 v50; // [rsp+78h] [rbp-88h] BYREF
  enum _AUDCLNT_SHAREMODE v51; // [rsp+80h] [rbp-80h]
  void *v52; // [rsp+88h] [rbp-78h]
  PROPVARIANT v53; // [rsp+90h] [rbp-70h] BYREF
  __int64 v54; // [rsp+98h] [rbp-68h]
  __int64 *v55; // [rsp+A0h] [rbp-60h]
  PROPVARIANT pvar; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v57; // [rsp+B0h] [rbp-50h]
  __int64 v58; // [rsp+B8h] [rbp-48h]
  void *v59; // [rsp+C0h] [rbp-40h]
  struct _GUID *v60; // [rsp+C8h] [rbp-38h]
  struct CEndpointCharacteristics *v61; // [rsp+D0h] [rbp-30h]
  struct SaDeviceParams **v62; // [rsp+D8h] [rbp-28h]
  __int64 v63; // [rsp+E0h] [rbp-20h]
  __m256i v64; // [rsp+E8h] [rbp-18h]
  __int64 v65; // [rsp+108h] [rbp+8h]
  struct _GUID v66; // [rsp+110h] [rbp+10h] BYREF
  __int128 v67; // [rsp+120h] [rbp+20h]
  char v68[16]; // [rsp+130h] [rbp+30h] BYREF

  v65 = -2LL;
  v51 = a2;
  v61 = a1;
  v60 = a5;
  v52 = a7;
  v62 = a10;
  v11 = 0LL;
  v12 = 0LL;
  v59 = 0LL;
  v46 = 0LL;
  if ( a2 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    v66 = *a5;
    DeviceDefaults = GetDeviceDefaults(a1, a3, &v66, 0LL, 0LL, &a9, &v46);
    goto LABEL_72;
  }
  v50 = 0LL;
  v63 = 0LL;
  v47 = 0LL;
  DeviceDefaults = (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 **))(**((_QWORD **)a1 + 2) + 40LL))(
                     *((_QWORD *)a1 + 2),
                     &v47);
  if ( DeviceDefaults >= 0 )
  {
    v15 = *(int (**)(CPolicyConfig *__hidden, const unsigned __int16 *, int, __int64 *, __int64 *))(*(_QWORD *)g_PolicyConfig
                                                                                                  + 56LL);
    if ( v15 == CPolicyConfig::GetProcessingPeriod )
    {
      v49 = 0LL;
      v16 = *(__int64 (__fastcall **)(CEndpointCharacteristicsCache *__hidden, const unsigned __int16 *, int, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL);
      if ( v16 == CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics )
        AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                           g_pEndpointCharacteristicsCache,
                                           v47,
                                           0,
                                           &v49);
      else
        AliasedEndpointCharacteristics = v16(g_pEndpointCharacteristicsCache, v47, 0, &v49);
      DeviceDefaults = AliasedEndpointCharacteristics;
      if ( AliasedEndpointCharacteristics >= 0 )
      {
        v18 = v49;
        v53 = 0LL;
        v54 = 0LL;
        v55 = 0LL;
        v19 = 0;
        if ( v49 )
        {
          pv = 0LL;
          v66 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
          v20 = 1;
          v21 = *((_QWORD *)v49 + 7);
          if ( !v21 )
            goto LABEL_16;
          pvar = 0LL;
          v57 = 0LL;
          v58 = 0LL;
          if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v21 + 40LL))(
                 v21,
                 &PKEY_AudioEndpoint_Disable_SysFx,
                 &pvar) >= 0
            && (_WORD)pvar == 19 )
          {
            v20 = v57 == 0;
          }
          PropVariantClear(&pvar);
          if ( v20 )
          {
LABEL_16:
            SystemEffectDescriptor::ResolveAllOverridingChains((CEndpointCharacteristics *)((char *)v18 + 232));
            SystemEffectDescriptor::ResolveAllOverridingChains((CEndpointCharacteristics *)((char *)v18 + 616));
            SystemEffectDescriptor::ResolveAllOverridingChains((CEndpointCharacteristics *)((char *)v18 + 1000));
            v22 = 64LL;
          }
          else
          {
            v22 = 128LL;
          }
          v23 = 0;
          v24 = *(_DWORD *)((char *)v18 + v22 + 8);
          if ( v24 <= 0 )
            goto LABEL_22;
          v25 = *(_QWORD *)((char *)v18 + v22);
          while ( *(_QWORD *)(v25 + 16LL * v23) != *(_QWORD *)&v66.Data1
               || *(_QWORD *)(v25 + 16LL * v23 + 8) != *(_QWORD *)v66.Data4 )
          {
            if ( ++v23 >= v24 )
              goto LABEL_22;
          }
          if ( v23 == -1 )
          {
LABEL_22:
            DefaultConnectorProcessingModeInternal = (struct _GUID *)CEndpointCharacteristics::GetDefaultConnectorProcessingModeInternal(
                                                                       v18,
                                                                       v68,
                                                                       0LL,
                                                                       0LL);
          }
          else
          {
            v66 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
            DefaultConnectorProcessingModeInternal = &v66;
          }
          v27 = *DefaultConnectorProcessingModeInternal;
          v46 = 0LL;
          v66 = v27;
          DeviceDefaults = CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
                             v18,
                             eHostProcessConnector,
                             &v66,
                             (struct tWAVEFORMATEX **)&pv);
          if ( DeviceDefaults < 0 )
          {
            CEndpointCharacteristics::GetDefaultConnectorProcessingModeInternal(v18, &v66, 0LL, 1LL);
            v64.m256i_i64[0] = (__int64)v18;
            v64.m256i_i32[2] = 0;
            *(struct _GUID *)((char *)&v64.m256i_u64[1] + 4) = v66;
            v66 = *(struct _GUID *)v64.m256i_i8;
            v67 = *(_OWORD *)&v64.m256i_u64[2];
            DeviceDefaults = CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___(
                               v18,
                               (__int64)&v66,
                               (__int64)&pv);
          }
          v28 = (int *)pv;
          if ( DeviceDefaults >= 0 )
          {
            v46 = 30000LL;
            v66 = v27;
            DeviceDefaults = 0;
            if ( (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                        v18,
                        0LL,
                        pv,
                        &v66,
                        0,
                        0LL,
                        0LL,
                        &pv,
                        0LL) >= 0 )
            {
              v29 = (double)(int)pv * 10000000.0 / (double)v28[1] + 0.5;
              v30 = v46;
              if ( (unsigned int)(int)v29 < v46 )
                v30 = (unsigned int)(int)v29;
              v46 = v30;
            }
          }
          CoTaskMemFree(v28);
          if ( DeviceDefaults >= 0 )
          {
            while ( 1 )
            {
              DeviceDefaults = (*(__int64 (__fastcall **)(_QWORD, const struct _tagpropertykey *, PROPVARIANT *))(**((_QWORD **)v18 + 4) + 40LL))(
                                 *((_QWORD *)v18 + 4),
                                 &PKEY_AudioEngine_Period,
                                 &v53);
              if ( DeviceDefaults < 0 )
                break;
              if ( (_WORD)v53 != 65 )
              {
                if ( !(_WORD)v53 )
                {
                  v50 = 100000LL;
                  DeviceDefaults = CPolicyConfig::SetProcessingPeriodInternal(v18, &v50);
                  break;
                }
LABEL_59:
                DeviceDefaults = -2147024809;
                break;
              }
              if ( (_DWORD)v54 != 8 )
                goto LABEL_59;
              v50 = *v55;
              if ( v50 )
              {
                v11 = 0LL;
                goto LABEL_46;
              }
              if ( (unsigned int)++v19 >= 0x7D0 )
              {
                DeviceDefaults = -2147467259;
                if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                  && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
                {
                  WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, &WPP_143dd52affcd33359900bde90742b95f_Traceguids);
                }
                break;
              }
              Sleep(5u);
            }
          }
          v11 = 0LL;
        }
        else
        {
          DeviceDefaults = -2147467261;
        }
LABEL_46:
        PropVariantClear(&v53);
        if ( DeviceDefaults >= 0 )
          goto LABEL_52;
        AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetProcessingPeriodInternal", 0xD6Fu, DeviceDefaults);
      }
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          20LL,
          &WPP_143dd52affcd33359900bde90742b95f_Traceguids,
          (unsigned int)DeviceDefaults);
      }
LABEL_52:
      if ( v49 )
      {
        v31 = *(__int64 (__fastcall **)())(*(_QWORD *)v49 + 16LL);
        if ( v31 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
        {
          if ( !ATL::SafeDecrementReferenceMultiThread((int *)v49 + 3) )
          {
            if ( v32 )
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 48LL))(v32, 1LL);
            if ( Microsoft::WRL::Details::ModuleBase::module_ )
              (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                   + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
          }
        }
        else
        {
          ((void (__fastcall *)(CEndpointCharacteristics *))v31)(v49);
        }
      }
      goto LABEL_64;
    }
    DeviceDefaults = ((__int64 (__fastcall *)(CPolicyConfig *, unsigned __int16 *, _QWORD, __int64 *, __int64 *))v15)(
                       g_PolicyConfig,
                       v47,
                       0LL,
                       &v50,
                       &v46);
  }
LABEL_64:
  if ( v47 )
  {
    CoTaskMemFree(v47);
    v47 = 0LL;
  }
  if ( DeviceDefaults < 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        59LL,
        &WPP_143dd52affcd33359900bde90742b95f_Traceguids,
        (unsigned int)DeviceDefaults);
    }
    AudSrvTraceLoggingErrorHelper("GetDeviceDefaults", 0x1C35u, DeviceDefaults);
  }
LABEL_72:
  if ( DeviceDefaults < 0 )
    goto LABEL_95;
  v33 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v34 = v33;
  if ( v33 )
  {
    memset_0(v33, 0, 0x68uLL);
    *(_QWORD *)v34 = 0LL;
    *((_QWORD *)v34 + 2) = 0LL;
    *((_QWORD *)v34 + 3) = 0LL;
  }
  else
  {
    v34 = 0LL;
  }
  v12 = (SaDeviceParams *)v34;
  v59 = v34;
  v35 = 0LL;
  DeviceDefaults = -2147024882;
  if ( !v34 )
    goto LABEL_80;
  cbSize = Src->cbSize;
  v37 = CoTaskMemAlloc(cbSize + 18);
  v11 = v37;
  if ( v37 )
  {
    memcpy_0(v37, Src, cbSize + 18);
    v38 = v52;
    v39 = *((unsigned __int16 *)v52 + 8);
    v40 = CoTaskMemAlloc(v39 + 18);
    v35 = v40;
    if ( v40 )
    {
      memcpy_0(v40, v38, v39 + 18);
      DeviceDefaults = 0;
    }
    else
    {
      DeviceDefaults = -2147024882;
    }
LABEL_80:
    if ( DeviceDefaults >= 0 )
    {
      *((_DWORD *)v34 + 2) = a3;
      v41 = v35;
      v35 = 0LL;
      v63 = 0LL;
      CoTaskMemFree(*((LPVOID *)v34 + 2));
      *((_QWORD *)v34 + 2) = v41;
      v42 = v11;
      v11 = 0LL;
      v52 = 0LL;
      CoTaskMemFree(*((LPVOID *)v34 + 3));
      *((_QWORD *)v34 + 3) = v42;
      *((_QWORD *)v34 + 4) = a9;
      *((_QWORD *)v34 + 5) = v46;
      *((struct _GUID *)v34 + 4) = *a6;
      *((struct _GUID *)v34 + 3) = *v60;
      v43 = v51 != AUDCLNT_SHAREMODE_EXCLUSIVE && (a3 != eOffloadConnector || a4);
      *((_BYTE *)v34 + 96) = v43;
      DeviceDefaults = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)v61 + 2) + 40LL))(
                         *((_QWORD *)v61 + 2),
                         v34);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_dg(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          11LL,
          &WPP_97f32b95535f3bce03458b30fc9f83b1_Traceguids,
          (unsigned int)a3,
          a9);
      }
      CoCreateGuid((GUID *)v34 + 5);
    }
    goto LABEL_93;
  }
  v11 = 0LL;
  DeviceDefaults = -2147024882;
LABEL_93:
  CoTaskMemFree(v11);
  CoTaskMemFree(v35);
  if ( DeviceDefaults >= 0 )
  {
    v12 = 0LL;
    *v62 = (struct SaDeviceParams *)v34;
  }
LABEL_95:
  if ( v12 )
    SaDeviceParams::`scalar deleting destructor'(v12, v13);
  return (unsigned int)DeviceDefaults;
}
