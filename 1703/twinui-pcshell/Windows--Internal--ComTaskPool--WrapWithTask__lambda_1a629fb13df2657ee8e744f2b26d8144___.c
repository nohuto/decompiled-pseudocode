/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_1a629fb13df2657ee8e744f2b26d8144___ @ 0x18011A270
 * Callers:
 *     ?_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ @ 0x1801141A0 (-_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a629fb13df2657ee8e744f2b26d8144_____lambda_1a629fb13df2657ee8e744f2b26d8144___ @ 0x18011AE70 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1a629fb13df26.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_1a629fb13df2657ee8e744f2b26d8144___(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a629fb13df2657ee8e744f2b26d8144_____lambda_1a629fb13df2657ee8e744f2b26d8144___(&v6);
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
