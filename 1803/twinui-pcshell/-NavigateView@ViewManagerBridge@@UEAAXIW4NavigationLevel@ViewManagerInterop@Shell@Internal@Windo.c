/*
 * XREFs of ?NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180055BE0
 * Callers:
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x180032FD0 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a454b71a2548c162ba69e30212a6224f___::Run @ 0x18008A130 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a454b71a2548c162ba69e30212a6224f___--Run.c)
 *     wil::details::ScopeExitFn__lambda_be3d17dae4ee7e6b61c96b7ca4abf7a9___::_ScopeExitFn__lambda_be3d17dae4ee7e6b61c96b7ca4abf7a9___ @ 0x1800FADD8 (wil--details--ScopeExitFn__lambda_be3d17dae4ee7e6b61c96b7ca4abf7a9___--_ScopeExitFn__lambda_be3d.c)
 *     wil::details::ScopeExitFn__lambda_da6f0bd90bf7c2fa00899691c94231d9___::_ScopeExitFn__lambda_da6f0bd90bf7c2fa00899691c94231d9___ @ 0x1801C8588 (wil--details--ScopeExitFn__lambda_da6f0bd90bf7c2fa00899691c94231d9___--_ScopeExitFn__lambda_da6f.c)
 *     ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1801D016C (-_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     ?CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z @ 0x1801DBE80 (-CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall ViewManagerBridge::NavigateView(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx
  unsigned __int16 *v7; // rax
  REGHANDLE v8; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-49h] BYREF
  int v10; // [rsp+34h] [rbp-45h] BYREF
  int v11; // [rsp+38h] [rbp-41h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-19h] BYREF
  void *v15; // [rsp+70h] [rbp-9h]
  int v16; // [rsp+78h] [rbp-1h]
  int v17; // [rsp+7Ch] [rbp+3h]
  int *v18; // [rsp+80h] [rbp+7h]
  __int64 v19; // [rsp+88h] [rbp+Fh]
  int *v20; // [rsp+90h] [rbp+17h]
  __int64 v21; // [rsp+98h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v3 = a3;
  v4 = a2;
  if ( !*(_BYTE *)(a1 + 145) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 104) + 112LL))(
           *(_QWORD *)(a1 + 104),
           a2,
           a3,
           0LL);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x63,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v5,
        1);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      qword_180438940[0] = &LockScreenServiceLogging::`vftable';
      Context = qword_180438940;
      qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
      InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
    }
    v6 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v6 > 5u
      && (*(_QWORD *)(v6 + 16) & 0x200000000000LL) != 0
      && (*(_QWORD *)(v6 + 24) & 0x200000000000LL) == *(_QWORD *)(v6 + 24) )
    {
      v10 = v4;
      v18 = &v10;
      v20 = &v11;
      v19 = 4LL;
      v11 = v3;
      v21 = 4LL;
      *(_DWORD *)&EventDescriptor.Level = 5;
      v7 = *(unsigned __int16 **)(v6 + 8);
      v8 = *(_QWORD *)(v6 + 32);
      UserData.Ptr = (ULONGLONG)v7;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180394A08 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 0x200000000000LL;
      UserData.Size = *v7;
      v15 = &unk_180394A13;
      UserData.Reserved = 2;
      v16 = 49;
      v17 = 1;
      EventWriteTransfer(v8, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
    }
  }
}
