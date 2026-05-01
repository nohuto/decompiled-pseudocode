/*
 * XREFs of ?EnsureUnifiedTileManager@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1800E80B4
 * Callers:
 *     ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800E7E2C (-GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV-$vector@V-$ComPtr@UIDiscoverRecent.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@U?$IAsyncOperation@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@23@@@YAJPEAU?$IAsyncOperation@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1800E5300 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVUnifiedTileManager@UnifiedTile@Shell.c)
 *     ??$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1800E661C (--$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEA.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::EnsureUnifiedTileManager(
        PenWorkspace::Discover::RecentAppsCache *this)
{
  _QWORD *v1; // rdi
  HRESULT v3; // eax
  int ActivationFactory; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // edx
  void **v8; // r8
  __int64 v9; // rdx
  __int64 (__fastcall ***v10)(__int64, GUID *, __int64 *); // rbx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // edx
  char *v14; // r8
  __int64 v15; // rdx
  __int64 (__fastcall ***v16)(__int64, GUID *, __int64 *); // rcx
  __int64 (__fastcall ***v17)(__int64, GUID *, __int64 *); // rcx
  __int64 v18; // rcx
  __int64 v19; // [rsp+30h] [rbp-50h] BYREF
  __int64 (__fastcall ***v20)(__int64, GUID *, __int64 *); // [rsp+38h] [rbp-48h] BYREF
  __int64 (__fastcall ***v21[2])(__int64, GUID *, __int64 *); // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v21[1] = (__int64 (__fastcall ***)(__int64, GUID *, __int64 *))-2LL;
  v1 = (_QWORD *)((char *)this + 192);
  if ( *((_QWORD *)this + 24) )
    return 0LL;
  v19 = 0LL;
  string = 0LL;
  v3 = WindowsCreateStringReference(
         L"WindowsInternal.Shell.UnifiedTile.UnifiedTileManager",
         0x34u,
         &hstringHeader,
         &string);
  if ( v3 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_3747c20e_e7a2_4eb1_afec_7d4383bb2cb2, &v19);
  v5 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v20 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 (__fastcall ****)(__int64, GUID *, __int64 *)))(*(_QWORD *)v19 + 48LL))(
           v19,
           3LL,
           3LL,
           &v20);
    v5 = v6;
    if ( v6 < 0 )
    {
      v9 = 247LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v6);
LABEL_24:
      v17 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v17)[2])(v17);
      }
      goto LABEL_26;
    }
    v6 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<WindowsInternal::Shell::UnifiedTile::UnifiedTileManager *>,Windows::Foundation::IAsyncOperation<WindowsInternal::Shell::UnifiedTile::UnifiedTileManager *>>(
           v20,
           v7,
           v8);
    v5 = v6;
    if ( v6 < 0 )
    {
      v9 = 249LL;
      goto LABEL_15;
    }
    v10 = v20;
    v11 = *v1;
    if ( *v1 )
    {
      *v1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v6 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *), _QWORD *))(*v10)[8])(v10, v1);
    v5 = v6;
    if ( v6 < 0 )
    {
      v9 = 251LL;
      goto LABEL_15;
    }
    v21[0] = 0LL;
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ****)(__int64, GUID *, __int64 *)))(*(_QWORD *)*v1 + 72LL))(
            *v1,
            v21);
    v5 = v12;
    if ( v12 >= 0 )
    {
      v12 = WaitForCompletion<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Foundation::IAsyncAction>(
              v21[0],
              v13,
              v14);
      v5 = v12;
      if ( v12 >= 0 )
      {
        v5 = 0;
LABEL_22:
        v16 = v21[0];
        if ( v21[0] )
        {
          v21[0] = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v16)[2])(v16);
        }
        goto LABEL_24;
      }
      v15 = 255LL;
    }
    else
    {
      v15 = 254LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xF4,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_26:
  v18 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return v5;
}
