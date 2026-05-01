/*
 * XREFs of ?GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@@Z @ 0x180195EB4
 * Callers:
 *     ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180195BC4 (-GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV-$vector@V-$ComPtr@UIDiscoverRecent.c)
 *     ?HaveUsedPen@RecentAppsCache@Discover@PenWorkspace@@QEAAJPEAH@Z @ 0x180195F88 (-HaveUsedPen@RecentAppsCache@Discover@PenWorkspace@@QEAAJPEAH@Z.c)
 *     ?SaveDataToJson@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x1801979E0 (-SaveDataToJson@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAPEAUIJsonObject@Json@Data@Windows.c)
 * Callees:
 *     ??$_Sort_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@_JP6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0_JP6A_NAEAV10@2@Z@Z @ 0x180194DD8 (--$_Sort_unchecked@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@_JP6A_NAEAV12@0@Z.c)
 *     ??$emplace_back@AEBV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@1@@Z @ 0x180195140 (--$emplace_back@AEBV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@-$vector@V-$shared_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::GetSortedAppList(RTL_SRWLOCK *a1, __int64 a2)
{
  __int64 v2; // rsi
  RTL_SRWLOCK *v4; // rdi
  _QWORD *Ptr; // r14
  const char *v6; // r9
  _QWORD *i; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = a2;
  try
  {
    v4 = a1 + 21;
    AcquireSRWLockShared(a1 + 21);
    Ptr = a1[3].Ptr;
    for ( i = (_QWORD *)*Ptr; i != Ptr; i = (_QWORD *)*i )
      std::vector<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>::emplace_back<std::shared_ptr<PenWorkspace::Discover::AppUsageData> const &>(
        v2,
        i + 6);
    if ( v4 )
      ReleaseSRWLockShared(v4);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xE5,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      v6);
    v2 = a2;
  }
  std::_Sort_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,__int64,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
    *(__int64 **)v2,
    *(char **)(v2 + 8),
    (__int64)(*(_QWORD *)(v2 + 8) - *(_QWORD *)v2) >> 4,
    (unsigned __int8 (__fastcall *)(__int64 *, __int64 *))anonymous_namespace_::CompareAppUsageTimes);
  return 0LL;
}
