/*
 * XREFs of ?CreateRecentItem@RecentAppsCache@Discover@PenWorkspace@@AEAAJV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@PEAPEAUIDiscoverRecentItem@@@Z @ 0x1801955E8
 * Callers:
 *     ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180195BC4 (-GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV-$vector@V-$ComPtr@UIDiscoverRecent.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VUTMRecentItem@Discover@PenWorkspace@@UIDiscoverRecentItem@@PEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Details@WRL@Microsoft@@YAJPEAPEAUIDiscoverRecentItem@@$$QEAPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180194444 (--$MakeAndInitialize@VUTMRecentItem@Discover@PenWorkspace@@UIDiscoverRecentItem@@PEAUIUnifiedTil.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::CreateRecentItem(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rbx
  int ActivationFactory; // eax
  int v8; // ebx
  std::_Ref_count_base *v9; // rcx
  const WCHAR *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rdx
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v16; // rax
  const WCHAR *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // rdx
  std::_Ref_count_base *v21; // rcx
  __int64 v22; // [rsp+20h] [rbp-60h] BYREF
  __int64 v23; // [rsp+28h] [rbp-58h] BYREF
  const WCHAR *v24; // [rsp+30h] [rbp-50h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v25; // [rsp+38h] [rbp-48h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v26[3]; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  __int64 v28; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v26[1] = (struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *)-2LL;
  v26[2] = (struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *)a2;
  *a3 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v28 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"WindowsInternal.Shell.UnifiedTile.PackagedUnifiedTileIdentifier",
    0x40u,
    0x3Fu);
  v6 = v28;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  ActivationFactory = RoGetActivationFactory(v6, &GUID_ec3e7864_aaab_4367_9c63_94d289545500, &v23);
  v8 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x126,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)ActivationFactory);
LABEL_3:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    v9 = *(std::_Ref_count_base **)(a2 + 8);
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    return (unsigned int)v8;
  }
  v11 = *(const WCHAR **)a2;
  if ( *(_QWORD *)(*(_QWORD *)a2 + 24LL) >= 8uLL )
    v11 = *(const WCHAR **)v11;
  v24 = v11;
  v12 = v23;
  v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&hstringHeader, &v24);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v12 + 48LL))(v12, *(_QWORD *)(v13 + 24), &v22) < 0 )
  {
    v24 = 0LL;
    v28 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"WindowsInternal.Shell.UnifiedTile.Win32UnifiedTileIdentifier",
      0x3Du,
      0x3Cu);
    v14 = v28;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    v8 = RoGetActivationFactory(v14, &GUID_0e7735be_a965_44a6_a75f_54b8bcd67bec, &v24);
    if ( v8 < 0 )
    {
      v15 = 298LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v8);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
      goto LABEL_3;
    }
    v16 = *(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **)a2;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 24LL) >= 8uLL )
      v16 = *(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **)v16;
    v26[0] = v16;
    v17 = v24;
    v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&hstringHeader, (const WCHAR **)v26);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    v8 = (*(__int64 (__fastcall **)(const WCHAR *, _QWORD, __int64 *))(*(_QWORD *)v17 + 48LL))(
           v17,
           *(_QWORD *)(v18 + 24),
           &v22);
    if ( v8 < 0 )
    {
      v15 = 299LL;
      goto LABEL_11;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
  }
  v25 = 0LL;
  v19 = *(_QWORD *)(a1 + 192);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **))(*(_QWORD *)v19 + 64LL))(
         v19,
         v22,
         &v25);
  if ( v8 < 0 )
  {
    v20 = 303LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
    goto LABEL_3;
  }
  if ( !v25 )
  {
    v8 = -2147418113;
    v20 = 304LL;
    goto LABEL_19;
  }
  v26[0] = v25;
  v8 = Microsoft::WRL::Details::MakeAndInitialize<PenWorkspace::Discover::UTMRecentItem,IDiscoverRecentItem,WindowsInternal::Shell::UnifiedTile::IUnifiedTile *>(
         a3,
         v26);
  if ( v8 < 0 )
  {
    v20 = 306LL;
    goto LABEL_19;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  v21 = *(std::_Ref_count_base **)(a2 + 8);
  if ( v21 )
    std::_Ref_count_base::_Decref(v21);
  return 0LL;
}
