/*
 * XREFs of ??1?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@QEAA@XZ @ 0x1800EB334
 * Callers:
 *     ?HaveUsedPen@PenWorkspaceDiscoverBroker@@UEAAJPEAH@Z @ 0x1800E3D00 (-HaveUsedPen@PenWorkspaceDiscoverBroker@@UEAAJPEAH@Z.c)
 *     ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800E7E2C (-GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV-$vector@V-$ComPtr@UIDiscoverRecent.c)
 *     ?SaveDataToJson@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x1800EA6D0 (-SaveDataToJson@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAPEAUIJsonObject@Json@Data@Windows.c)
 *     ?ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z @ 0x180111DC0 (-ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z.c)
 *     ??1PeoplePaneViewManager@@UEAA@XZ @ 0x180117398 (--1PeoplePaneViewManager@@UEAA@XZ.c)
 *     _PenWorkspaceDiscoverBroker::HaveUsedPen_::_1_::dtor$0 @ 0x1801EC2A6 (_PenWorkspaceDiscoverBroker--HaveUsedPen_--_1_--dtor$0.c)
 *     _PenWorkspace::Discover::RecentAppsCache::GetMRUApps_::_1_::dtor$0 @ 0x1801EC55B (_PenWorkspace--Discover--RecentAppsCache--GetMRUApps_--_1_--dtor$0.c)
 *     _PenWorkspace::Discover::RecentAppsCache::SaveDataToJson_::_1_::dtor$0 @ 0x1801EC8F3 (_PenWorkspace--Discover--RecentAppsCache--SaveDataToJson_--_1_--dtor$0.c)
 *     _PeoplePaneViewManager::ClosePeoplePane_::_1_::dtor$1 @ 0x1801EDC6D (_PeoplePaneViewManager--ClosePeoplePane_--_1_--dtor$1.c)
 *     _PeoplePaneViewManager::_PeoplePaneViewManager_::_1_::dtor$1 @ 0x1801EE03A (_PeoplePaneViewManager--_PeoplePaneViewManager_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>::~vector<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>(
        unsigned __int64 *a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v3; // rbp
  volatile signed __int32 *v4; // rsi
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    while ( v1 != v3 )
    {
      v4 = *(volatile signed __int32 **)(v1 + 8);
      if ( v4 )
      {
        if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
          if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
        }
      }
      v1 += 16LL;
    }
    v5 = *a1;
    v6 = (__int64)(a1[2] - *a1) >> 4;
    if ( v6 <= 0xFFFFFFFFFFFFFFFLL )
    {
      if ( 16 * v6 < 0x1000 )
      {
LABEL_15:
        operator delete((void *)v5);
        *a1 = 0LL;
        a1[1] = 0LL;
        a1[2] = 0LL;
        return;
      }
      if ( (v5 & 0x1F) == 0 )
      {
        v7 = *(_QWORD *)(v5 - 8);
        if ( v7 < v5 )
        {
          v5 = v5 - v7 - 8;
          if ( v5 <= 0x1F )
          {
            v5 = v7;
            goto LABEL_15;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v5);
    JUMPOUT(0x1800EB41DLL);
  }
}
