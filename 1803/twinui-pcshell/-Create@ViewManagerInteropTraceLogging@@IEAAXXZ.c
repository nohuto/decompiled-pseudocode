/*
 * XREFs of ?Create@ViewManagerInteropTraceLogging@@IEAAXXZ @ 0x1801E5198
 * Callers:
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x18004F258 (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 *     ?Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800501C0 (-Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ?WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x180050B20 (-WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@@Z @ 0x1800514D0 (-SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@.c)
 *     ?SetFocusState@ViewWrapperBase@@UEAAXW4FocusState@@@Z @ 0x180052F70 (-SetFocusState@ViewWrapperBase@@UEAAXW4FocusState@@@Z.c)
 *     ?SetImportanceVectorUsingMask@ViewWrapperBase@@UEAAJIW4ImportanceMaskTypes@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800531D0 (-SetImportanceVectorUsingMask@ViewWrapperBase@@UEAAJIW4ImportanceMaskTypes@ViewManagerInterop@Sh.c)
 *     ?BoostPriority@ViewWrapperBase@@UEAAJXZ @ 0x1800535E0 (-BoostPriority@ViewWrapperBase@@UEAAJXZ.c)
 *     ?SetFrameWindow@ViewWrapperBase@@UEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_ntuserviewmanagerinterop_0000_0001_0001@@@Z @ 0x180053930 (-SetFrameWindow@ViewWrapperBase@@UEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_ntuserviewmanagerinterop_0.c)
 * Callees:
 *     atexit @ 0x180098A9C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall ViewManagerInteropTraceLogging::Create(ViewManagerInteropTraceLogging *this)
{
  void *v2; // r8
  __int64 v3; // rax
  WINBOOL v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v4, (LPVOID *)&v5) && v4 )
  {
    v5 = qword_180438940;
    qword_180438940[0] = &LockScreenServiceLogging::`vftable';
    qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958, v2);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
  }
  v3 = *(_QWORD *)this;
  *((_QWORD *)this + 1) = v5[1];
  *((_BYTE *)this + 16) = 0;
  *((_DWORD *)this + 5) = 1;
  (*(void (__fastcall **)(ViewManagerInteropTraceLogging *))(v3 + 8))(this);
}
