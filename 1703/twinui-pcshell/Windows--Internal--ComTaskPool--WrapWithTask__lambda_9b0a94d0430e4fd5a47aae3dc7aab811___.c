/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_9b0a94d0430e4fd5a47aae3dc7aab811___ @ 0x18012A7E0
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_e5d643bc643c8a09454132ff8d011188___ @ 0x180129AB8 (CreationThreadDispatcher--RunAsync__lambda_e5d643bc643c8a09454132ff8d011188___.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9b0a94d0430e4fd5a47aae3dc7aab811_____lambda_9b0a94d0430e4fd5a47aae3dc7aab811___ @ 0x18012AB0C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9b0a94d0430e4.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_9b0a94d0430e4fd5a47aae3dc7aab811___(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9b0a94d0430e4fd5a47aae3dc7aab811_____lambda_9b0a94d0430e4fd5a47aae3dc7aab811___(&v6);
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
