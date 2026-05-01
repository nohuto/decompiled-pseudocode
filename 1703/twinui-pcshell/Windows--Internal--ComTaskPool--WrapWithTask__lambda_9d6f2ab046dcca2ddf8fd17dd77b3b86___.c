/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_9d6f2ab046dcca2ddf8fd17dd77b3b86___ @ 0x18001B60C
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_13c840c931e6c4b9015195fc4e60665a___::operator() @ 0x180019AC0 (CDelayIAMOperations--CDelayedOperation__lambda_13c840c931e6c4b9015195fc4e60665a___--operator().c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9d6f2ab046dcca2ddf8fd17dd77b3b86_____lambda_9d6f2ab046dcca2ddf8fd17dd77b3b86___ @ 0x18001BD94 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9d6f2ab046dcc.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_9d6f2ab046dcca2ddf8fd17dd77b3b86___(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9d6f2ab046dcca2ddf8fd17dd77b3b86_____lambda_9d6f2ab046dcca2ddf8fd17dd77b3b86___(&v6);
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
