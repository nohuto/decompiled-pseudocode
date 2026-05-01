/*
 * XREFs of ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800091E8
 * Callers:
 *     _lambda_45756babbe3c579ac0682f1f5b8db4a7_::operator() @ 0x18001A008 (_lambda_45756babbe3c579ac0682f1f5b8db4a7_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180003768 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1800099CC (-_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Uni.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_GameConfigStoreGameListEntries@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18000C640 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_GameConfigStoreGameListEntri.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18000D93C (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     std::shared_ptr_ExecutionModel::IGameConfigStore_::_Resetp_ExecutionModel::IGameConfigStore__lambda_2b534b87faecf05774392967791fe69a___ @ 0x18000E4C4 (std--shared_ptr_ExecutionModel--IGameConfigStore_--_Resetp_ExecutionModel--IGameConfigStore__lam.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18000FF0C (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180010280 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     ?IsUserPinnedTile@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAE@Z @ 0x1800109D0 (-IsUserPinnedTile@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIUnifiedTile@UnifiedTile@Shell.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010A78 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV?$function@$$A6AJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z@std@@@Z @ 0x180014468 (-DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV-$function@$$A6AJU_GUID@.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x18003FDFC (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x18004002C (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 *     __security_check_cookie @ 0x180040F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_Start(
        Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *this,
        __int64 a2)
{
  int CallingProcessHandle; // eax
  void *v4; // rdx
  bool *v5; // r9
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  int v13; // ecx
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v14; // rcx
  int v15; // eax
  unsigned int v16; // ebx
  unsigned int v17; // esi
  int v18; // eax
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v19; // rcx
  int v20; // eax
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rdx
  int v27; // ecx
  unsigned __int8 *v28; // r8
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v29; // rcx
  int v30; // eax
  unsigned int v31; // ebx
  unsigned int v32; // esi
  int IsUserPinnedTile; // eax
  wil::details::in1diag3 *v34; // rcx
  __int64 v35; // rdx
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v36; // rcx
  int v37; // eax
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v38; // rcx
  wil::details::in1diag3 *v39; // rcx
  wil::details_abi *v40; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v42; // rbx
  int v43; // eax
  __int64 v44; // r8
  int v45; // esi
  unsigned __int64 v46; // r9
  __int64 v47; // rdx
  struct wil::ThreadErrorContext *v48; // r8
  __int64 v49; // rcx
  __int64 v50; // rbx
  _QWORD *v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  struct DiagnosticsInfo *v56; // [rsp+28h] [rbp-E0h]
  unsigned __int16 v57[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v58; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v59; // [rsp+68h] [rbp-A0h] BYREF
  int v60; // [rsp+70h] [rbp-98h]
  char *v61; // [rsp+74h] [rbp-94h] BYREF
  __int16 v62; // [rsp+7Ch] [rbp-8Ch]
  __int64 v63; // [rsp+80h] [rbp-88h] BYREF
  __int64 v64; // [rsp+88h] [rbp-80h]
  unsigned int v65; // [rsp+90h] [rbp-78h] BYREF
  char **v66; // [rsp+98h] [rbp-70h]
  int v67; // [rsp+A0h] [rbp-68h]
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v68; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v69; // [rsp+B0h] [rbp-58h]
  unsigned int v70; // [rsp+B8h] [rbp-50h] BYREF
  char **v71; // [rsp+C0h] [rbp-48h]
  int v72; // [rsp+C8h] [rbp-40h]
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v73; // [rsp+D0h] [rbp-38h] BYREF
  struct wil::details_abi::ThreadLocalData *v74; // [rsp+D8h] [rbp-30h] BYREF
  int v75; // [rsp+E0h] [rbp-28h]
  int v76; // [rsp+E4h] [rbp-24h]
  DiagnosticsInfo v77; // [rsp+E8h] [rbp-20h] BYREF
  int v78; // [rsp+F0h] [rbp-18h] BYREF
  __int16 v79; // [rsp+F4h] [rbp-14h]
  HANDLE hObject; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v81; // [rsp+100h] [rbp-8h] BYREF
  __int64 v82; // [rsp+110h] [rbp+8h] BYREF
  unsigned int v83[2]; // [rsp+118h] [rbp+10h] BYREF
  const char *v84; // [rsp+120h] [rbp+18h]
  __int64 v85; // [rsp+128h] [rbp+20h]
  __int16 v86; // [rsp+130h] [rbp+28h]
  __int64 v87; // [rsp+138h] [rbp+30h]
  __int64 v88; // [rsp+140h] [rbp+38h]
  __int64 v89; // [rsp+148h] [rbp+40h]
  _QWORD v90[7]; // [rsp+158h] [rbp+50h] BYREF
  _QWORD *v91; // [rsp+190h] [rbp+88h]
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v87 = -2LL;
  hObject = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(this, a2, &hObject);
  v6 = CallingProcessHandle;
  if ( CallingProcessHandle < 0 )
  {
    v7 = 63LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)CallingProcessHandle);
    goto LABEL_100;
  }
  CallingProcessHandle = CallerIdentity::CheckCapabilityFromProcessHandle(
                           (CallerIdentity *)hObject,
                           v4,
                           (unsigned __int16 *)((char *)v57 + 1),
                           v5);
  v6 = CallingProcessHandle;
  if ( CallingProcessHandle < 0 )
  {
    v7 = 67LL;
    goto LABEL_5;
  }
  if ( !HIBYTE(v57[0]) )
  {
    v6 = -2147024891;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)0x80070005LL);
    goto LABEL_100;
  }
  v63 = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 12) + 72LL))(*((_QWORD *)this + 12), &v63);
  v6 = v8;
  if ( v8 < 0 )
  {
    v9 = 72LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_98;
  }
  v8 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(v63);
  v6 = v8;
  if ( v8 < 0 )
  {
    v9 = 73LL;
    goto LABEL_12;
  }
  v59 = 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *))(**((_QWORD **)this + 12) + 56LL))(
          *((_QWORD *)this + 12),
          3LL,
          0LL,
          &v59);
  v6 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x4C,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_96;
  }
  v58 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v59 + 56LL))(v59, &v58);
  v6 = v11;
  if ( v11 < 0 )
  {
    v12 = 79LL;
LABEL_44:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v12,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_94;
  }
  v69 = v58;
  v71 = &v61;
  v72 = 0;
  v73 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v58 + 56LL))(v58, &v70);
  *(_DWORD *)v71 = v13;
  if ( v13 >= 0 && v70 )
  {
    v14 = v73;
    if ( v73 )
    {
      v73 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **))(*(_QWORD *)v69 + 48LL))(
            v69,
            0LL,
            &v73);
    *(_DWORD *)v71 = v15;
  }
  v16 = 0;
  v17 = v70;
  while ( *(int *)v71 >= 0 && v16 != v17 )
  {
    v18 = Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile(this, v73);
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x54,
        (unsigned int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
        (const char *)(unsigned int)v18,
        (int)v56);
    ++v16;
    if ( *(int *)v71 >= 0 && v16 < v70 )
    {
      v19 = v73;
      if ( v73 )
      {
        v73 = 0LL;
        (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *))(*(_QWORD *)v19 + 16LL))(v19);
      }
      v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **))(*(_QWORD *)v69 + 48LL))(
              v69,
              v16,
              &v73);
      *(_DWORD *)v71 = v20;
    }
  }
  v21 = v73;
  if ( v73 )
  {
    v73 = 0LL;
    (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *))(*(_QWORD *)v21 + 16LL))(v21);
  }
  if ( (int)v61 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x56,
      (unsigned int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v61,
      (int)v56);
  v22 = *((_QWORD *)this + 12);
  v23 = v59;
  if ( v59 )
  {
    v59 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v22 + 56LL))(v22, 0LL, 0LL, &v59);
  v6 = v11;
  if ( v11 < 0 )
  {
    v12 = 89LL;
    goto LABEL_44;
  }
  v24 = v59;
  v25 = v58;
  if ( v58 )
  {
    v58 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 56LL))(v24, &v58);
  v6 = v11;
  if ( v11 < 0 )
  {
    v12 = 90LL;
    goto LABEL_44;
  }
  v64 = v58;
  v66 = &v61;
  v67 = 0;
  v68 = 0LL;
  v27 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v58 + 56LL))(v58, &v65);
  *(_DWORD *)v66 = v27;
  if ( v27 >= 0 && v65 )
  {
    v29 = v68;
    if ( v68 )
    {
      v68 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *))(*(_QWORD *)v29 + 16LL))(v29);
    }
    v30 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **))(*(_QWORD *)v64 + 48LL))(
            v64,
            0LL,
            &v68);
    *(_DWORD *)v66 = v30;
  }
  v31 = 0;
  v32 = v65;
  while ( *(int *)v66 >= 0 && v31 != v32 )
  {
    v88 = 0LL;
    LOBYTE(v57[0]) = 0;
    IsUserPinnedTile = Windows::Gaming::Preview::GamesEnumeration::IsUserPinnedTile(
                         v68,
                         (struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *)v57,
                         v28);
    v34 = retaddr;
    if ( IsUserPinnedTile >= 0 )
    {
      if ( !LOBYTE(v57[0]) )
        goto LABEL_59;
      IsUserPinnedTile = Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile(this, v68);
      v34 = retaddr;
      if ( IsUserPinnedTile >= 0 )
        goto LABEL_59;
      v35 = 99LL;
    }
    else
    {
      v35 = 96LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v34,
      (void *)v35,
      (unsigned int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)IsUserPinnedTile,
      (int)v56);
LABEL_59:
    ++v31;
    if ( *(int *)v66 >= 0 && v31 < v65 )
    {
      v36 = v68;
      if ( v68 )
      {
        v68 = 0LL;
        (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *))(*(_QWORD *)v36 + 16LL))(v36);
      }
      v37 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **))(*(_QWORD *)v64 + 48LL))(
              v64,
              v31,
              &v68);
      *(_DWORD *)v66 = v37;
    }
  }
  v38 = v68;
  if ( v68 )
  {
    v68 = 0LL;
    (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *))(*(_QWORD *)v38 + 16LL))(v38);
  }
  v39 = retaddr;
  if ( (int)v61 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x66,
      (unsigned int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v61,
      (int)v56);
  *(_QWORD *)v83 = retaddr;
  v84 = "onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp";
  v85 = 0LL;
  v86 = 105;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetCachedFeatureEnabledState(v39);
  HIDWORD(v61) = 0;
  LOBYTE(v62) = 3;
  v78 = 0;
  v79 = v62;
  v77.cost = 3;
  if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                       &`wil::Feature<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetFeaturePropertyCache'::`2'::data,
                       v26,
                       2LL)
    && g_wil_details_pfnFeatureLoggingHook )
  {
    g_wil_details_pfnFeatureLoggingHook(
      0xB6B210u,
      (const struct FEATURE_LOGGED_TRAITS *)&v78,
      0LL,
      1,
      (const enum wil_ReportingKind *)&v77,
      0LL,
      0,
      1uLL);
  }
  LOBYTE(v40) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v40);
  v42 = ThreadLocalDataCache;
  v74 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v76 = *((_DWORD *)ThreadLocalDataCache + 4);
    v75 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v75;
    v42 = v74;
  }
  if ( !*((_QWORD *)this + 25) )
  {
    v82 = 0LL;
    v43 = CreateGameConfigStoreClient(&v82);
    v45 = v43;
    if ( v43 < 0 )
    {
      v46 = (unsigned int)v43;
      v47 = 112LL;
      goto LABEL_78;
    }
    LOBYTE(v60) = 0;
    v81 = 0LL;
    LOBYTE(v44) = 0;
    std::shared_ptr_ExecutionModel::IGameConfigStore_::_Resetp_ExecutionModel::IGameConfigStore__lambda_2b534b87faecf05774392967791fe69a___(
      &v81,
      v82,
      v44);
    v89 = *((_QWORD *)&v81 + 1);
    *((_QWORD *)&v81 + 1) = *((_QWORD *)this + 26);
    v49 = *((_QWORD *)&v81 + 1);
    *((_QWORD *)this + 26) = v89;
    *((_QWORD *)this + 25) = v81;
    if ( v49 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v49 + 8), 0xFFFFFFFF) == 1 )
      {
        v50 = *((_QWORD *)&v81 + 1);
        (***((void (__fastcall ****)(_QWORD))&v81 + 1))(*((_QWORD *)&v81 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v50 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v81 + 1) + 8LL))(*((_QWORD *)&v81 + 1));
      }
      v42 = v74;
    }
  }
  v90[0] = off_180045428;
  v90[1] = this;
  v91 = v90;
  v45 = DoWorkOnGameConfigStore(*((_QWORD *)this + 25), v90);
  if ( v91 )
  {
    v51 = v90;
    LOBYTE(v51) = v91 != v90;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v91 + 32LL))(v91, v51);
    v91 = 0LL;
  }
  if ( v45 >= 0 )
  {
    v45 = 0;
  }
  else
  {
    v46 = (unsigned int)v45;
    v47 = 125LL;
LABEL_78:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v47,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)v46);
  }
  if ( v45 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v45,
      (wil::ThreadErrorContext *)&v74,
      v48,
      (unsigned int)v83,
      v56);
  if ( v42 )
    *((_DWORD *)v42 + 4) = v76;
  v6 = 0;
LABEL_94:
  v52 = v58;
  if ( v58 )
  {
    v58 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
  }
LABEL_96:
  v53 = v59;
  if ( v59 )
  {
    v59 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
  }
LABEL_98:
  v54 = v63;
  if ( v63 )
  {
    v63 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
  }
LABEL_100:
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  return v6;
}
