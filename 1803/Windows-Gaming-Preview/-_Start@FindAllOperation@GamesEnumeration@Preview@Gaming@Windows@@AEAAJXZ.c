/*
 * XREFs of ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18000933C
 * Callers:
 *     _lambda_1fac56e8dc857868f8bd6529f7683e95_::operator() @ 0x18001A9D4 (_lambda_1fac56e8dc857868f8bd6529f7683e95_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180003674 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180009A98 (-_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Uni.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_GameConfigStoreGameListEntries@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18000C770 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_GameConfigStoreGameListEntri.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18000DB00 (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180010228 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1800105E4 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     ?IsUserPinnedTile@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAE@Z @ 0x180010DE4 (-IsUserPinnedTile@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIUnifiedTile@UnifiedTile@Shell.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010E8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateGameConfigStoreClientIfNeeded@@YAJAEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x180014944 (-CreateGameConfigStoreClientIfNeeded@@YAJAEAV-$shared_ptr@UIGameConfigStore@ExecutionModel@@@std.c)
 *     ?DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV?$function@$$A6AJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z@std@@@Z @ 0x180014B9C (-DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV-$function@$$A6AJU_GUID@.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x18003CB7C (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x18003CD74 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 *     __security_check_cookie @ 0x180041F40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
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
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  int v15; // ecx
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v16; // rcx
  int v17; // eax
  unsigned int v18; // ebx
  unsigned int v19; // esi
  int v20; // eax
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v21; // rcx
  int v22; // eax
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // ecx
  unsigned __int8 *v30; // r8
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v31; // rcx
  int v32; // eax
  unsigned int v33; // ebx
  unsigned int v34; // esi
  int IsUserPinnedTile; // eax
  wil::details::in1diag3 *v36; // rcx
  __int64 v37; // rdx
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v38; // rcx
  int v39; // eax
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v40; // rcx
  wil::details::in1diag3 *v41; // rcx
  wil::details_abi *v42; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v44; // rsi
  int GameConfigStoreClientIfNeeded; // eax
  int v46; // ebx
  unsigned __int64 v47; // r9
  __int64 v48; // rdx
  struct wil::ThreadErrorContext *v49; // r8
  _QWORD *v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  int v55; // [rsp+20h] [rbp-E0h]
  struct DiagnosticsInfo *v56; // [rsp+20h] [rbp-E0h]
  char v57; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v58; // [rsp+51h] [rbp-AFh] BYREF
  __int64 v59; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v60; // [rsp+60h] [rbp-A0h] BYREF
  char *v61; // [rsp+68h] [rbp-98h] BYREF
  __int16 v62; // [rsp+70h] [rbp-90h]
  __int64 v63; // [rsp+78h] [rbp-88h] BYREF
  __int64 v64; // [rsp+80h] [rbp-80h]
  unsigned int v65; // [rsp+88h] [rbp-78h] BYREF
  char **v66; // [rsp+90h] [rbp-70h]
  int v67; // [rsp+98h] [rbp-68h]
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v68; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v69; // [rsp+A8h] [rbp-58h]
  unsigned int v70; // [rsp+B0h] [rbp-50h] BYREF
  char **v71; // [rsp+B8h] [rbp-48h]
  int v72; // [rsp+C0h] [rbp-40h]
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v73; // [rsp+C8h] [rbp-38h] BYREF
  DiagnosticsInfo v74; // [rsp+D0h] [rbp-30h] BYREF
  int v75; // [rsp+D8h] [rbp-28h] BYREF
  __int16 v76; // [rsp+DCh] [rbp-24h]
  HANDLE hObject; // [rsp+E0h] [rbp-20h] BYREF
  struct wil::details_abi::ThreadLocalData *v78; // [rsp+E8h] [rbp-18h] BYREF
  int v79; // [rsp+F0h] [rbp-10h]
  int v80; // [rsp+F4h] [rbp-Ch]
  unsigned int v81[2]; // [rsp+F8h] [rbp-8h] BYREF
  const char *v82; // [rsp+100h] [rbp+0h]
  __int64 v83; // [rsp+108h] [rbp+8h]
  __int16 v84; // [rsp+110h] [rbp+10h]
  __int64 v85; // [rsp+118h] [rbp+18h]
  __int64 v86; // [rsp+120h] [rbp+20h]
  _QWORD v87[7]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD *v88; // [rsp+168h] [rbp+68h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v85 = -2LL;
  hObject = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(this, a2, &hObject);
  v6 = CallingProcessHandle;
  if ( CallingProcessHandle < 0 )
  {
    v7 = (unsigned int)CallingProcessHandle;
    v8 = 63LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)v7);
    goto LABEL_94;
  }
  v9 = CallerIdentity::CheckCapabilityFromProcessHandle((CallerIdentity *)hObject, v4, &v58, v5);
  v6 = v9;
  if ( v9 < 0 )
  {
    v7 = (unsigned int)v9;
    v8 = 67LL;
    goto LABEL_7;
  }
  if ( !(_BYTE)v58 )
  {
    v6 = -2147024891;
    v7 = 2147942405LL;
    v8 = 68LL;
    goto LABEL_7;
  }
  v63 = 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 11) + 72LL))(*((_QWORD *)this + 11), &v63);
  v6 = v10;
  if ( v10 < 0 )
  {
    v11 = 72LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_92;
  }
  v10 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(v63);
  v6 = v10;
  if ( v10 < 0 )
  {
    v11 = 73LL;
    goto LABEL_12;
  }
  v60 = 0LL;
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *))(**((_QWORD **)this + 11) + 56LL))(
          *((_QWORD *)this + 11),
          3LL,
          0LL,
          &v60);
  v6 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4C,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_90;
  }
  v59 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v60 + 56LL))(v60, &v59);
  v6 = v13;
  if ( v13 < 0 )
  {
    v14 = 79LL;
LABEL_44:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_88;
  }
  v69 = v59;
  v71 = &v61;
  v72 = 0;
  v73 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v59 + 56LL))(v59, &v70);
  *(_DWORD *)v71 = v15;
  if ( v15 >= 0 && v70 )
  {
    v16 = v73;
    if ( v73 )
    {
      v73 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **))(*(_QWORD *)v69 + 48LL))(
            v69,
            0LL,
            &v73);
    *(_DWORD *)v71 = v17;
  }
  v18 = 0;
  v19 = v70;
  while ( *(int *)v71 >= 0 && v18 != v19 )
  {
    v20 = Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile(this, v73);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x54,
        (unsigned int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
        (const char *)(unsigned int)v20,
        v55);
    ++v18;
    if ( *(int *)v71 >= 0 && v18 < v70 )
    {
      v21 = v73;
      if ( v73 )
      {
        v73 = 0LL;
        (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *))(*(_QWORD *)v21 + 16LL))(v21);
      }
      v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **))(*(_QWORD *)v69 + 48LL))(
              v69,
              v18,
              &v73);
      *(_DWORD *)v71 = v22;
    }
  }
  v23 = v73;
  if ( v73 )
  {
    v73 = 0LL;
    (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *))(*(_QWORD *)v23 + 16LL))(v23);
  }
  if ( (int)v61 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x56,
      (unsigned int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v61,
      v55);
  v24 = *((_QWORD *)this + 11);
  v25 = v60;
  if ( v60 )
  {
    v60 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v24 + 56LL))(v24, 0LL, 0LL, &v60);
  v6 = v13;
  if ( v13 < 0 )
  {
    v14 = 89LL;
    goto LABEL_44;
  }
  v26 = v60;
  v27 = v59;
  if ( v59 )
  {
    v59 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 56LL))(v26, &v59);
  v6 = v13;
  if ( v13 < 0 )
  {
    v14 = 90LL;
    goto LABEL_44;
  }
  v64 = v59;
  v66 = &v61;
  v67 = 0;
  v68 = 0LL;
  v29 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v59 + 56LL))(v59, &v65);
  *(_DWORD *)v66 = v29;
  if ( v29 >= 0 && v65 )
  {
    v31 = v68;
    if ( v68 )
    {
      v68 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *))(*(_QWORD *)v31 + 16LL))(v31);
    }
    v32 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **))(*(_QWORD *)v64 + 48LL))(
            v64,
            0LL,
            &v68);
    *(_DWORD *)v66 = v32;
  }
  v33 = 0;
  v34 = v65;
  while ( *(int *)v66 >= 0 && v33 != v34 )
  {
    v86 = 0LL;
    v57 = 0;
    IsUserPinnedTile = Windows::Gaming::Preview::GamesEnumeration::IsUserPinnedTile(
                         v68,
                         (struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *)&v57,
                         v30);
    v36 = retaddr;
    if ( IsUserPinnedTile >= 0 )
    {
      if ( !v57 )
        goto LABEL_59;
      IsUserPinnedTile = Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile(this, v68);
      v36 = retaddr;
      if ( IsUserPinnedTile >= 0 )
        goto LABEL_59;
      v37 = 99LL;
    }
    else
    {
      v37 = 96LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v36,
      (void *)v37,
      (unsigned int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)IsUserPinnedTile,
      v55);
LABEL_59:
    ++v33;
    if ( *(int *)v66 >= 0 && v33 < v65 )
    {
      v38 = v68;
      if ( v68 )
      {
        v68 = 0LL;
        (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *))(*(_QWORD *)v38 + 16LL))(v38);
      }
      v39 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **))(*(_QWORD *)v64 + 48LL))(
              v64,
              v33,
              &v68);
      *(_DWORD *)v66 = v39;
    }
  }
  v40 = v68;
  if ( v68 )
  {
    v68 = 0LL;
    (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *))(*(_QWORD *)v40 + 16LL))(v40);
  }
  v41 = retaddr;
  if ( (int)v61 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x66,
      (unsigned int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v61,
      v55);
  *(_QWORD *)v81 = retaddr;
  v82 = "onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp";
  v83 = 0LL;
  v84 = 105;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetCachedFeatureEnabledState(v41);
  HIDWORD(v61) = 0;
  LOBYTE(v62) = 3;
  v75 = 0;
  v76 = v62;
  v74.cost = 3;
  v56 = (struct DiagnosticsInfo *)1;
  if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                       &`wil::Feature<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetFeaturePropertyCache'::`2'::data,
                       v28,
                       2LL)
    && g_wil_details_pfnFeatureLoggingHook )
  {
    g_wil_details_pfnFeatureLoggingHook(
      0xB6B210u,
      (const struct FEATURE_LOGGED_TRAITS *)&v75,
      0LL,
      1,
      (const enum wil_ReportingKind *)&v74,
      0LL,
      0,
      1uLL);
  }
  LOBYTE(v42) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v42);
  v44 = ThreadLocalDataCache;
  v78 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v80 = *((_DWORD *)ThreadLocalDataCache + 4);
    v79 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v79;
    v44 = v78;
  }
  GameConfigStoreClientIfNeeded = CreateGameConfigStoreClientIfNeeded((char *)this + 192);
  v46 = GameConfigStoreClientIfNeeded;
  if ( GameConfigStoreClientIfNeeded < 0 )
  {
    v47 = (unsigned int)GameConfigStoreClientIfNeeded;
    v48 = 107LL;
    goto LABEL_77;
  }
  v87[0] = off_180046C50;
  v87[1] = this;
  v88 = v87;
  v46 = DoWorkOnGameConfigStore(*((_QWORD *)this + 24), v87);
  if ( v88 )
  {
    v50 = v87;
    LOBYTE(v50) = v88 != v87;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v88 + 32LL))(v88, v50);
    v88 = 0LL;
  }
  if ( v46 >= 0 )
  {
    v46 = 0;
  }
  else
  {
    v47 = (unsigned int)v46;
    v48 = 115LL;
LABEL_77:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v48,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)v47);
  }
  if ( v46 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v46,
      (wil::ThreadErrorContext *)&v78,
      v49,
      (unsigned int)v81,
      v56);
  if ( v44 )
    *((_DWORD *)v44 + 4) = v80;
  v6 = 0;
LABEL_88:
  v51 = v59;
  if ( v59 )
  {
    v59 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
  }
LABEL_90:
  v52 = v60;
  if ( v60 )
  {
    v60 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
  }
LABEL_92:
  v53 = v63;
  if ( v63 )
  {
    v63 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
  }
LABEL_94:
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  return v6;
}
