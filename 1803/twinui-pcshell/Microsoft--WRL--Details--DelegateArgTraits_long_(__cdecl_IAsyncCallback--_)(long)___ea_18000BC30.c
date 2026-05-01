/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_673d145835063be5641b9c58f7276923___1_long_::Invoke @ 0x18000BC30
 * Callers:
 *     <none>
 * Callees:
 *     ?CompleteOperation@ViewEventArgsForShowAsStandalone@@UEAAJI@Z @ 0x1800049B0 (-CompleteOperation@ViewEventArgsForShowAsStandalone@@UEAAJI@Z.c)
 *     ?TransformApplicationViewError@@YAXPEAJ@Z @ 0x180004CA0 (-TransformApplicationViewError@@YAXPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801069B4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_673d145835063be5641b9c58f7276923___1_long_::Invoke(
        __int64 a1,
        unsigned int a2)
{
  __int64 v2; // rax
  ViewEventArgsForShowAsStandalone *v3; // rcx
  __int64 (__fastcall *v4)(ViewEventArgsForShowAsStandalone *); // rax
  int v5; // eax
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  TransformApplicationViewError((int *)&v8);
  v3 = *(ViewEventArgsForShowAsStandalone **)(v2 + 16);
  v4 = *(__int64 (__fastcall **)(ViewEventArgsForShowAsStandalone *))(*(_QWORD *)v3 + 88LL);
  if ( v4 == ViewEventArgsForShowAsStandalone::CompleteOperation )
    v5 = ViewEventArgsForShowAsStandalone::CompleteOperation(v3);
  else
    v5 = ((__int64 (__fastcall *)(ViewEventArgsForShowAsStandalone *, _QWORD))v4)(v3, v8);
  v6 = v5;
  if ( v5 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v5);
  return v6;
}
