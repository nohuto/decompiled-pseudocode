/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_a847f980382ff80e4546269ffbdc31c5___ @ 0x180020880
 * Callers:
 *     ?CancelPendingComTaskPoolTasks@@YAXK_N@Z @ 0x180023218 (-CancelPendingComTaskPoolTasks@@YAXK_N@Z.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a847f980382ff80e4546269ffbdc31c5_____lambda_a847f980382ff80e4546269ffbdc31c5___ @ 0x1800207DC (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a847f980382ff.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_a847f980382ff80e4546269ffbdc31c5___(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a847f980382ff80e4546269ffbdc31c5_____lambda_a847f980382ff80e4546269ffbdc31c5___(
         &v7,
         a2);
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
