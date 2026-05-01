/*
 * XREFs of ??1?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@QEAA@XZ @ 0x1801C0860
 * Callers:
 *     _PenWorkspace::Discover::RecentAppsCache::GetMRUApps_::_1_::dtor$0 @ 0x180195E66 (_PenWorkspace--Discover--RecentAppsCache--GetMRUApps_--_1_--dtor$0.c)
 *     _PenWorkspace::Discover::RecentAppsCache::HaveUsedPen_::_1_::dtor$0 @ 0x180196057 (_PenWorkspace--Discover--RecentAppsCache--HaveUsedPen_--_1_--dtor$0.c)
 *     _PenWorkspace::Discover::RecentAppsCache::SaveDataToJson_::_1_::dtor$0 @ 0x180198076 (_PenWorkspace--Discover--RecentAppsCache--SaveDataToJson_--_1_--dtor$0.c)
 *     _PeoplePaneViewManager::ClosePeoplePane_::_1_::dtor$1 @ 0x1801C179C (_PeoplePaneViewManager--ClosePeoplePane_--_1_--dtor$1.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::vector<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>::~vector<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>(
        __int64 *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  std::_Ref_count_base *v4; // rcx

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( v1 != v3 )
    {
      do
      {
        v4 = *(std::_Ref_count_base **)(v1 + 8);
        if ( v4 )
          std::_Ref_count_base::_Decref(v4);
        v1 += 16LL;
      }
      while ( v1 != v3 );
      v1 = *a1;
    }
    std::_Deallocate((char *)v1, (a1[2] - v1) >> 4, 0x10uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
