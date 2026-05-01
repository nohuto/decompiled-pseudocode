/*
 * XREFs of ?ViewLoaded@XamlAllUpViewHost@@UEAAJXZ @ 0x180159450
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002686C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x18006FB2C (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ?Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x180156A08 (-Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x18015CB30 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall XamlAllUpViewHost::ViewLoaded(XamlAllUpViewHost *this)
{
  char *v2; // r14
  struct wil::details::IFailureCallback *v3; // r13
  __int64 v4; // r8
  __int64 *v5; // rbx
  __int64 *v6; // rsi
  __int64 v7; // rax
  HWND v8; // rax
  HRESULT v9; // eax
  __int64 v10; // rdi
  int v11; // r12d
  __int64 v12; // rdi
  __int64 v13; // rdx
  HANDLE ProcessHeap; // rax
  HANDLE v16; // rax
  LPVOID v17[4]; // [rsp+48h] [rbp-29h] BYREF
  __int128 v18; // [rsp+68h] [rbp-9h] BYREF
  __int64 v19; // [rsp+78h] [rbp+7h]
  int v20; // [rsp+80h] [rbp+Fh]
  __int64 v21; // [rsp+88h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  __int64 pvAttribute; // [rsp+D8h] [rbp+67h] BYREF
  int v24; // [rsp+E0h] [rbp+6Fh] BYREF

  if ( ++*((_QWORD *)this + 21) == (__int64)(*((_QWORD *)this + 19) - *((_QWORD *)this + 18)) >> 3 )
  {
    v2 = (char *)this - 128;
    v3 = (XamlAllUpViewHost *)((char *)this + 184);
    v4 = *((_QWORD *)this + 29);
    if ( *(_DWORD *)v4 == 1 )
    {
      wil::ActivityThreadWatcher::ActivityThreadWatcher(
        (wil::ActivityThreadWatcher *)v17,
        v3,
        (const struct wil::details::StoredCallContextInfo *)(v4 + 40));
    }
    else
    {
      memset(v17, 0, sizeof(v17));
      v18 = 0LL;
      v19 = 0LL;
      v20 = 0;
      v21 = 0LL;
    }
    v5 = (__int64 *)*((_QWORD *)this + 18);
    v6 = (__int64 *)*((_QWORD *)this + 19);
    while ( v5 != v6 )
    {
      v7 = *v5;
      LODWORD(pvAttribute) = 0;
      v8 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 56) + 40LL))(*(_QWORD *)(v7 + 56));
      v9 = DwmSetWindowAttribute(v8, 0xDu, &pvAttribute, 4u);
      if ( v9 < 0 )
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x2B,
          (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
          (const char *)(unsigned int)v9);
      v10 = *(_QWORD *)(*v5 + 48);
      pvAttribute = v10;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v10 + 96LL))(
              v10,
              *((_QWORD *)this + 12),
              &v24);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      if ( v11 < 0 )
      {
        v13 = 490LL;
        goto LABEL_19;
      }
      if ( v24 )
      {
        v12 = *(_QWORD *)(*v5 + 56);
        pvAttribute = v12;
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        if ( v11 < 0 )
        {
          v13 = 493LL;
LABEL_19:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v13,
            (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
            (const char *)(unsigned int)v11);
          if ( v20 )
            wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)&v18);
          if ( LOBYTE(v17[3]) )
          {
            ProcessHeap = GetProcessHeap();
            HeapFree(ProcessHeap, 0, v17[2]);
            LOBYTE(v17[3]) = 0;
          }
          v17[2] = 0LL;
          CMultitaskingViewHostBase<IAllUpViewHost>::DismissView(v2);
          return (unsigned int)v11;
        }
      }
      ++v5;
    }
    *((_DWORD *)this + 124) = 1;
    XamlSwitcherTelemetry::ShowXamlTaskView::Stop(v3, 1u);
    if ( v20 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)&v18);
    if ( LOBYTE(v17[3]) )
    {
      v16 = GetProcessHeap();
      HeapFree(v16, 0, v17[2]);
    }
  }
  return 0LL;
}
