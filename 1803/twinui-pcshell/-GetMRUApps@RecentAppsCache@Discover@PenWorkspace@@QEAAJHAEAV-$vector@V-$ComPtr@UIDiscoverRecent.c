/*
 * XREFs of ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180195BC4
 * Callers:
 *     ?GetRecentItems@PenWorkspaceDiscoverBroker@@UEAAJHPEAPEAUIObjectArray@@@Z @ 0x180192640 (-GetRecentItems@PenWorkspaceDiscoverBroker@@UEAAJHPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@AEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@QEAAXAEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@Z @ 0x180194FF0 (--$emplace_back@AEAV-$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIDiscove.c)
 *     ?CreateRecentItem@RecentAppsCache@Discover@PenWorkspace@@AEAAJV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@PEAPEAUIDiscoverRecentItem@@@Z @ 0x1801955E8 (-CreateRecentItem@RecentAppsCache@Discover@PenWorkspace@@AEAAJV-$shared_ptr@UAppUsageData@Discov.c)
 *     ?EnsureUnifiedTileManager@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x18019590C (-EnsureUnifiedTileManager@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@@Z @ 0x180195EB4 (-GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV-$vector@V-$shared_ptr@UAppUsa.c)
 *     ?IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@Z @ 0x180196320 (-IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV-$shared_ptr@UAppUsageData.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::GetMRUApps(
        PenWorkspace::Discover::RecentAppsCache *this,
        int a2,
        _QWORD *a3)
{
  _QWORD *v3; // r15
  int v4; // r12d
  PenWorkspace::Discover::RecentAppsCache *v5; // r14
  int SortedAppList; // eax
  unsigned int v7; // esi
  char *v8; // rdi
  char *v9; // rbx
  std::_Ref_count_base *v10; // rcx
  int v12; // eax
  char *v13; // rbx
  std::_Ref_count_base *v14; // rcx
  char *v15; // rdi
  _QWORD *v16; // rbx
  _QWORD *v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // eax
  const char *v21; // r9
  char *i; // rbx
  std::_Ref_count_base *v23; // rcx
  void *v24; // [rsp+20h] [rbp-88h] BYREF
  __int128 v25; // [rsp+28h] [rbp-80h]
  __int64 v26; // [rsp+38h] [rbp-70h] BYREF
  _QWORD *v27; // [rsp+40h] [rbp-68h]
  __int128 v28; // [rsp+48h] [rbp-60h] BYREF
  _QWORD *v29; // [rsp+58h] [rbp-50h]
  _QWORD v30[8]; // [rsp+68h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v30[2] = -2LL;
  v3 = a3;
  v4 = a2;
  v5 = this;
  v24 = 0LL;
  v25 = 0LL;
  SortedAppList = PenWorkspace::Discover::RecentAppsCache::GetSortedAppList(this, &v24);
  v7 = SortedAppList;
  if ( SortedAppList < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAC,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)SortedAppList);
    v8 = (char *)v24;
    if ( !v24 )
      return v7;
    v9 = (char *)v24;
    if ( v24 != (void *)v25 )
    {
      do
      {
        v10 = (std::_Ref_count_base *)*((_QWORD *)v9 + 1);
        if ( v10 )
          std::_Ref_count_base::_Decref(v10);
        v9 += 16;
      }
      while ( v9 != (char *)v25 );
    }
LABEL_7:
    std::_Deallocate(v8, (__int64)(*((_QWORD *)&v25 + 1) - (_QWORD)v8) >> 4, 0x10uLL);
    return v7;
  }
  v12 = PenWorkspace::Discover::RecentAppsCache::EnsureUnifiedTileManager(v5);
  v7 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAE,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v12);
    v8 = (char *)v24;
    if ( !v24 )
      return v7;
    v13 = (char *)v24;
    if ( v24 != (void *)v25 )
    {
      do
      {
        v14 = (std::_Ref_count_base *)*((_QWORD *)v13 + 1);
        if ( v14 )
          std::_Ref_count_base::_Decref(v14);
        v13 += 16;
      }
      while ( v13 != (char *)v25 );
    }
    goto LABEL_7;
  }
  v15 = (char *)v24;
  v16 = v24;
  v17 = (_QWORD *)v25;
  v29 = (_QWORD *)v25;
  while ( 1 )
  {
    v27 = v16;
    if ( v16 == v17 )
      break;
    v18 = v16[1];
    if ( v18 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
      v18 = v16[1];
      v15 = (char *)v24;
    }
    v30[0] = *v16;
    v30[1] = v18;
    if ( (unsigned __int8)PenWorkspace::Discover::RecentAppsCache::IsQualifiedDisplayItem(v5, v30) )
    {
      v26 = 0LL;
      v28 = 0LL;
      v19 = v16[1];
      if ( v19 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
        v19 = v16[1];
        v15 = (char *)v24;
      }
      *(_QWORD *)&v28 = *v16;
      *((_QWORD *)&v28 + 1) = v19;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      v20 = PenWorkspace::Discover::RecentAppsCache::CreateRecentItem((__int64)v5, (__int64)&v28, &v26);
      if ( v20 >= 0 )
      {
        try
        {
          std::vector<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>::emplace_back<Microsoft::WRL::ComPtr<IDiscoverRecentItem> &>(
            v3,
            &v26);
        }
        catch ( ... )
        {
          wil::details::in1diag3::Log_CaughtException(
            retaddr,
            (void *)0xBF,
            (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
            v21);
          v5 = this;
          v3 = a3;
          v15 = (char *)v24;
          v16 = v27;
          v17 = v29;
          v4 = a2;
          goto LABEL_27;
        }
        if ( (int)((__int64)(v3[1] - *v3) >> 3) >= v4 )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
          break;
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          181LL,
          (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
          (const char *)(unsigned int)v20);
      }
LABEL_27:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    }
    v16 += 2;
  }
  if ( v15 )
  {
    for ( i = v15; i != (char *)v25; i += 16 )
    {
      v23 = (std::_Ref_count_base *)*((_QWORD *)i + 1);
      if ( v23 )
        std::_Ref_count_base::_Decref(v23);
    }
    std::_Deallocate(v15, (__int64)(*((_QWORD *)&v25 + 1) - (_QWORD)v15) >> 4, 0x10uLL);
  }
  return 0LL;
}
