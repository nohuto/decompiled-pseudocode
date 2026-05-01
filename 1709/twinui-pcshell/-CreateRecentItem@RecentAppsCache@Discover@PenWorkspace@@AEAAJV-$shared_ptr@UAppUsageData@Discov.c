/*
 * XREFs of ?CreateRecentItem@RecentAppsCache@Discover@PenWorkspace@@AEAAJV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@PEAPEAUIDiscoverRecentItem@@@Z @ 0x1800E851C
 * Callers:
 *     ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800E7E2C (-GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV-$vector@V-$ComPtr@UIDiscoverRecent.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$MakeAndInitialize@VUTMRecentItem@Discover@PenWorkspace@@UIDiscoverRecentItem@@PEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Details@WRL@Microsoft@@YAJPEAPEAUIDiscoverRecentItem@@$$QEAPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1800EBAA8 (--$MakeAndInitialize@VUTMRecentItem@Discover@PenWorkspace@@UIDiscoverRecentItem@@PEAUIUnifiedTil.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::CreateRecentItem(__int64 a1, const WCHAR **a2, _QWORD *a3)
{
  HRESULT v6; // eax
  int ActivationFactory; // eax
  unsigned int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rcx
  volatile signed __int32 *v11; // rdi
  const WCHAR *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rsi
  HRESULT v16; // eax
  HSTRING v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  const WCHAR *v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  volatile signed __int32 *v33; // rdi
  int v34[2]; // [rsp+20h] [rbp-A9h] BYREF
  __int64 v35; // [rsp+28h] [rbp-A1h] BYREF
  __int64 v36; // [rsp+30h] [rbp-99h] BYREF
  __int64 v37; // [rsp+38h] [rbp-91h] BYREF
  const WCHAR *v38; // [rsp+40h] [rbp-89h] BYREF
  const WCHAR *v39; // [rsp+48h] [rbp-81h] BYREF
  _QWORD v40[3]; // [rsp+50h] [rbp-79h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-61h] BYREF
  HSTRING string; // [rsp+80h] [rbp-49h] BYREF
  HSTRING_HEADER v43; // [rsp+88h] [rbp-41h] BYREF
  HSTRING v44; // [rsp+A0h] [rbp-29h] BYREF
  _BYTE v45[32]; // [rsp+A8h] [rbp-21h] BYREF
  _BYTE v46[32]; // [rsp+C8h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v40[1] = -2LL;
  v40[2] = a2;
  *a3 = 0LL;
  *(_QWORD *)v34 = 0LL;
  v35 = 0LL;
  string = 0LL;
  v6 = WindowsCreateStringReference(
         L"WindowsInternal.Shell.UnifiedTile.PackagedUnifiedTileIdentifier",
         0x3Fu,
         &hstringHeader,
         &string);
  if ( v6 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_ec3e7864_aaab_4367_9c63_94d289545500, &v35);
  v8 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x126,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_5;
  }
  v13 = *a2;
  if ( *((_QWORD *)*a2 + 3) >= 8uLL )
    v13 = *(const WCHAR **)v13;
  v38 = v13;
  v14 = v35;
  v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v45, &v38);
  if ( (*(int (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v14 + 48LL))(v14, *(_QWORD *)(v15 + 24), v34) < 0 )
  {
    v36 = 0LL;
    v44 = 0LL;
    v16 = WindowsCreateStringReference(
            L"WindowsInternal.Shell.UnifiedTile.Win32UnifiedTileIdentifier",
            0x3Cu,
            &v43,
            &v44);
    if ( v16 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16);
      __debugbreak();
    }
    v17 = v44;
    v18 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v8 = RoGetActivationFactory(v17, &GUID_0e7735be_a965_44a6_a75f_54b8bcd67bec, &v36);
    if ( (v8 & 0x80000000) != 0 )
    {
      v19 = 298LL;
LABEL_23:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v19,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)v8);
      v20 = v36;
      if ( !v36 )
        goto LABEL_5;
      v36 = 0LL;
      goto LABEL_25;
    }
    v21 = *a2;
    if ( *((_QWORD *)*a2 + 3) >= 8uLL )
      v21 = *(const WCHAR **)v21;
    v39 = v21;
    v22 = v36;
    v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v46, &v39);
    v24 = *(_QWORD *)v34;
    if ( *(_QWORD *)v34 )
    {
      *(_QWORD *)v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v22 + 48LL))(v22, *(_QWORD *)(v23 + 24), v34);
    if ( (v8 & 0x80000000) != 0 )
    {
      v19 = 299LL;
      goto LABEL_23;
    }
    v25 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
  }
  v37 = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(a1 + 192) + 64LL))(
         *(_QWORD *)(a1 + 192),
         *(_QWORD *)v34,
         &v37);
  if ( (v8 & 0x80000000) != 0 )
  {
    v26 = 303LL;
LABEL_36:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v26,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)v8);
    v20 = v37;
    if ( !v37 )
    {
LABEL_5:
      v9 = v35;
      if ( v35 )
      {
        v35 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      v10 = *(_QWORD *)v34;
      if ( *(_QWORD *)v34 )
      {
        *(_QWORD *)v34 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      v11 = (volatile signed __int32 *)a2[1];
      if ( !v11 )
        return v8;
      if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) != 1 )
        return v8;
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) != 1 )
        return v8;
      goto LABEL_12;
    }
    v37 = 0LL;
LABEL_25:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    goto LABEL_5;
  }
  if ( !v37 )
  {
    v8 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x130,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)0x8000FFFFLL);
    v27 = v37;
    if ( v37 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    v28 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
    v29 = *(_QWORD *)v34;
    if ( *(_QWORD *)v34 )
    {
      *(_QWORD *)v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
    v11 = (volatile signed __int32 *)a2[1];
    if ( !v11 )
      return v8;
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) != 1 )
      return v8;
    (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
    if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) != 1 )
      return v8;
LABEL_12:
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    return v8;
  }
  v40[0] = v37;
  v8 = Microsoft::WRL::Details::MakeAndInitialize<PenWorkspace::Discover::UTMRecentItem,IDiscoverRecentItem,WindowsInternal::Shell::UnifiedTile::IUnifiedTile *>(
         a3,
         v40);
  if ( (v8 & 0x80000000) != 0 )
  {
    v26 = 306LL;
    goto LABEL_36;
  }
  v30 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
  v31 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  v32 = *(_QWORD *)v34;
  if ( *(_QWORD *)v34 )
  {
    *(_QWORD *)v34 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  v33 = (volatile signed __int32 *)a2[1];
  if ( v33 )
  {
    if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v33)(v33);
      if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
    }
  }
  return 0LL;
}
