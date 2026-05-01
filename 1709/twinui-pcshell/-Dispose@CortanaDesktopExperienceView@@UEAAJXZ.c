/*
 * XREFs of ?Dispose@CortanaDesktopExperienceView@@UEAAJXZ @ 0x1800D4BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaDesktopExperienceView::Dispose(CortanaDesktopExperienceView *this)
{
  __int64 *v2; // rdi
  __int64 v3; // rbx
  __int64 *v4; // rax
  int v5; // eax
  __int64 v6; // rcx
  __int64 *v7; // rdi
  __int64 v8; // rbx
  __int64 *v9; // rax
  int v10; // eax
  HWND v11; // rdi
  DWORD LastError; // ebx
  void *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF
  __int64 v20; // [rsp+58h] [rbp+10h] BYREF

  v19 = 0LL;
  v2 = (__int64 *)*((_QWORD *)this + 11);
  v3 = *v2;
  v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v19);
  v5 = (*(__int64 (__fastcall **)(__int64 *, GUID *, GUID *, __int64 *))(v3 + 24))(
         v2,
         &IID_IImmersiveWindowMessageService,
         &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
         v4);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x24B,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v5);
  v6 = v19;
  if ( v19 )
  {
    if ( *((_DWORD *)this + 47) )
    {
      (*(void (**)(void))(*(_QWORD *)v19 + 32LL))();
      *((_DWORD *)this + 47) = 0;
      v6 = v19;
    }
    if ( *((_DWORD *)this + 48) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
      *((_DWORD *)this + 48) = 0;
    }
  }
  v20 = 0LL;
  v7 = (__int64 *)*((_QWORD *)this + 11);
  v8 = *v7;
  v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v20);
  v10 = (*(__int64 (__fastcall **)(__int64 *, GUID *, GUID *, __int64 *))(v8 + 24))(
          v7,
          &IID_IImmersiveSessionIdleDetector,
          &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
          v9);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x25D,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v10);
  if ( v20 && *((_DWORD *)this + 51) )
  {
    (*(void (**)(void))(*(_QWORD *)v20 + 40LL))();
    *((_DWORD *)this + 51) = 0;
  }
  v11 = (HWND)*((_QWORD *)this + 26);
  if ( v11 )
  {
    LastError = GetLastError();
    DestroyWindow(v11);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 26) = 0LL;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 8LL))(*((_QWORD *)this + 10));
  v13 = (void *)*((_QWORD *)this + 10);
  if ( v13 )
  {
    operator delete(v13);
    *((_QWORD *)this + 10) = 0LL;
  }
  v14 = *((_QWORD *)this + 11);
  if ( v14 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return 0LL;
}
