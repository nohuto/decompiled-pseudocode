/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_36d102d826199c3e9cf570def3c6f414___1_long_::Invoke @ 0x18000BAF0
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_96f3b658638d677fbd8b16fe22f1426c__&___ptr64__1_long_::Invoke @ 0x18000BA50 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_18000BA50.c)
 * Callees:
 *     _lambda_cc443415f5ecfa248de51aa242c4a017_::operator() @ 0x180003950 (_lambda_cc443415f5ecfa248de51aa242c4a017_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801069B4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_36d102d826199c3e9cf570def3c6f414___1_long_::Invoke(
        __int64 a1)
{
  _QWORD *v1; // rdi
  unsigned int v2; // ebx
  ViewEventArgsForShowAsStandalone **v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v4[1] = (ViewEventArgsForShowAsStandalone **)(a1 + 16);
  v1 = (_QWORD *)(a1 + 24);
  v4[0] = (ViewEventArgsForShowAsStandalone **)(a1 + 24);
  v2 = lambda_cc443415f5ecfa248de51aa242c4a017_::operator()(v4);
  if ( (v2 & 0x80000000) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v1 + 88LL))(*v1, v2);
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v2);
  }
  return v2;
}
