/*
 * XREFs of ?ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z @ 0x180111DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHQEBG@Z @ 0x18008BCD0 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHQEBG@Z.c)
 *     ??1?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@QEAA@XZ @ 0x1800EB334 (--1-$vector@V-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V-$allocator@V-$shared_ptr@.c)
 *     ??$emplace_back@AEBV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@UPeoplePaneViewInfo@@@1@@Z @ 0x1800EBC30 (--$emplace_back@AEBV-$shared_ptr@UPeoplePaneViewInfo@@@std@@@-$vector@V-$shared_ptr@UPeoplePaneV.c)
 *     ?FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x18011315C (-FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$shared_ptr@UPeoplePaneViewInf.c)
 *     ?CloseView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801139F8 (-CloseView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PeoplePaneViewManager::ClosePeoplePane(PeoplePaneViewManager *this, char *a2)
{
  RTL_SRWLOCK *v3; // rbx
  PeoplePaneViewManager *v4; // rcx
  struct IApplicationView *v5; // rdx
  int v6; // eax
  unsigned int v7; // esi
  RTL_SRWLOCK *v8; // rsi
  char *v9; // rcx
  __int64 *Ptr; // rdi
  __int64 *i; // rbx
  __int64 j; // rbx
  __int64 v13; // rdi
  struct IApplicationView *v14; // rdx
  int v15; // eax
  __int64 v16; // rbx
  __int128 v18; // [rsp+28h] [rbp-28h] BYREF
  __int128 v19; // [rsp+38h] [rbp-18h] BYREF
  __int64 v20; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v18 = 0LL;
  v3 = (RTL_SRWLOCK *)((char *)this - 88);
  if ( (int)PeoplePaneViewManager::FindPaneViewInfoByContactId((char *)this - 88, a2, &v18) >= 0
    && (v5 = *(struct IApplicationView **)(v18 + 32)) != 0LL
    && (v6 = PeoplePaneViewManager::CloseView(v4, v5), v7 = v6, v6 < 0) )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1AB,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v6);
  }
  else
  {
    v19 = 0LL;
    v20 = 0LL;
    v8 = v3 + 16;
    AcquireSRWLockShared(v3 + 16);
    Ptr = (__int64 *)v3[18].Ptr;
    for ( i = (__int64 *)v3[17].Ptr; i != Ptr; i += 2 )
    {
      v9 = (char *)*i;
      if ( *(_DWORD *)(*i + 60) == 1 && !(unsigned int)std::wstring::compare(v9, a2) )
        std::vector<std::shared_ptr<PeoplePaneViewInfo>>::emplace_back<std::shared_ptr<PeoplePaneViewInfo> const &>(
          &v19,
          i);
    }
    if ( v8 )
      ReleaseSRWLockShared(v8);
    v13 = *((_QWORD *)&v19 + 1);
    for ( j = v19; j != v13; j += 16LL )
    {
      v14 = *(struct IApplicationView **)(*(_QWORD *)j + 32LL);
      if ( v14 )
      {
        v15 = PeoplePaneViewManager::CloseView((PeoplePaneViewManager *)v9, v14);
        v7 = v15;
        if ( v15 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x1B6,
            (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
            (const char *)(unsigned int)v15);
          goto LABEL_20;
        }
      }
    }
    v7 = 0;
LABEL_20:
    std::vector<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>::~vector<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>((unsigned __int64 *)&v19);
  }
  if ( *((_QWORD *)&v18 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v18 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v16 = *((_QWORD *)&v18 + 1);
      (***((void (__fastcall ****)(_QWORD))&v18 + 1))(*((_QWORD *)&v18 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v18 + 1) + 8LL))(*((_QWORD *)&v18 + 1));
    }
  }
  return v7;
}
