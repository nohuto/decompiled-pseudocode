/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_1ab7f1210d4a2916bb4211d88b774039___ @ 0x18006AAC0
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_d7e8f2be42fd64d2c7dbd0237222ced7___ @ 0x18006A3E8 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_d7e8f2be42fd64d2c7dbd0237222ced7___.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1ab7f1210d4a2916bb4211d88b774039_____lambda_1ab7f1210d4a2916bb4211d88b774039___ @ 0x18006C1FC (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1ab7f1210d4a2.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_1ab7f1210d4a2916bb4211d88b774039___(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1ab7f1210d4a2916bb4211d88b774039_____lambda_1ab7f1210d4a2916bb4211d88b774039___(&v6);
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
