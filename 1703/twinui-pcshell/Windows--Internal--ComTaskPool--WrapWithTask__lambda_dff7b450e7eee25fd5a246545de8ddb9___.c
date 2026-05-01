/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_dff7b450e7eee25fd5a246545de8ddb9___ @ 0x1800231D0
 * Callers:
 *     ?_ShutdownServiceProviders@CApplicationManager@@AEAAXXZ @ 0x1800106D8 (-_ShutdownServiceProviders@CApplicationManager@@AEAAXXZ.c)
 *     ?CancelPendingComTaskPoolTasks@@YAXK_N@Z @ 0x180023218 (-CancelPendingComTaskPoolTasks@@YAXK_N@Z.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dff7b450e7eee25fd5a246545de8ddb9_____lambda_dff7b450e7eee25fd5a246545de8ddb9___ @ 0x180023140 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_dff7b450e7eee.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_dff7b450e7eee25fd5a246545de8ddb9___(
        _QWORD *a1,
        __int64 a2)
{
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v3 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dff7b450e7eee25fd5a246545de8ddb9_____lambda_dff7b450e7eee25fd5a246545de8ddb9___(&v7);
  v4 = *v3;
  *v3 = 0LL;
  v5 = v7;
  *a1 = v4;
  if ( v5 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return a1;
}
