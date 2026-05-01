/*
 * XREFs of ?RuntimeClassInitialize@PenWorkspaceDiscoverBroker@@QEAAJXZ @ 0x1800E36E4
 * Callers:
 *     ?RuntimeClassInitialize@PenWorkspaceDiscoverBrokerFactory@@QEAAJXZ @ 0x1800E4A5C (-RuntimeClassInitialize@PenWorkspaceDiscoverBrokerFactory@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180005940 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEAAX_K@Z @ 0x1800E5D9C (-_Init@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$has.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@PEAX@2@PEAU32@0@Z @ 0x1800E6208 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E64AC (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHKEY__@@PEBG@Z @ 0x1800EB71C (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHK.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801E2A80 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall PenWorkspaceDiscoverBroker::RuntimeClassInitialize(PenWorkspaceDiscoverBroker *this)
{
  __int64 v2; // rcx
  _BYTE *v3; // rax
  _BYTE *v4; // rbx
  int v5; // edi
  struct Microsoft::WRL::Details::ModuleBase *v6; // rcx
  _OWORD *v7; // rax
  void *v8; // rdx
  HANDLE Event; // rsi
  unsigned int v10; // r8d
  const char *v11; // r9
  char *Thread; // rdi
  const char *v13; // r9
  void **v14; // r14
  void *v15; // r15
  DWORD LastError; // esi
  LSTATUS v17; // eax
  signed int v18; // edi
  __int64 v19; // rax
  char v20; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  HKEY phkResult; // [rsp+90h] [rbp+8h] BYREF
  _BYTE *v23; // [rsp+98h] [rbp+10h]
  _BYTE *v24; // [rsp+A0h] [rbp+18h]
  _BYTE *v25; // [rsp+A8h] [rbp+20h]

  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *((_QWORD *)this + 10) = 0LL;
  v3 = operator new(0xE8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  v23 = v3;
  v24 = v3;
  if ( !v3 )
  {
    v5 = -2147024882;
LABEL_31:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x18,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
      (const char *)(unsigned int)v5);
    return;
  }
  v25 = v3;
  *((_DWORD *)v3 + 3) = 1;
  *(_QWORD *)v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
  v6 = Microsoft::WRL::Details::ModuleBase::module_;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v4 = &PenWorkspace::Discover::RecentAppsCache::`vftable';
  *((_DWORD *)v4 + 4) = 0;
  *((_QWORD *)v4 + 3) = 0LL;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_QWORD *)v4 + 3) = std::_List_alloc<std::_List_base_types<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>>::_Buynode0(
                          v6,
                          0LL,
                          0LL);
  *((_QWORD *)v4 + 5) = 0LL;
  *((_QWORD *)v4 + 6) = 0LL;
  *((_QWORD *)v4 + 7) = 0LL;
  *((_DWORD *)v4 + 4) = 1065353216;
  std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_Init(
    v4 + 16,
    8LL);
  *((_DWORD *)v4 + 20) = 0;
  *((_QWORD *)v4 + 11) = 0LL;
  *((_QWORD *)v4 + 12) = 0LL;
  *((_QWORD *)v4 + 13) = 0LL;
  *((_QWORD *)v4 + 14) = 0LL;
  *((_QWORD *)v4 + 15) = 0LL;
  *((_QWORD *)v4 + 16) = 0LL;
  *((_QWORD *)v4 + 17) = 0LL;
  v7 = operator new(0x10uLL);
  *((_QWORD *)v4 + 13) = v7;
  if ( v7 )
    *v7 = 0LL;
  **((_QWORD **)v4 + 13) = v4 + 104;
  *((_QWORD *)v4 + 18) = 0LL;
  *((_QWORD *)v4 + 19) = 0LL;
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      (void **)v4 + 19,
      Event);
    InitializeSRWLock((PSRWLOCK)v4 + 20);
    InitializeSRWLock((PSRWLOCK)v4 + 21);
    *((_QWORD *)v4 + 23) = 0LL;
    *((_QWORD *)v4 + 24) = 0LL;
    v4[200] = 0;
    *((_QWORD *)v4 + 26) = 0LL;
    *((_QWORD *)v4 + 27) = 0LL;
    *((_QWORD *)v4 + 28) = 0LL;
    v23 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v4 + 8LL))(v4);
    Thread = (char *)CreateThread(
                       0LL,
                       0LL,
                       PenWorkspace::Discover::RecentAppsCache::s_ProcessQueueThreadProc,
                       v4,
                       0,
                       0LL);
    v14 = (void **)(v4 + 144);
    if ( v4 + 144 != &v20 )
    {
      v15 = *v14;
      if ( (char *)*v14 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      {
        LastError = GetLastError();
        CloseHandle(v15);
        SetLastError(LastError);
      }
      *v14 = Thread;
      Thread = 0LL;
    }
    if ( (unsigned __int64)(Thread - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(Thread);
    if ( (((unsigned __int64)*v14 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v17 = RegOpenKeyExW(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\PenWorkspace\\Notes",
              0,
              0x20019u,
              &phkResult);
      v18 = (unsigned __int16)v17 | 0x80070000;
      if ( v17 <= 0 )
        v18 = v17;
      if ( v18 >= 0 )
      {
        v18 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
                v4 + 208,
                phkResult);
        RegCloseKey(phkResult);
      }
      if ( v18 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x7F,
          (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
          (const char *)(unsigned int)v18);
      v5 = 0;
    }
    else
    {
      v5 = wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x7A,
             (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
             v13);
      (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v4 + 16LL))(v4);
    }
    v19 = *(_QWORD *)v4;
    if ( v5 >= 0 )
    {
      (*(void (__fastcall **)(_BYTE *))(v19 + 8))(v4);
      *((_QWORD *)this + 10) = v4;
      (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v4 + 16LL))(v4);
      v5 = 0;
    }
    else
    {
      (*(void (__fastcall **)(_BYTE *))(v19 + 16))(v4);
    }
    if ( v5 < 0 )
      goto LABEL_31;
  }
  else
  {
    wil::details::in1diag3::Throw_GetLastError(retaddr, v8, v10, v11);
  }
}
