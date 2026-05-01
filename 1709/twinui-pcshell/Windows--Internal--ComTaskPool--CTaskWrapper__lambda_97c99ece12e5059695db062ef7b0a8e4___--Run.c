/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_97c99ece12e5059695db062ef7b0a8e4___::Run @ 0x1801770A0
 * Callers:
 *     <none>
 * Callees:
 *     CreationThreadDispatcher::RunSync__lambda_0a797daff9b242b959bbd8d51d98a883___ @ 0x180176870 (CreationThreadDispatcher--RunSync__lambda_0a797daff9b242b959bbd8d51d98a883___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_97c99ece12e5059695db062ef7b0a8e4___::Run(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v4 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return CreationThreadDispatcher::RunSync__lambda_0a797daff9b242b959bbd8d51d98a883___(*(_QWORD *)(a1 + 24), &v4);
}
