/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_dfb3a3a31d2f8af8a26dd65c52087bc9___ @ 0x18006A928
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_eb88fe4cf858de5e6f9898dba3345098___ @ 0x180069818 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_eb88fe4cf858de5e6f9898dba3345098___.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dfb3a3a31d2f8af8a26dd65c52087bc9_____lambda_dfb3a3a31d2f8af8a26dd65c52087bc9___ @ 0x18006BCAC (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_dfb3a3a31d2f8.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_dfb3a3a31d2f8af8a26dd65c52087bc9___(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dfb3a3a31d2f8af8a26dd65c52087bc9_____lambda_dfb3a3a31d2f8af8a26dd65c52087bc9___(&v6);
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
