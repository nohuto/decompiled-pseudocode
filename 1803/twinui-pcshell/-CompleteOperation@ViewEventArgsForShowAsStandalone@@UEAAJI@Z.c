/*
 * XREFs of ?CompleteOperation@ViewEventArgsForShowAsStandalone@@UEAAJI@Z @ 0x1800049B0
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_673d145835063be5641b9c58f7276923___1_long_::Invoke @ 0x18000BC30 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_18000BC30.c)
 * Callees:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_18f2e6e28967ea052376c138380b4390__&___ptr64__1_long_::Invoke @ 0x180004D10 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ptr64_--Dele.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventArgsForShowAsStandalone::CompleteOperation(ViewEventArgsForShowAsStandalone *this)
{
  __int64 (*v1)(void); // rax
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(__int64 (**)(void))(**((_QWORD **)this + 7) + 24LL);
  if ( v1 == Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_18f2e6e28967ea052376c138380b4390______ptr64__1_long_::Invoke )
    v2 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_18f2e6e28967ea052376c138380b4390______ptr64__1_long_::Invoke();
  else
    v2 = v1();
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7C,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventargs.h",
      (const char *)(unsigned int)v2,
      v5);
  return v3;
}
