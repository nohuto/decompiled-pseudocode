/*
 * XREFs of ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800E7E2C
 * Callers:
 *     ?GetRecentItems@PenWorkspaceDiscoverBroker@@UEAAJHPEAPEAUIObjectArray@@@Z @ 0x1800E3A80 (-GetRecentItems@PenWorkspaceDiscoverBroker@@UEAAJHPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@@Z @ 0x1800E8014 (-GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV-$vector@V-$shared_ptr@UAppUsa.c)
 *     ?EnsureUnifiedTileManager@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1800E80B4 (-EnsureUnifiedTileManager@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@Z @ 0x1800E82D8 (-IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV-$shared_ptr@UAppUsageData.c)
 *     ?CreateRecentItem@RecentAppsCache@Discover@PenWorkspace@@AEAAJV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@PEAPEAUIDiscoverRecentItem@@@Z @ 0x1800E851C (-CreateRecentItem@RecentAppsCache@Discover@PenWorkspace@@AEAAJV-$shared_ptr@UAppUsageData@Discov.c)
 *     ??1?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@QEAA@XZ @ 0x1800EB334 (--1-$vector@V-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V-$allocator@V-$shared_ptr@.c)
 *     ??0?$shared_ptr@I@std@@QEAA@AEBV01@@Z @ 0x1800EB52C (--0-$shared_ptr@I@std@@QEAA@AEBV01@@Z.c)
 *     ??$emplace_back@AEBV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@Z @ 0x1800EB914 (--$emplace_back@AEBV-$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VMonitorFrame@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 i; // rbx
  unsigned __int128 v11; // kr10_16
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rcx
  int v15; // eax
  const char *v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v20; // [rsp+28h] [rbp-90h]
  _BYTE v21[16]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v22[16]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int128 v23; // [rsp+60h] [rbp-58h] BYREF
  __int64 v24; // [rsp+70h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  __int64 v29; // [rsp+D8h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = this;
  v23 = 0LL;
  v24 = 0LL;
  SortedAppList = PenWorkspace::Discover::RecentAppsCache::GetSortedAppList(this, &v23);
  v7 = SortedAppList;
  if ( SortedAppList < 0 )
  {
    v8 = 172LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)SortedAppList);
    goto LABEL_21;
  }
  SortedAppList = PenWorkspace::Discover::RecentAppsCache::EnsureUnifiedTileManager(v5);
  v7 = SortedAppList;
  if ( SortedAppList < 0 )
  {
    v8 = 174LL;
    goto LABEL_5;
  }
  v9 = *((_QWORD *)&v23 + 1);
  v11 = v23;
  v20 = v11 >> 64;
  for ( i = v11; i != v9; i += 16LL )
  {
    v12 = std::shared_ptr<unsigned int>::shared_ptr<unsigned int>(v21, i);
    if ( (unsigned __int8)PenWorkspace::Discover::RecentAppsCache::IsQualifiedDisplayItem(v5, v12) )
    {
      v29 = 0LL;
      v13 = std::shared_ptr<unsigned int>::shared_ptr<unsigned int>(v22, i);
      v14 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      v15 = PenWorkspace::Discover::RecentAppsCache::CreateRecentItem(v5, v13, &v29);
      if ( v15 >= 0 )
      {
        try
        {
          std::vector<Microsoft::WRL::ComPtr<MonitorFrame>>::emplace_back<Microsoft::WRL::ComPtr<MonitorFrame> const &>(
            v3,
            &v29);
        }
        catch ( ... )
        {
          wil::details::in1diag3::Log_CaughtException(
            retaddr,
            (void *)0xBF,
            (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
            v16);
          v5 = this;
          v3 = a3;
          v4 = a2;
          v9 = v20;
          goto LABEL_17;
        }
        if ( (int)((__int64)(v3[1] - *v3) >> 3) >= v4 )
        {
          v17 = v29;
          if ( v29 )
          {
            v29 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          }
          break;
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xB5,
          (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
          (const char *)(unsigned int)v15);
      }
LABEL_17:
      v18 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
  }
  v7 = 0;
LABEL_21:
  std::vector<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>::~vector<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>(&v23);
  return v7;
}
