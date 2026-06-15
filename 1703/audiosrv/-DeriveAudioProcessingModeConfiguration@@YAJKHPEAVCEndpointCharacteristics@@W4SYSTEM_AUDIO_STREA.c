/*
 * XREFs of ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x18000C130
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180004D20 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndp.c)
 *     AudioServerIsFormatSupported @ 0x18000A9B0 (AudioServerIsFormatSupported.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001B110 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x18001BC20 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     AudioServerGetMixFormat @ 0x18002C9D0 (AudioServerGetMixFormat.c)
 *     ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800898DC (-ReloadApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800A1E30 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetDevicePeriod @ 0x1800A25D0 (AudioServerGetDevicePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x1800A2C90 (AudioServerGetSharedModeEnginePeriod.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800AA4D4 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 * Callees:
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x18000298C (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x18000D2D0 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x1800109B0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ??0?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAA@AEBV01@@Z @ 0x1800109E0 (--0-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAA@AEBV01@@Z.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x180010A50 (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AA50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033790 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetDefaultConnectorProcessingMode@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18004CE18 (-GetDefaultConnectorProcessingMode@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MIDL_itf_a.c)
 *     ?GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18004CE8C (-GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180079D74 (-GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_.c)
 *     ?AllowRawStreamCreation@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800BC1C8 (-AllowRawStreamCreation@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall DeriveAudioProcessingModeConfiguration(
        unsigned int a1,
        int a2,
        CEndpointCharacteristics *a3,
        unsigned int a4,
        int a5,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6,
        int a7,
        unsigned int a8,
        GUID *a9,
        GUID *a10,
        GUID *a11,
        GUID *a12)
{
  CEndpointCharacteristics *v13; // r14
  unsigned int v14; // esi
  GUID *v15; // rdi
  GUID *v16; // rbx
  GUID *v17; // r13
  int v18; // r15d
  GUID v19; // xmm9
  GUID v20; // xmm6
  GUID v21; // xmm8
  BOOL v22; // ebx
  __int64 v23; // rcx
  int v24; // edx
  __int64 v25; // rdi
  int v26; // ebx
  __int64 v27; // rsi
  int v28; // ecx
  int v29; // r11d
  __int64 v30; // r9
  __int64 *v31; // r8
  int v32; // edx
  int v33; // r10d
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rcx
  int v37; // r8d
  int v38; // r9d
  SystemEffectChainDescriptor **v39; // rdx
  unsigned __int64 v40; // rax
  bool v41; // zf
  GUID *v42; // r13
  GUID *v43; // rax
  unsigned int v44; // ebx
  __int64 SupportedConnectorModes; // rax
  int v46; // edx
  int v47; // r8d
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // rax
  int v51; // edx
  int v52; // r9d
  __int64 v53; // r8
  __int64 v54; // rax
  struct _GUID v55; // xmm7
  BOOL v56; // esi
  __int64 v57; // rcx
  unsigned int v58; // esi
  unsigned int v59; // esi
  __int64 v60; // rdx
  int v61; // r8d
  int v62; // r9d
  _QWORD *v63; // rcx
  __int64 v64; // rax
  BOOL v65; // ebx
  __int64 v66; // rcx
  int v67; // eax
  int v68; // ebx
  __int64 v69; // rsi
  int v70; // ecx
  int v71; // r10d
  __int64 v72; // r9
  __int64 *v73; // rdx
  int v74; // r8d
  int v75; // r11d
  __int64 v76; // rbx
  __int64 v77; // rax
  __int64 v78; // r11
  _QWORD *v80; // rax
  __int64 v81; // rax
  _QWORD *v82; // rax
  __int64 v83; // rax
  _QWORD *v84; // rax
  _QWORD *v85; // rax
  __int64 v86; // rax
  GUID v87; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v88; // [rsp+48h] [rbp-C0h]
  _QWORD *v89; // [rsp+50h] [rbp-B8h] BYREF
  GUID v90; // [rsp+58h] [rbp-B0h] BYREF
  GUID lpCriticalSection_8; // [rsp+68h] [rbp-A0h] BYREF
  SystemEffectChainDescriptor *v92[2]; // [rsp+78h] [rbp-90h] BYREF
  PROPVARIANT pvar; // [rsp+88h] [rbp-80h] BYREF
  __int64 v94; // [rsp+90h] [rbp-78h]
  __int64 v95; // [rsp+98h] [rbp-70h]
  GUID *v96; // [rsp+A0h] [rbp-68h]
  GUID *v97; // [rsp+A8h] [rbp-60h]
  GUID *v98; // [rsp+B0h] [rbp-58h]
  GUID *v99; // [rsp+B8h] [rbp-50h]
  __int64 v100; // [rsp+C0h] [rbp-48h]
  char v101[16]; // [rsp+C8h] [rbp-40h] BYREF
  struct _GUID v102; // [rsp+D8h] [rbp-30h] BYREF
  GUID v103; // [rsp+E8h] [rbp-20h] BYREF

  v100 = -2LL;
  v13 = a3;
  *(_QWORD *)&v90.Data1 = a3;
  v14 = a1;
  LODWORD(v88) = a1;
  v99 = a9;
  v15 = a10;
  v97 = a10;
  v16 = a11;
  v96 = a11;
  v17 = a12;
  v98 = a12;
  v18 = 0;
  v89 = 0LL;
  v19 = GUID_00000000_0000_0000_0000_000000000000;
  v102 = GUID_00000000_0000_0000_0000_000000000000;
  v20 = GUID_00000000_0000_0000_0000_000000000000;
  lpCriticalSection_8 = GUID_00000000_0000_0000_0000_000000000000;
  v21 = GUID_00000000_0000_0000_0000_000000000000;
  v87 = GUID_00000000_0000_0000_0000_000000000000;
  if ( a5 == 1 )
  {
    CEndpointCharacteristics::GetExclusiveModeProcessingModeConfiguration(a3, a6, &v102, &lpCriticalSection_8, &v87);
    v19 = v102;
    v20 = lpCriticalSection_8;
    v21 = v87;
    goto LABEL_103;
  }
  if ( a4 == 2 )
  {
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(
      a3,
      eHostProcessConnector,
      &v102,
      &lpCriticalSection_8,
      &v87);
    v19 = v102;
    v20 = lpCriticalSection_8;
    v21 = v87;
    goto LABEL_103;
  }
  if ( a2 )
  {
    if ( CEndpointCharacteristics::AllowRawStreamCreation(a3, a6) )
    {
      v19 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      v20 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      v21 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    }
    else
    {
      v18 = -2004287449;
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          12LL,
          &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids,
          2290679847LL);
      }
    }
    goto LABEL_103;
  }
  v19 = *(GUID *)CEndpointCharacteristics::GetDefaultConnectorProcessingMode(a3, v101, (unsigned int)a6, 0LL);
  v103 = v19;
  v21 = v19;
  v22 = 1;
  v23 = *((_QWORD *)v13 + 7);
  if ( !v23 )
    goto LABEL_5;
  pvar = 0LL;
  v94 = 0LL;
  v95 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v23 + 40LL))(
         v23,
         &PKEY_AudioEndpoint_Disable_SysFx,
         &pvar) >= 0
    && (_WORD)pvar == 19 )
  {
    v22 = v94 == 0;
  }
  PropVariantClear(&pvar);
  if ( v22 || (v24 = 0, a6 == eKeywordDetectorConnector) )
LABEL_5:
    v24 = 1;
  *(GUID *)v92 = v19;
  v25 = (__int64)v13 + 96 * a6 + 608;
  if ( v24 )
  {
    *(GUID *)v92 = v19;
    v87 = v19;
    if ( *(_BYTE *)(v25 + 52) && (v26 = 0, *(int *)(v25 + 40) > 0) )
    {
      v27 = 0LL;
      while ( 1 )
      {
        if ( v26 < 0 || v26 >= *(_DWORD *)(v25 + 40) )
        {
          RaiseException(0xC000008C, 1u, 0, 0LL);
          JUMPOUT(0x180064522LL);
        }
        if ( *(_BYTE *)(*(_QWORD *)(v27 + *(_QWORD *)(v25 + 32)) + 16LL) )
        {
          v80 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                            v25 + 32,
                            (unsigned int)v26);
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v80, &v87) != -1 )
            break;
        }
        ++v26;
        v27 += 16LL;
        if ( v26 >= *(_DWORD *)(v25 + 40) )
          goto LABEL_14;
      }
      Microsoft::WRL::Wrappers::CriticalSection::Lock(v25 + 56, (__int64)&lpCriticalSection_8);
      v81 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v25 + 32, (unsigned int)v26);
      std::shared_ptr<SystemEffectChainDescriptor>::shared_ptr<SystemEffectChainDescriptor>(&v102, v81);
      if ( (int)SystemEffectChainDescriptor::Resolve(
                  *(SystemEffectChainDescriptor **)&v102.Data1,
                  (struct SystemEffectDescriptor *)v25) >= 0 )
      {
        if ( *(_QWORD *)v102.Data4 )
          std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)v102.Data4);
        if ( *(_QWORD *)&lpCriticalSection_8.Data1 )
          LeaveCriticalSection(*(LPCRITICAL_SECTION *)&lpCriticalSection_8.Data1);
        v13 = *(CEndpointCharacteristics **)&v90.Data1;
LABEL_14:
        v14 = v88;
        goto LABEL_15;
      }
      if ( *(_QWORD *)v102.Data4 )
        std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)v102.Data4);
      if ( *(_QWORD *)&lpCriticalSection_8.Data1 )
        LeaveCriticalSection(*(LPCRITICAL_SECTION *)&lpCriticalSection_8.Data1);
      v14 = v88;
      v13 = *(CEndpointCharacteristics **)&v90.Data1;
    }
    else
    {
LABEL_15:
      v28 = 0;
      v29 = *(_DWORD *)(v25 + 40);
      if ( v29 > 0 )
      {
        v30 = 0LL;
        while ( 1 )
        {
          if ( v30 < 0 || v28 >= v29 )
          {
            RaiseException(0xC000008C, 1u, 0, 0LL);
            JUMPOUT(0x18006454ELL);
          }
          v31 = *(__int64 **)(v30 + *(_QWORD *)(v25 + 32));
          v32 = 0;
          v33 = *((_DWORD *)v31 + 2);
          if ( v33 > 0 )
          {
            v34 = *v31;
            while ( 1 )
            {
              v35 = *(_QWORD *)(v34 + 16LL * v32) - *(_QWORD *)&v87.Data1;
              if ( !v35 )
                v35 = *(_QWORD *)(v34 + 16LL * v32 + 8) - *(_QWORD *)v87.Data4;
              if ( !v35 )
                break;
              if ( ++v32 >= v33 )
                goto LABEL_25;
            }
            if ( v32 != -1 )
              break;
          }
LABEL_25:
          ++v28;
          v30 += 16LL;
          if ( v28 >= v29 )
            goto LABEL_26;
        }
        if ( v28 != -1 )
        {
          if ( v28 < 0 || v28 >= v29 )
          {
            RaiseException(0xC000008C, 1u, 0, 0LL);
            JUMPOUT(0x180064538LL);
          }
          v36 = *(_QWORD *)(*(_QWORD *)(v25 + 32) + 16LL * v28);
LABEL_38:
          v41 = v36 == 0;
          goto LABEL_39;
        }
      }
    }
LABEL_26:
    v36 = *(_QWORD *)(v25 + 16);
    if ( !v36 )
      goto LABEL_32;
    v37 = 0;
    v38 = *(_DWORD *)(v36 + 8);
    if ( v38 <= 0 )
      goto LABEL_32;
    while ( 1 )
    {
      v39 = (SystemEffectChainDescriptor **)(*(_QWORD *)v36 + 16LL * v37);
      v40 = *v39 - v92[0];
      if ( *v39 == v92[0] )
        v40 = v39[1] - v92[1];
      if ( !v40 )
        break;
      if ( ++v37 >= v38 )
        goto LABEL_32;
    }
    if ( v37 == -1 )
LABEL_32:
      v36 = 0LL;
    goto LABEL_38;
  }
  v41 = (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v25, v92) == -1;
LABEL_39:
  v42 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  v43 = &v103;
  if ( v41 )
    v43 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  v20 = *v43;
  if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, _QWORD, _QWORD, _QWORD, _QWORD **))(*(_QWORD *)g_PolicyManager
                                                                                              + 80LL))(
         g_PolicyManager,
         a4,
         v14,
         a8,
         &v89) < 0 )
    goto LABEL_102;
  if ( !a4 && dword_1800FC320[v14] && (unsigned int)CEndpointCharacteristics::GetVirtualSurroundEffectMode(v13) )
    v89 = &unk_1800E7770;
  v44 = 0;
  if ( !*(_DWORD *)v89 )
    goto LABEL_102;
  while ( 1 )
  {
    v87 = *(GUID *)(v89[1] + 16LL * v44);
    SupportedConnectorModes = CEndpointCharacteristics::GetSupportedConnectorModes(v13, (unsigned int)a6, 0LL);
    v46 = 0;
    v47 = *(_DWORD *)(SupportedConnectorModes + 8);
    if ( v47 > 0 )
    {
      v48 = *(_QWORD *)SupportedConnectorModes;
      while ( 1 )
      {
        v49 = *(_QWORD *)(v48 + 16LL * v46) - *(_QWORD *)&v87.Data1;
        if ( !v49 )
          v49 = *(_QWORD *)(v48 + 16LL * v46 + 8) - *(_QWORD *)v87.Data4;
        if ( !v49 )
          break;
        if ( ++v46 >= v47 )
          goto LABEL_51;
      }
      if ( v46 != -1 )
        break;
    }
LABEL_51:
    v87 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v50 = CEndpointCharacteristics::GetSupportedConnectorModes(v13, (unsigned int)a6, 0LL);
    v51 = 0;
    v52 = *(_DWORD *)(v50 + 8);
    if ( v52 <= 0 )
      goto LABEL_128;
    v53 = *(_QWORD *)v50;
    while ( 1 )
    {
      v54 = *(_QWORD *)(v53 + 16LL * v51) - *(_QWORD *)&v87.Data1;
      if ( !v54 )
        v54 = *(_QWORD *)(v53 + 16LL * v51 + 8) - *(_QWORD *)v87.Data4;
      if ( !v54 )
        break;
      if ( ++v51 >= v52 )
        goto LABEL_128;
    }
    if ( v51 == -1 )
      goto LABEL_128;
    v55 = *(struct _GUID *)(v89[1] + 16LL * v44);
    v56 = 1;
    v57 = *((_QWORD *)v13 + 7);
    if ( !v57 )
      goto LABEL_62;
    pvar = 0LL;
    v94 = 0LL;
    v95 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v57 + 40LL))(
           v57,
           &PKEY_AudioEndpoint_Disable_SysFx,
           &pvar) >= 0
      && (_WORD)pvar == 19 )
    {
      v56 = v94 == 0;
    }
    PropVariantClear(&pvar);
    if ( v56 || a6 == eKeywordDetectorConnector )
    {
LABEL_62:
      v102 = v55;
      v87 = v55;
      if ( *(_BYTE *)(v25 + 52) && (v58 = 0, *(int *)(v25 + 40) > 0) )
      {
        while ( 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                       v25 + 32,
                                       v58)
                        + 16LL) )
          {
            v82 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v25 + 32, v58);
            if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v82, &v87) != -1 )
              break;
          }
          if ( (signed int)++v58 >= *(_DWORD *)(v25 + 40) )
            goto LABEL_182;
        }
        Microsoft::WRL::Wrappers::CriticalSection::Lock(v25 + 56, (__int64)&lpCriticalSection_8);
        v83 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v25 + 32, v58);
        std::shared_ptr<SystemEffectChainDescriptor>::shared_ptr<SystemEffectChainDescriptor>(v92, v83);
        if ( (int)SystemEffectChainDescriptor::Resolve(v92[0], (struct SystemEffectDescriptor *)v25) >= 0 )
        {
          if ( v92[1] )
            std::_Ref_count_base::_Decref(v92[1]);
          if ( *(_QWORD *)&lpCriticalSection_8.Data1 )
            LeaveCriticalSection(*(LPCRITICAL_SECTION *)&lpCriticalSection_8.Data1);
LABEL_182:
          v13 = *(CEndpointCharacteristics **)&v90.Data1;
          goto LABEL_64;
        }
        if ( v92[1] )
          std::_Ref_count_base::_Decref(v92[1]);
        if ( *(_QWORD *)&lpCriticalSection_8.Data1 )
          LeaveCriticalSection(*(LPCRITICAL_SECTION *)&lpCriticalSection_8.Data1);
      }
      else
      {
LABEL_64:
        v59 = 0;
        if ( *(int *)(v25 + 40) <= 0 )
        {
LABEL_65:
          v60 = *(_QWORD *)(v25 + 16);
          if ( !v60 )
            goto LABEL_127;
          v61 = 0;
          v62 = *(_DWORD *)(v60 + 8);
          if ( v62 <= 0 )
            goto LABEL_127;
          while ( 1 )
          {
            v63 = (_QWORD *)(*(_QWORD *)v60 + 16LL * v61);
            v64 = *v63 - *(_QWORD *)&v102.Data1;
            if ( *v63 == *(_QWORD *)&v102.Data1 )
              v64 = v63[1] - *(_QWORD *)v102.Data4;
            if ( !v64 )
              break;
            if ( ++v61 >= v62 )
              goto LABEL_127;
          }
          if ( v61 == -1 )
LABEL_127:
            v60 = 0LL;
LABEL_71:
          if ( v60 )
            goto LABEL_72;
          goto LABEL_128;
        }
        while ( 1 )
        {
          v84 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v25 + 32, v59);
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v84, &v87) != -1 )
            break;
          if ( (signed int)++v59 >= *(_DWORD *)(v25 + 40) )
            goto LABEL_188;
        }
        if ( v59 != -1 )
        {
          v60 = *(_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v25 + 32, v59);
          v13 = *(CEndpointCharacteristics **)&v90.Data1;
          goto LABEL_71;
        }
      }
LABEL_188:
      v13 = *(CEndpointCharacteristics **)&v90.Data1;
      goto LABEL_65;
    }
    v103 = v55;
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v25, &v103) != -1 )
    {
LABEL_72:
      v19 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      v20 = *(GUID *)(v89[1] + 16LL * v44);
      v21 = v20;
      goto LABEL_102;
    }
LABEL_128:
    if ( ++v44 >= *(_DWORD *)v89 )
      goto LABEL_102;
  }
  v19 = *(GUID *)(v89[1] + 16LL * v44);
  v102 = v19;
  if ( a7 )
    goto LABEL_100;
  v65 = 1;
  v66 = *((_QWORD *)v13 + 7);
  if ( !v66 )
    goto LABEL_76;
  pvar = 0LL;
  v94 = 0LL;
  v95 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v66 + 40LL))(
         v66,
         &PKEY_AudioEndpoint_Disable_SysFx,
         &pvar) >= 0
    && (_WORD)pvar == 19 )
  {
    v65 = v94 == 0;
  }
  PropVariantClear(&pvar);
  if ( v65 || (v67 = 0, a6 == eKeywordDetectorConnector) )
LABEL_76:
    v67 = 1;
  v103 = v19;
  if ( v67 )
  {
    v90 = v19;
    v87 = v19;
    if ( *(_BYTE *)(v25 + 52) )
    {
      v68 = 0;
      if ( *(int *)(v25 + 40) > 0 )
      {
        v69 = 0LL;
        while ( 1 )
        {
          if ( v68 < 0 || v68 >= *(_DWORD *)(v25 + 40) )
          {
            RaiseException(0xC000008C, 1u, 0, 0LL);
            JUMPOUT(0x1800647BDLL);
          }
          if ( *(_BYTE *)(*(_QWORD *)(v69 + *(_QWORD *)(v25 + 32)) + 16LL) )
          {
            v85 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                              v25 + 32,
                              (unsigned int)v68);
            if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v85, &v87) != -1 )
              break;
          }
          ++v68;
          v69 += 16LL;
          if ( v68 >= *(_DWORD *)(v25 + 40) )
            goto LABEL_85;
        }
        Microsoft::WRL::Wrappers::CriticalSection::Lock(v25 + 56, (__int64)&lpCriticalSection_8);
        v86 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v25 + 32, (unsigned int)v68);
        std::shared_ptr<SystemEffectChainDescriptor>::shared_ptr<SystemEffectChainDescriptor>(v92, v86);
        if ( (int)SystemEffectChainDescriptor::Resolve(v92[0], (struct SystemEffectDescriptor *)v25) < 0 )
        {
          if ( v92[1] )
            std::_Ref_count_base::_Decref(v92[1]);
          if ( *(_QWORD *)&lpCriticalSection_8.Data1 )
            LeaveCriticalSection(*(LPCRITICAL_SECTION *)&lpCriticalSection_8.Data1);
          goto LABEL_116;
        }
        if ( v92[1] )
          std::_Ref_count_base::_Decref(v92[1]);
        if ( *(_QWORD *)&lpCriticalSection_8.Data1 )
          LeaveCriticalSection(*(LPCRITICAL_SECTION *)&lpCriticalSection_8.Data1);
      }
    }
LABEL_85:
    v70 = 0;
    v71 = *(_DWORD *)(v25 + 40);
    if ( v71 <= 0 )
      goto LABEL_116;
    v72 = 0LL;
    while ( 1 )
    {
      if ( v72 < 0 || v70 >= v71 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x1800647E9LL);
      }
      v73 = *(__int64 **)(v72 + *(_QWORD *)(v25 + 32));
      v74 = 0;
      v75 = *((_DWORD *)v73 + 2);
      if ( v75 > 0 )
      {
        v76 = *v73;
        while ( 1 )
        {
          v77 = *(_QWORD *)(v76 + 16LL * v74) - *(_QWORD *)&v87.Data1;
          if ( !v77 )
            v77 = *(_QWORD *)(v76 + 16LL * v74 + 8) - *(_QWORD *)v87.Data4;
          if ( !v77 )
            break;
          if ( ++v74 >= v75 )
            goto LABEL_115;
        }
        if ( v74 != -1 )
          break;
      }
LABEL_115:
      ++v70;
      v72 += 16LL;
      if ( v70 >= v71 )
        goto LABEL_116;
    }
    if ( v70 == -1 )
    {
LABEL_116:
      if ( !*(_QWORD *)(v25 + 16)
        || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*(_QWORD *)(v25 + 16), &v90) == -1 )
      {
        v78 = 0LL;
      }
    }
    else
    {
      if ( v70 < 0 || v70 >= v71 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x1800647D3LL);
      }
      v78 = *(_QWORD *)(*(_QWORD *)(v25 + 32) + 16LL * v70);
    }
    if ( v78 )
LABEL_100:
      v42 = &v102;
  }
  else if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v25, &v103) != -1 )
  {
    goto LABEL_100;
  }
  v20 = *v42;
  v21 = v19;
LABEL_102:
  v16 = v96;
  v15 = v97;
  v17 = v98;
LABEL_103:
  if ( v99 )
    *v99 = v19;
  if ( v15 )
    *v15 = v20;
  if ( v16 )
    *v16 = v21;
  if ( v17 )
    *v17 = v21;
  if ( v18 < 0 )
    AudSrvTraceLoggingErrorHelper("DeriveAudioProcessingModeConfiguration", 0x2ECu, v18);
  return (unsigned int)v18;
}
