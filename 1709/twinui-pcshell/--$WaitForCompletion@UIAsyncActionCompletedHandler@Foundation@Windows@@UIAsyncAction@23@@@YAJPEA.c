/*
 * XREFs of ??$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1800E661C
 * Callers:
 *     ?GetAumid@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAGPEAU_FILETIME@@@Z @ 0x1800E3DE0 (-GetAumid@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAGPEAU_FILETIME@@@Z.c)
 *     ?EnsureUnifiedTileManager@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1800E80B4 (-EnsureUnifiedTileManager@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?Activate@UTMRecentItem@Discover@PenWorkspace@@UEAAJXZ @ 0x1800EE540 (-Activate@UTMRecentItem@Discover@PenWorkspace@@UEAAJXZ.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z @ 0x18002C790 (-SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WaitForCompletion<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Foundation::IAsyncAction>(
        __int64 (__fastcall ***a1)(__int64, GUID *, __int64 *),
        int a2,
        char *a3)
{
  char *v4; // rax
  char *v5; // rbx
  signed int v6; // edi
  _QWORD *v7; // rdi
  HANDLE Event; // rax
  signed int LastError; // eax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 (__fastcall **v13)(__int64, GUID *, __int64 *); // rbx
  __int64 *v14; // rax
  int v15; // eax
  char *v16; // rcx
  APTTYPE v18; // [rsp+20h] [rbp-38h]
  APTTYPEQUALIFIER v19; // [rsp+28h] [rbp-30h]
  void *v20[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v21; // [rsp+80h] [rbp+28h] BYREF
  int v22; // [rsp+88h] [rbp+30h] BYREF
  char *v23; // [rsp+90h] [rbp+38h]
  __int64 (__fastcall ***v24)(__int64, GUID *, __int64 *); // [rsp+98h] [rbp+40h]

  v23 = a3;
  v22 = a2;
  v24 = a1;
  if ( a1 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*a1)[1])(a1);
  v23 = 0LL;
  v4 = (char *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v7 = v4 + 8;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v4 + 8));
    *((_DWORD *)v5 + 13) = 1;
    *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::IAsyncActionCompletedHandler'};
    *v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v5 = off_180206208;
    *v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::FtmBase>'};
    *((_DWORD *)v5 + 14) = 0;
    *((_QWORD *)v5 + 8) = 0LL;
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    *((_QWORD *)v5 + 8) = Event;
    if ( Event )
    {
      v6 = 0;
    }
    else
    {
      LastError = GetLastError();
      v6 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v6 = LastError;
    }
    v10 = *(_QWORD *)v5;
    if ( v6 >= 0 )
    {
      (*(void (__fastcall **)(char *))(v10 + 8))(v5);
      v23 = v5;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 16LL))(v5);
      v6 = 0;
    }
    else
    {
      (*(void (__fastcall **)(char *))(v10 + 16))(v5);
    }
    v22 = v6;
    if ( v6 >= 0 )
    {
      v6 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *), char *))(*a1)[6])(a1, v23);
      v22 = v6;
      if ( v6 >= 0 )
      {
        v20[0] = *((void **)v23 + 8);
        v20[1] = 0LL;
        v11 = SHProcessMessagesUntilEventsEx((HWND)v20[0], v20, 1u, 0xFFFFFFFF, v18, v19);
        v6 = v22;
        if ( v11 == -1 )
          v6 = -2147467259;
        v22 = v6;
        v12 = 0LL;
        v21 = 0LL;
        if ( v6 >= 0 && *((_DWORD *)v23 + 14) != 1 )
        {
          v13 = *a1;
          v14 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v21);
          v15 = (*v13)((__int64)a1, &GUID_00000036_0000_0000_c000_000000000046, v14);
          v12 = v21;
          if ( v15 >= 0 )
          {
            (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v21 + 64LL))(v21, &v22);
            v12 = v21;
          }
          v6 = v22;
        }
        if ( v12 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
          v6 = v22;
        }
      }
    }
  }
  else
  {
    v6 = -2147024882;
    v22 = -2147024882;
  }
  v16 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  if ( a1 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*a1)[2])(a1);
  return (unsigned int)v6;
}
