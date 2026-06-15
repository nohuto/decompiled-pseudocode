/*
 * XREFs of ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180022930
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001FFE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEn.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180015190 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetEndpointInformationFromId@CConstraintModel@@QEAAJPEBGPEAGI1IPEAK@Z @ 0x180039AF0 (-GetEndpointInformationFromId@CConstraintModel@@QEAAJPEBGPEAGI1IPEAK@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005F9F4 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 *     ?AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z @ 0x1800D8370 (-AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z.c)
 *     ?AddHead@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBUResourceHandleInfo@@@Z @ 0x1800D85D4 (-AddHead@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAA.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@H@Z @ 0x1800D9000 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTI.c)
 *     WPP_SF_dI @ 0x1800DB104 (WPP_SF_dI.c)
 *     ??8StreamResourceConsumer@@QEAA_NAEBV0@@Z @ 0x1801134EC (--8StreamResourceConsumer@@QEAA_NAEBV0@@Z.c)
 *     ?GetResourceInfoArrayFromResourceList@CConstraintModel@@AEAAJPEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@W4RmResourceType@@KPEAKPEAPEAU_ResourceInfo@@@Z @ 0x180113CC8 (-GetResourceInfoArrayFromResourceList@CConstraintModel@@AEAAJPEAV-$CAtlList@U_ResourceInfo@@VRes.c)
 */

__int64 __fastcall CConstraintModelResourceManager::AcquireSaDeviceResource(
        __int64 a1,
        struct _RTL_CRITICAL_SECTION *a2,
        int a3,
        _OWORD *a4,
        int a5,
        unsigned int a6,
        unsigned __int64 *a7)
{
  unsigned __int64 v8; // rdi
  unsigned int v9; // ebx
  struct _ResourceInfo *v10; // r14
  BOOL v11; // esi
  int Instance; // edi
  __int64 v13; // r8
  unsigned int v14; // r9d
  CConstraintModel *v15; // rcx
  __int64 v16; // rsi
  int *v17; // rcx
  __int64 v18; // rdx
  __int16 v19; // ax
  char *v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // ebx
  unsigned __int64 v23; // r13
  __int64 v24; // rbx
  unsigned __int64 v25; // rsi
  DWORD LastError; // ebx
  __int64 v28; // rsi
  int v29; // eax
  int ResourceInfoArrayFromResourceList; // eax
  char *v31; // rsi
  unsigned int v32; // r8d
  __int128 v33; // xmm0
  DWORD v34; // ebx
  unsigned int v35; // [rsp+28h] [rbp-D8h]
  unsigned int v37[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v38; // [rsp+50h] [rbp-B0h]
  LPVOID ppv[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v41; // [rsp+78h] [rbp-88h] BYREF
  _OWORD *v42; // [rsp+80h] [rbp-80h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+88h] [rbp-78h] BYREF
  char v44; // [rsp+90h] [rbp-70h]
  PROPVARIANT pvar[3]; // [rsp+98h] [rbp-68h] BYREF
  void **v46; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v47; // [rsp+B8h] [rbp-48h]
  int v48; // [rsp+C0h] [rbp-40h] BYREF
  char v49; // [rsp+252h] [rbp+152h] BYREF
  unsigned int v50; // [rsp+45Ch] [rbp+35Ch]
  __int128 v51; // [rsp+460h] [rbp+360h]
  int v52; // [rsp+470h] [rbp+370h]
  unsigned __int64 v53; // [rsp+480h] [rbp+380h] BYREF
  int v54; // [rsp+488h] [rbp+388h]
  unsigned __int16 v55[128]; // [rsp+48Ch] [rbp+38Ch] BYREF
  __int128 v56; // [rsp+58Ch] [rbp+48Ch]
  int v57; // [rsp+59Ch] [rbp+49Ch]
  int v58; // [rsp+5A0h] [rbp+4A0h]
  unsigned __int16 v59[201]; // [rsp+5A8h] [rbp+4A8h] BYREF
  unsigned __int16 v60[261]; // [rsp+73Ah] [rbp+63Ah] BYREF
  unsigned int v61[3]; // [rsp+944h] [rbp+844h] BYREF
  unsigned __int16 v62[208]; // [rsp+950h] [rbp+850h] BYREF
  unsigned __int16 v63[264]; // [rsp+AF0h] [rbp+9F0h] BYREF

  v42 = a4;
  v38 = a3;
  lpCriticalSection = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  memset_0(&v53, 0, 0x4D0uLL);
  v8 = *a7;
  if ( *a7 )
  {
    LastError = GetLastError();
    (*(void (__fastcall **)(CAudioResourceManager *, unsigned __int64))(*(_QWORD *)g_AudioResourceManager + 40LL))(
      g_AudioResourceManager,
      v8);
    SetLastError(LastError);
  }
  *a7 = 0LL;
  v41 = 0LL;
  v9 = 0;
  v10 = 0LL;
  ppv[0] = 0LL;
  v11 = 1;
  v40 = 0LL;
  Instance = 0;
  *(_QWORD *)v37 = 0LL;
  memset(pvar, 0, sizeof(pvar));
  if ( (unsigned int)GetClassFromEndpointId(a2) )
  {
    v11 = 0;
  }
  else
  {
    Instance = CoCreateInstance(
                 &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                 0LL,
                 0x17u,
                 &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                 ppv);
    if ( Instance >= 0 )
    {
      Instance = (*(__int64 (__fastcall **)(LPVOID, struct _RTL_CRITICAL_SECTION *, __int64 *))(*(_QWORD *)ppv[0] + 40LL))(
                   ppv[0],
                   a2,
                   &v40);
      if ( Instance >= 0 )
      {
        Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v40 + 32LL))(v40, 0LL, v37);
        if ( Instance >= 0
          && (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(**(_QWORD **)v37 + 40LL))(
               *(_QWORD *)v37,
               &DEVPKEY_AudioEndpointPlugin_FactoryCLSID,
               pvar) >= 0 )
        {
          v11 = LOWORD(pvar[0]) != 72;
        }
      }
    }
    PropVariantClear(pvar);
  }
  if ( *(_QWORD *)v37 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v37 + 16LL))(*(_QWORD *)v37);
  if ( v40 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  v15 = (CConstraintModel *)ppv[0];
  if ( ppv[0] )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv[0] + 16LL))(ppv[0]);
  if ( Instance < 0 )
    goto LABEL_67;
  if ( v11 )
  {
    v16 = *(_QWORD *)(a1 + 16);
    *(_OWORD *)ppv = *v42;
    Instance = CConstraintModel::GetEndpointInformationFromId(
                 v15,
                 (const unsigned __int16 *)a2,
                 v62,
                 v14,
                 v63,
                 v35,
                 v37);
    if ( Instance >= 0 )
    {
      v46 = &KeywordDetectorResourceConsumer::`vftable';
      v17 = &v48;
      v50 = v37[0];
      v18 = 201LL;
      v47 = 1;
      v51 = *(_OWORD *)ppv;
      v52 = a5;
      do
      {
        if ( v18 == -2147483445 )
          goto LABEL_24;
        v19 = *((_WORD *)v17 + 1096);
        if ( !v19 )
          goto LABEL_24;
        *(_WORD *)v17 = v19;
        v17 = (int *)((char *)v17 + 2);
        --v18;
      }
      while ( v18 );
      v17 = (int *)((char *)v17 - 2);
LABEL_24:
      *(_WORD *)v17 = 0;
      v20 = &v49;
      v21 = 261LL;
      do
      {
        v15 = (CConstraintModel *)(v21 + 2147483385);
        if ( v21 == -2147483385 )
          goto LABEL_29;
        v15 = (CConstraintModel *)*((unsigned __int16 *)v20 + 1103);
        if ( !(_WORD)v15 )
          goto LABEL_29;
        *(_WORD *)v20 = (_WORD)v15;
        v20 += 2;
        --v21;
      }
      while ( v21 );
      v20 -= 2;
LABEL_29:
      *(_WORD *)v20 = 0;
      Instance = 0;
      v14 = v47;
      v22 = v47;
      ppv[0] = 0LL;
      v37[0] = 0;
      if ( v47 == 1 )
        v22 = (v50 << 16) | (4 * v52) | 1;
      v13 = *(_QWORD *)(v16 + 128);
      if ( !v13 || (v28 = *(_QWORD *)(v13 + 8LL * (v22 % *(_DWORD *)(v16 + 144)))) == 0 )
      {
LABEL_32:
        v9 = 0;
        v10 = 0LL;
        goto LABEL_33;
      }
      while ( 1 )
      {
        if ( *(_DWORD *)(v28 + 24) == v22 )
        {
          v15 = *(CConstraintModel **)v28;
          v29 = *(_DWORD *)(*(_QWORD *)v28 + 8LL);
          if ( v29 == 1 )
          {
            if ( v14 == 1 )
            {
              if ( (unsigned __int8)StreamResourceConsumer::operator==(v15, &v46) )
                goto LABEL_54;
              v14 = v47;
            }
          }
          else if ( v29 )
          {
            if ( v29 == v14 )
              goto LABEL_54;
          }
          else if ( !v14 && *((_DWORD *)v15 + 4) == v48 )
          {
LABEL_54:
            ResourceInfoArrayFromResourceList = CConstraintModel::GetResourceInfoArrayFromResourceList(
                                                  (_DWORD)v15,
                                                  *(_QWORD *)(v28 + 8),
                                                  v13,
                                                  v14,
                                                  (__int64)v37,
                                                  (__int64)ppv);
            v9 = v37[0];
            Instance = ResourceInfoArrayFromResourceList;
            v10 = (struct _ResourceInfo *)ppv[0];
            break;
          }
        }
        v28 = *(_QWORD *)(v28 + 16);
        if ( !v28 )
          goto LABEL_32;
      }
    }
  }
LABEL_33:
  if ( Instance < 0 )
    goto LABEL_67;
  if ( v9 )
  {
    v31 = (char *)lpCriticalSection;
    Instance = CConstraintModel::GetEndpointInformationFromId(
                 v15,
                 (const unsigned __int16 *)lpCriticalSection,
                 v59,
                 v14,
                 v60,
                 v35,
                 v61);
    if ( Instance < 0 )
      goto LABEL_67;
    Instance = CConstraintModelResourceManager::InternalEnforceEndpointExclusivity(a1, v59, v60, v61[0], a6, v38, 0);
    if ( Instance < 0 )
      goto LABEL_67;
    v32 = v9;
    v24 = a1;
    Instance = CConstraintModelResourceManager::AcquireResourceHandle(
                 (CConstraintModelResourceManager *)a1,
                 v10,
                 v32,
                 a6,
                 0,
                 &v41);
    if ( Instance < 0 )
      goto LABEL_67;
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      &lpCriticalSection,
      a1 + 120);
    v58 = a5;
    v23 = v41;
    v53 = v41;
    v33 = *v42;
    v57 = v38;
    v56 = v33;
    v54 = 0;
    v61[1] = a6;
    Instance = StringCchCopyW((char *)v55, 128LL, v31);
    if ( Instance >= 0 )
      ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::AddHead(a1 + 160, &v53);
    if ( v44 )
      LeaveCriticalSection(lpCriticalSection);
  }
  else
  {
    v23 = v41;
    v24 = a1;
  }
  if ( Instance >= 0 )
  {
    v25 = *a7;
    if ( *a7 )
    {
      v34 = GetLastError();
      (*(void (__fastcall **)(CAudioResourceManager *, unsigned __int64))(*(_QWORD *)g_AudioResourceManager + 40LL))(
        g_AudioResourceManager,
        v25);
      SetLastError(v34);
      v24 = a1;
    }
    *a7 = v23;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_dI(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, v13, a6, v23);
    }
    goto LABEL_41;
  }
LABEL_67:
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      21LL,
      &WPP_917ef38764913c31df93337219a3aa90_Traceguids,
      (unsigned int)Instance);
  }
  v24 = a1;
LABEL_41:
  if ( v10 )
    operator delete(v10);
  LeaveCriticalSection((LPCRITICAL_SECTION)(v24 + 24));
  return (unsigned int)Instance;
}
