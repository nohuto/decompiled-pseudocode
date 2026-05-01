/*
 * XREFs of ?UnsubscribeFromServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x18011F840
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180004258 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012C804 (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     PdcNotificationClientUnregister @ 0x1801BDBD8 (PdcNotificationClientUnregister.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewEventDispatcher::UnsubscribeFromServices(ViewEventDispatcher *this, struct IServiceProvider *a2)
{
  const char *v4; // r9
  __int64 v5; // rbx
  void *v6; // rcx
  int v7; // eax
  volatile signed __int32 *v8; // rbx
  struct IServiceProviderVtbl *lpVtbl; // rbx
  __int64 *v10; // rax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  struct IServiceProviderVtbl *v14; // rbx
  __int64 *v15; // rax
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // [rsp+20h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v24; // [rsp+60h] [rbp+20h] BYREF
  __int64 v25; // [rsp+70h] [rbp+30h] BYREF

  if ( !SetEvent(*(HANDLE *)(*((_QWORD *)this + 50) + 144LL)) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x86E,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v4);
    __debugbreak();
  }
  v5 = *((_QWORD *)this + 53);
  if ( v5 )
  {
    v6 = *(void **)(v5 + 32);
    if ( v6 )
    {
      v7 = PdcNotificationClientUnregister(v6);
      if ( v7 >= 0 )
        *(_QWORD *)(v5 + 32) = 0LL;
      else
        wil::details::in1diag3::_Log_NtStatus(
          retaddr,
          (void *)0x27,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\connectedstandbyhelper.cpp",
          (const char *)(unsigned int)v7,
          v22);
    }
    v8 = (volatile signed __int32 *)*((_QWORD *)this + 54);
    *((_QWORD *)this + 54) = 0LL;
    *((_QWORD *)this + 53) = 0LL;
    if ( v8 )
    {
      if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
        if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      }
    }
  }
  if ( *((_DWORD *)this + 43) )
  {
    v25 = 0LL;
    lpVtbl = a2->lpVtbl;
    v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v25);
    v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))lpVtbl->QueryService)(
            a2,
            &IID_IImmersiveSessionIdleDetector,
            &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
            v10);
    if ( v11 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v25 + 40LL))(v25, *((unsigned int *)this + 43));
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x57B,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v12);
      *((_DWORD *)this + 43) = 0;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x579,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v11);
    }
    v13 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  if ( *((_DWORD *)this + 42) )
  {
    v24 = 0LL;
    v14 = a2->lpVtbl;
    v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v24);
    v16 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v14->QueryService)(
            a2,
            &SID_ImmersiveShellHookService,
            &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
            v15);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x583,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v16);
      v18 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      return v17;
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v24 + 32LL))(v24, *((unsigned int *)this + 42));
    *((_DWORD *)this + 42) = 0;
    v20 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
  }
  v21 = *((_QWORD *)this + 47);
  if ( v21 )
  {
    *((_QWORD *)this + 47) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return 0LL;
}
