/*
 * XREFs of ?HaveUsedPen@PenWorkspaceDiscoverBroker@@UEAAJPEAH@Z @ 0x1800E3D00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@@Z @ 0x1800E8014 (-GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV-$vector@V-$shared_ptr@UAppUsa.c)
 *     ??1?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@QEAA@XZ @ 0x1800EB334 (--1-$vector@V-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V-$allocator@V-$shared_ptr@.c)
 *     ?EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ @ 0x1801C1F4C (-EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenWorkspaceDiscoverBroker::HaveUsedPen(PenWorkspaceDiscoverBroker *this, int *a2)
{
  int IsShellExperience; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  int SortedAppList; // eax
  __int64 i; // rax
  __int128 v10; // [rsp+28h] [rbp-20h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0;
  IsShellExperience = CallerIdentity::EnsureCallingProcessIsShellExperience(this);
  v5 = IsShellExperience;
  if ( IsShellExperience >= 0 )
  {
    v6 = *((_QWORD *)this + 5);
    *a2 = 0;
    v10 = 0LL;
    v11 = 0LL;
    SortedAppList = PenWorkspace::Discover::RecentAppsCache::GetSortedAppList(v6, &v10);
    v5 = SortedAppList;
    if ( SortedAppList >= 0 )
    {
      for ( i = v10; i != *((_QWORD *)&v10 + 1); i += 16LL )
      {
        if ( !*(_BYTE *)(*(_QWORD *)i + 44LL) && *(int *)(*(_QWORD *)i + 32LL) > 0 )
        {
          *a2 = 1;
          break;
        }
      }
      std::vector<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>::~vector<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>(&v10);
      return 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xCC,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)SortedAppList);
      std::vector<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>::~vector<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>(&v10);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x30,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
      (const char *)(unsigned int)IsShellExperience);
  }
  return v5;
}
