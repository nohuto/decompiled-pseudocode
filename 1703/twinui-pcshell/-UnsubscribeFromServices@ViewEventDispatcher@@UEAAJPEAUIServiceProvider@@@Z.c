/*
 * XREFs of ?UnsubscribeFromServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800F49D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800040A4 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180102050 (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     PdcNotificationClientUnregister @ 0x180172208 (PdcNotificationClientUnregister.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewEventDispatcher::UnsubscribeFromServices(ViewEventDispatcher *this, struct IServiceProvider *a2)
{
  __int64 v4; // r8
  const char *v5; // r9
  __int64 v6; // rbx
  void *v7; // rcx
  int v8; // eax
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
  int v22; // [rsp+20h] [rbp-30h]
  volatile signed __int32 *v23; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v25; // [rsp+70h] [rbp+20h] BYREF
  __int64 v26; // [rsp+80h] [rbp+30h] BYREF

  if ( !SetEvent(*(HANDLE *)(*((_QWORD *)this + 45) + 128LL)) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x86F, v4, v5);
    __debugbreak();
  }
  v6 = *((_QWORD *)this + 48);
  v7 = *(void **)(v6 + 32);
  if ( v7 )
  {
    v8 = PdcNotificationClientUnregister(v7);
    if ( v8 >= 0 )
      *(_QWORD *)(v6 + 32) = 0LL;
    else
      wil::details::in1diag3::_Log_NtStatus(
        retaddr,
        (void *)0x27,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\connectedstandbyhelper.cpp",
        (const char *)(unsigned int)v8,
        v22);
  }
  v23 = (volatile signed __int32 *)*((_QWORD *)this + 49);
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  if ( v23 )
  {
    if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
      if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
    }
  }
  if ( *((_DWORD *)this + 33) )
  {
    v26 = 0LL;
    lpVtbl = a2->lpVtbl;
    v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v26);
    v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))lpVtbl->QueryService)(
            a2,
            &IID_IImmersiveSessionIdleDetector,
            &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
            v10);
    if ( v11 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 40LL))(v26, *((unsigned int *)this + 33));
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x572,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v12);
      *((_DWORD *)this + 33) = 0;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x570,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v11);
    }
    v13 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  if ( *((_DWORD *)this + 32) )
  {
    v25 = 0LL;
    v14 = a2->lpVtbl;
    v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v25);
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
        (void *)0x57A,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v16);
      v18 = v25;
      if ( v25 )
      {
        v25 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      return v17;
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v25 + 32LL))(v25, *((unsigned int *)this + 32));
    *((_DWORD *)this + 32) = 0;
    v20 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
  }
  v21 = *((_QWORD *)this + 42);
  if ( v21 )
  {
    *((_QWORD *)this + 42) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return 0LL;
}
