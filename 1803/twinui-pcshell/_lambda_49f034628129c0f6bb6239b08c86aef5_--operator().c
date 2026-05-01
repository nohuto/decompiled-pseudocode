/*
 * XREFs of _lambda_49f034628129c0f6bb6239b08c86aef5_::operator() @ 0x18021B9B0
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_2812b201b56d6f6dd9ce8c91de3c0e9a___::Invoke @ 0x18021E5C0 (CAsyncCallbackWithLambda__lambda_2812b201b56d6f6dd9ce8c91de3c0e9a___--Invoke.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIAllUpViewHost@@@?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAllUpViewHost@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800A055C (--$query@UIAllUpViewHost@@@-$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_49f034628129c0f6bb6239b08c86aef5_::operator()(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h]

  v1 = Platform::Details::ResolveWeakReference(&_uuidof__AVXamlAllUpViewController__, a1);
  v6 = v1;
  v2 = __abi_winrt_ptr_ctor(v1);
  v7 = v2;
  __abi_winrt_ptr_dtor(v1);
  if ( v2 )
  {
    wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::query<IAllUpViewHost>(
      (_QWORD *)(v2 + 56),
      (__int64)&v6);
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 64LL))(v6);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        383LL,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
        (const char *)(unsigned int)v3);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v6);
  }
  __abi_winrt_ptr_dtor(v2);
  return 0LL;
}
