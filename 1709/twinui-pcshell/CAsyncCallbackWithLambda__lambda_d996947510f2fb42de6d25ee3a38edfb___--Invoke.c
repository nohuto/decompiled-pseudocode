/*
 * XREFs of CAsyncCallbackWithLambda__lambda_d996947510f2fb42de6d25ee3a38edfb___::Invoke @ 0x180176FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAsyncCallbackWithLambda__lambda_d996947510f2fb42de6d25ee3a38edfb___::Invoke(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h]

  v1 = Platform::Details::ResolveWeakReference(&_uuidof__AU__IXamlAllUpViewControllerPublicNonVirtuals__, a1 + 56);
  v2 = v1;
  v7 = v1;
  v6 = 0LL;
  if ( v1 )
  {
    v3 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v1 + 56))(
           *(_QWORD *)(v1 + 56),
           &GUID_24d6236f_83b7_4abc_b7a9_082c901b9839,
           &v6);
    if ( v3 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x15FD,
        (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
        (const char *)(unsigned int)v3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 48LL))(v6);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return 0LL;
}
