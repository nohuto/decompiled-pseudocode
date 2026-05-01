/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_917667f80511e4bec41c80ee8a028167___ @ 0x18006A9B0
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_b20bc4ca5f99e8d5dec7059f6d0433d1___ @ 0x180069B64 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_b20bc4ca5f99e8d5dec7059f6d0433d1___.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_917667f80511e4bec41c80ee8a028167_____lambda_917667f80511e4bec41c80ee8a028167___ @ 0x18006BE50 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_917667f80511e.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_917667f80511e4bec41c80ee8a028167___(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_917667f80511e4bec41c80ee8a028167_____lambda_917667f80511e4bec41c80ee8a028167___(&v6);
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
