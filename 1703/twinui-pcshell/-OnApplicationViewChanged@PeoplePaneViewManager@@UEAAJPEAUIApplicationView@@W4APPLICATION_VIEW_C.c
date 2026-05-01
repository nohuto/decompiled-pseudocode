/*
 * XREFs of ?OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800E9870
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??$emplace_back@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@Z @ 0x18007003C (--$emplace_back@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UITaskWindow@@@WRL@M.c)
 *     ?FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1800E9B44 (-FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1800E9F60 (-FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV-$shared_pt.c)
 *     ?s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ @ 0x1800EA688 (-s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ.c)
 *     ?NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z @ 0x1800EA6E4 (-NotifyListeners@PeoplePaneViewManager@@AEAAXW4PeoplePaneViewChange@@PEBGH@Z.c)
 *     ?erase@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@std@@@std@@@2@@Z @ 0x1800EBBC4 (-erase@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@UPeoplePaneV.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall PeoplePaneViewManager::OnApplicationViewChanged(__int64 a1, struct IApplicationView *a2, int a3)
{
  __int64 v6; // rbx
  const unsigned __int16 *AppId; // rax
  int v8; // ebx
  __int64 v9; // rdx
  __int64 *j; // rbx
  __int64 **v12; // rax
  __int64 *v13; // r8
  __int64 *v14; // rbx
  __int64 v15; // rcx
  __int64 *v16; // r8
  RTL_SRWLOCK *v17; // rcx
  struct IApplicationView **i; // rax
  __int64 v19; // rbx
  PSRWLOCK v20; // [rsp+20h] [rbp-50h] BYREF
  struct IApplicationView *v21; // [rsp+28h] [rbp-48h] BYREF
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-40h] BYREF
  RTL_SRWLOCK *v23; // [rsp+38h] [rbp-38h] BYREF
  PSRWLOCK v24[2]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v25[8]; // [rsp+50h] [rbp-20h] BYREF
  __int128 v26; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  int v28; // [rsp+98h] [rbp+28h] BYREF

  v24[1] = (PSRWLOCK)-2LL;
  v6 = *(_QWORD *)a2;
  AppId = PeoplePaneViewManager::s_GetAppId();
  v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, const unsigned __int16 *, int *))(v6 + 128))(
         a2,
         AppId,
         &v28);
  if ( v8 < 0 )
  {
    v9 = 434LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  if ( v28 )
  {
    if ( !a3 )
    {
      v26 = 0LL;
      if ( (int)PeoplePaneViewManager::FindViewInfoByApplicationView(a1 - 80, a2, &v26) >= 0
        && (v14 = (__int64 *)v26, *(_BYTE *)(v26 + 56) == 1) )
      {
        wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(a1 + 16), &v23);
        if ( (struct IApplicationView *)v14[4] != a2 )
        {
          (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
          v15 = v14[4];
          v14[4] = (__int64)a2;
          if ( v15 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        if ( (unsigned __int64)v14[3] < 8 )
          v16 = v14;
        else
          v16 = (__int64 *)*v14;
        PeoplePaneViewManager::NotifyListeners(a1 - 80, 0LL, v16, *((unsigned int *)v14 + 10));
        v17 = v23;
      }
      else
      {
        wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(a1 + 48), &v20);
        for ( i = *(struct IApplicationView ***)(a1 + 56); i != *(struct IApplicationView ***)(a1 + 64); ++i )
        {
          if ( *i == a2 )
          {
            v17 = v20;
            goto LABEL_47;
          }
        }
        if ( v20 )
          ReleaseSRWLockExclusive(v20);
        wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(a1 + 48), v24);
        v21 = a2;
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
        std::vector<Microsoft::WRL::ComPtr<ITaskWindow>>::emplace_back<Microsoft::WRL::ComPtr<ITaskWindow>>(
          (__int64 **)(a1 + 56),
          (__int64 *)&v21);
        if ( v21 )
          (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v21 + 16LL))(v21);
        v17 = v24[0];
      }
LABEL_47:
      if ( v17 )
        ReleaseSRWLockExclusive(v17);
      if ( *((_QWORD *)&v26 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v26 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v19 = *((_QWORD *)&v26 + 1);
          (***((void (__fastcall ****)(_QWORD))&v26 + 1))(*((_QWORD *)&v26 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 12), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v26 + 1) + 8LL))(*((_QWORD *)&v26 + 1));
        }
      }
      return 0LL;
    }
    if ( a3 > 0 )
    {
      if ( a3 <= 2 )
        goto LABEL_16;
      switch ( a3 )
      {
        case 7:
          v8 = PeoplePaneViewManager::FocusApplicationView((PeoplePaneViewManager *)(a1 - 80), a2, 1);
          if ( v8 < 0 )
          {
            v9 = 449LL;
            goto LABEL_3;
          }
          break;
        case 9:
          v8 = PeoplePaneViewManager::FocusApplicationView((PeoplePaneViewManager *)(a1 - 80), a2, 0);
          if ( v8 < 0 )
          {
            v9 = 452LL;
            goto LABEL_3;
          }
          break;
        case 11:
LABEL_16:
          wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(a1 + 16), &SRWLock);
          for ( j = *(__int64 **)(a1 + 24);
                j != *(__int64 **)(a1 + 32) && *(struct IApplicationView **)(*j + 32) != a2;
                j += 2 )
          {
            ;
          }
          if ( j != *(__int64 **)(a1 + 32) )
          {
            v12 = (__int64 **)*j;
            if ( *(_QWORD *)(*j + 24) < 8uLL )
              v13 = (__int64 *)*j;
            else
              v13 = *v12;
            PeoplePaneViewManager::NotifyListeners(a1 - 80, 1LL, v13, *((unsigned int *)v12 + 10));
            std::vector<std::shared_ptr<PeoplePaneViewInfo>>::erase(a1 + 24, v25, j);
          }
          if ( SRWLock )
            ReleaseSRWLockExclusive(SRWLock);
          return 0LL;
        default:
          return 0LL;
      }
    }
  }
  return 0LL;
}
