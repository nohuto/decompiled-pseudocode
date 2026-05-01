/*
 * XREFs of CAsyncCallbackWithLambda__lambda_1e52c7d2e1e6d5a227d45010f0b86b73___::Invoke @ 0x18021E500
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_1e52c7d2e1e6d5a227d45010f0b86b73___::Invoke(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = Platform::Details::ResolveWeakReference(&_uuidof__AVXamlAllUpViewController__, a1 + 48);
  v2 = __abi_winrt_ptr_ctor(v1);
  __abi_winrt_ptr_dtor(v1);
  if ( v2 )
  {
    v3 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v2 + 56))(
           *(_QWORD *)(v2 + 56),
           &GUID_24d6236f_83b7_4abc_b7a9_082c901b9839,
           &v6);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        5691LL,
        (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
        (const char *)(unsigned int)v3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 48LL))(v6);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v6);
  }
  __abi_winrt_ptr_dtor(v2);
  return 0LL;
}
