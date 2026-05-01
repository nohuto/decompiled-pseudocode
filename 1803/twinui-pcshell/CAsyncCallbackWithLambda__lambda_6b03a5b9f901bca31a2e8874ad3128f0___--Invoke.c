/*
 * XREFs of CAsyncCallbackWithLambda__lambda_6b03a5b9f901bca31a2e8874ad3128f0___::Invoke @ 0x18021E5E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_6b03a5b9f901bca31a2e8874ad3128f0___::Invoke(__int64 a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(a1 + 48) + 56LL))(
         *(_QWORD *)(*(_QWORD *)(a1 + 48) + 56LL),
         &GUID_24d6236f_83b7_4abc_b7a9_082c901b9839,
         &v5);
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      5691LL,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v2);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 32LL))(
    v5,
    *(_QWORD *)(a1 + 72),
    *(unsigned int *)(a1 + 64));
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v5);
  return 0LL;
}
