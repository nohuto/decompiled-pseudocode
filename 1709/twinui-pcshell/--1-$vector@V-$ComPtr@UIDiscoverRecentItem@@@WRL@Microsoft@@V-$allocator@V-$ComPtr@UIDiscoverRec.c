/*
 * XREFs of ??1?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180072B38
 * Callers:
 *     ??_ECSplashScreen@@UEAAPEAXI@Z @ 0x180071DA0 (--_ECSplashScreen@@UEAAPEAXI@Z.c)
 *     ??_GObjectArray@Discover@PenWorkspace@@UEAAPEAXI@Z @ 0x1800E5970 (--_GObjectArray@Discover@PenWorkspace@@UEAAPEAXI@Z.c)
 *     ??_EHolographicPositioner@@UEAAPEAXI@Z @ 0x1801058D8 (--_EHolographicPositioner@@UEAAPEAXI@Z.c)
 *     ??1PeoplePaneViewManager@@UEAA@XZ @ 0x180117398 (--1PeoplePaneViewManager@@UEAA@XZ.c)
 *     ??1XamlAllUpViewHost@@UEAA@XZ @ 0x1801580C4 (--1XamlAllUpViewHost@@UEAA@XZ.c)
 *     _PenWorkspaceDiscoverBroker::GetRecentItems_::_1_::dtor$0 @ 0x1801EC276 (_PenWorkspaceDiscoverBroker--GetRecentItems_--_1_--dtor$0.c)
 *     _PeoplePaneViewManager::_PeoplePaneViewManager_::_1_::dtor$2 @ 0x1801EE04D (_PeoplePaneViewManager--_PeoplePaneViewManager_--_1_--dtor$2.c)
 *     __lambda_9d1d8d58343981d67c57f7f39dcd56a0_::operator()_::_1_::dtor$1 @ 0x1801EF2A0 (__lambda_9d1d8d58343981d67c57f7f39dcd56a0_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>::~vector<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>(
        unsigned __int64 *a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rsi
  __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax

  v2 = (__int64 *)*a1;
  if ( *a1 )
  {
    v3 = (__int64 *)a1[1];
    while ( v2 != v3 )
    {
      v4 = *v2;
      if ( *v2 )
      {
        *v2 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      ++v2;
    }
    v5 = *a1;
    v6 = (__int64)(a1[2] - *a1) >> 3;
    if ( v6 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v6 < 0x1000 )
      {
LABEL_13:
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
            goto LABEL_13;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v5);
  }
}
