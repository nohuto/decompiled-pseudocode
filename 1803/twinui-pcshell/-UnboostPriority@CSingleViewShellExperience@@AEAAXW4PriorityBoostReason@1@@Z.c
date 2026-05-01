/*
 * XREFs of ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x180069ADC
 * Callers:
 *     ?LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ @ 0x18006BEBC (-LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ.c)
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x18006C144 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     wil::details::ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___::_ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___ @ 0x1800FB318 (wil--details--ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___--_ScopeExitFn__lambda_a7f1.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable_____ptr64_::_)(IInspectable_____ptr64_IInspectable_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____ptr64___lambda_b923ede267b549ce3e612fdbda9e4264___1_IInspectable_____ptr64_IInspectable_____ptr64_::Invoke @ 0x180307280 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEven_ea_180307280.c)
 *     ?OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x180307AB0 (-OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x180069954 (-UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?close_reset@?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x18007A9FC (-close_reset@-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadPoolTimer@US.c)
 *     ?OnPriorityUnboostRequested@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18007B8A0 (-OnPriorityUnboostRequested@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

BOOLEAN __fastcall CSingleViewShellExperience::UnboostPriority(__int64 a1, int a2)
{
  int v4; // eax
  struct _TP_TIMER *v5; // rcx
  const WCHAR *StringRawBuffer; // rdi
  PCWSTR v7; // rax
  const WCHAR *v8; // r14
  BOOLEAN result; // al
  int v10; // eax
  CActionCenterExperienceManager *v11; // rcx
  __int64 (__fastcall *v12)(CActionCenterExperienceManager *__hidden, struct CSingleViewShellExperience *); // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // edi
  int v18; // eax
  char v19; // al
  TraceLoggingHProvider v20; // r10
  int cData; // [rsp+28h] [rbp-69h]
  WINBOOL fPending; // [rsp+38h] [rbp-59h] BYREF
  int v23; // [rsp+3Ch] [rbp-55h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+78h] [rbp-19h] BYREF
  int *v28; // [rsp+88h] [rbp-9h]
  int v29; // [rsp+90h] [rbp-1h]
  int v30; // [rsp+94h] [rbp+3h]
  __int64 v31; // [rsp+98h] [rbp+7h]
  int v32; // [rsp+A0h] [rbp+Fh]
  int v33; // [rsp+A4h] [rbp+13h]
  __int64 v34; // [rsp+A8h] [rbp+17h]
  int v35; // [rsp+B0h] [rbp+1Fh]
  int v36; // [rsp+B4h] [rbp+23h]
  __int64 v37; // [rsp+B8h] [rbp+27h]
  int v38; // [rsp+C0h] [rbp+2Fh]
  int v39; // [rsp+C4h] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  if ( a2 )
  {
    if ( a2 == 1 && *(_BYTE *)(a1 + 140) )
    {
      v18 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 128LL))(*(_QWORD *)(a1 + 88), a1);
      if ( v18 >= 0 )
      {
        v19 = 0;
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x472,
          (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v18,
          cData);
        v19 = 1;
      }
      *(_BYTE *)(a1 + 140) = v19;
    }
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 144);
    if ( !v4 || (v10 = v4 - 1, (*(_DWORD *)(a1 + 144) = v10) == 0) )
    {
      v5 = *(struct _TP_TIMER **)(a1 + 152);
      if ( v5 )
        wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>::close_reset(v5);
      *(_QWORD *)(a1 + 152) = 0LL;
      if ( *(_BYTE *)(a1 + 148) )
      {
        v11 = *(CActionCenterExperienceManager **)(a1 + 88);
        v12 = *(__int64 (__fastcall **)(CActionCenterExperienceManager *__hidden, struct CSingleViewShellExperience *))(*(_QWORD *)v11 + 128LL);
        if ( v12 == CActionCenterExperienceManager::OnPriorityUnboostRequested )
          v13 = CActionCenterExperienceManager::OnPriorityUnboostRequested(v11, (struct CSingleViewShellExperience *)a1);
        else
          v13 = v12(v11, (struct CSingleViewShellExperience *)a1);
        v17 = v13;
        if ( v13 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x469,
            (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
            (const char *)(unsigned int)v13,
            cData);
        *(_BYTE *)(a1 + 148) = v17 < 0;
        CSingleViewShellExperience::UnboostDiskIo((CSingleViewShellExperience *)a1, v14, v15, v16, cData);
      }
    }
  }
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
  v7 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 8), 0LL);
  Context = 0LL;
  v8 = v7;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_180438800;
    qword_180438800[0] = &LockScreenServiceLogging::`vftable';
    qword_180438818 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438800, qword_180438818);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180438800);
  }
  result = (unsigned __int8)Context;
  if ( **((_DWORD **)Context + 1) > 5u )
  {
    result = TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL);
    if ( result )
    {
      TlgCreateWsz(&pDesc, v8);
      TlgCreateWsz(&v27, StringRawBuffer);
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v39 = 0;
      v28 = &v23;
      v31 = a1 + 148;
      v34 = a1 + 144;
      v37 = a1 + 140;
      v23 = a2;
      v29 = 4;
      v32 = 1;
      v35 = 4;
      v38 = 1;
      return TlgWrite(v20, &unk_18039F283, 0LL, 0LL, 8u, &pData);
    }
  }
  return result;
}
