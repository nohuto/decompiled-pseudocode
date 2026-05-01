/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_6ab783b06ce71657ead7e152063b5e40___1_long_::Invoke @ 0x180120B20
 * Callers:
 *     <none>
 * Callees:
 *     ?TransformApplicationViewError@@YAXPEAJ@Z @ 0x180004CA0 (-TransformApplicationViewError@@YAXPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801069B4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_6ab783b06ce71657ead7e152063b5e40___1_long_::Invoke(
        __int64 a1,
        int a2)
{
  __int64 v2; // rax
  signed int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  TransformApplicationViewError(&v6);
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v2 + 16) + 88LL))(
         *(_QWORD *)(v2 + 16),
         (unsigned int)v6);
  v4 = v3;
  if ( v3 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v3);
  return v4;
}
