/*
 * XREFs of ?GetRecentItems@PenWorkspaceDiscoverBroker@@UEAAJHPEAPEAUIObjectArray@@@Z @ 0x1800E3A80
 * Callers:
 *     <none>
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddObject@ObjectArray@Discover@PenWorkspace@@QEAAXPEAUIUnknown@@@Z @ 0x1800E6450 (-AddObject@ObjectArray@Discover@PenWorkspace@@QEAAXPEAUIUnknown@@@Z.c)
 *     ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800E7E2C (-GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV-$vector@V-$ComPtr@UIDiscoverRecent.c)
 *     ?EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ @ 0x1801C1F4C (-EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall PenWorkspaceDiscoverBroker::GetRecentItems(
        PenWorkspace::Discover::RecentAppsCache **this,
        __int64 a2,
        struct IObjectArray **a3)
{
  int IsShellExperience; // eax
  unsigned int v6; // ebx
  int MRUApps; // eax
  unsigned int v9; // edi
  Microsoft::WRL::FtmBase *v10; // rax
  Microsoft::WRL::FtmBase *v11; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  *a3 = 0LL;
  IsShellExperience = CallerIdentity::EnsureCallingProcessIsShellExperience((CallerIdentity *)this);
  v6 = IsShellExperience;
  if ( IsShellExperience >= 0 )
  {
    MRUApps = PenWorkspace::Discover::RecentAppsCache::GetMRUApps(this[5]);
    v9 = MRUApps;
    if ( MRUApps >= 0 )
    {
      v10 = (Microsoft::WRL::FtmBase *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
      v11 = v10;
      if ( v10 )
      {
        Microsoft::WRL::FtmBase::FtmBase(v10);
        *((_DWORD *)v11 + 13) = 1;
        *(_QWORD *)v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IObjectArray>::`vftable'{for `Microsoft::WRL::FtmBase'};
        *((_QWORD *)v11 + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IObjectArray>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IObjectArray>'};
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        *(_QWORD *)v11 = &PenWorkspace::Discover::ObjectArray::`vftable'{for `Microsoft::WRL::FtmBase'};
        *((_QWORD *)v11 + 5) = &PenWorkspace::Discover::ObjectArray::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IObjectArray>'};
        *((_QWORD *)v11 + 7) = 0LL;
        *((_QWORD *)v11 + 8) = 0LL;
        *((_QWORD *)v11 + 9) = 0LL;
        if ( v11 )
        {
          (*(void (__fastcall **)(Microsoft::WRL::FtmBase *))(*(_QWORD *)v11 + 8LL))(v11);
          (*(void (__fastcall **)(Microsoft::WRL::FtmBase *))(*(_QWORD *)v11 + 16LL))(v11);
        }
        *a3 = (struct IObjectArray *)(((unsigned __int64)v11 + 40) & -(__int64)(v11 != 0LL));
        return 0;
      }
      else
      {
        v9 = -2147024882;
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x26,
          (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
          (const char *)0x8007000ELL);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x23,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
        (const char *)(unsigned int)MRUApps);
    }
    return v9;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x20,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
      (const char *)(unsigned int)IsShellExperience);
    return v6;
  }
}
