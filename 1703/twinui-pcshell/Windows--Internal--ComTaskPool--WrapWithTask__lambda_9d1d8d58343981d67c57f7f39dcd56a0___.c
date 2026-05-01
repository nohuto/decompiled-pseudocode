/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_9d1d8d58343981d67c57f7f39dcd56a0___ @ 0x18011016C
 * Callers:
 *     _lambda_62924d4e5fe2ec2efa180cb71b93b0bb_::_lambda_invoker_cdecl_ @ 0x18010FA50 (_lambda_62924d4e5fe2ec2efa180cb71b93b0bb_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9d1d8d58343981d67c57f7f39dcd56a0_____lambda_9d1d8d58343981d67c57f7f39dcd56a0___ @ 0x1801102CC (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9d1d8d5834398.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_9d1d8d58343981d67c57f7f39dcd56a0___(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9d1d8d58343981d67c57f7f39dcd56a0_____lambda_9d1d8d58343981d67c57f7f39dcd56a0___(&v6);
  v3 = *v2;
  *v2 = 0LL;
  v4 = v6;
  *a1 = v3;
  if ( v4 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
