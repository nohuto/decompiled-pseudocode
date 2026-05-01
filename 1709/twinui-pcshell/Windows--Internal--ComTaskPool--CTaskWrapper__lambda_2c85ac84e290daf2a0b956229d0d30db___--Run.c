/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2c85ac84e290daf2a0b956229d0d30db___::Run @ 0x1801772C0
 * Callers:
 *     <none>
 * Callees:
 *     CreationThreadDispatcher::RunSync__lambda_10c47d2a085dd9f3462efe65dbc76ec9___ @ 0x180176480 (CreationThreadDispatcher--RunSync__lambda_10c47d2a085dd9f3462efe65dbc76ec9___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2c85ac84e290daf2a0b956229d0d30db___::Run(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v4 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return CreationThreadDispatcher::RunSync__lambda_10c47d2a085dd9f3462efe65dbc76ec9___(*(_QWORD *)(a1 + 24), &v4);
}
