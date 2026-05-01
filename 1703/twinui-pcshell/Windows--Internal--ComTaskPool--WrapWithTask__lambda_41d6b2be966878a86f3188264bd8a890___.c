/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_41d6b2be966878a86f3188264bd8a890___ @ 0x18006ADF0
 * Callers:
 *     ?SetBackgroundColor@CFrameApplicationPresentation@@UEAAJK@Z @ 0x180068A70 (-SetBackgroundColor@CFrameApplicationPresentation@@UEAAJK@Z.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_41d6b2be966878a86f3188264bd8a890_____lambda_41d6b2be966878a86f3188264bd8a890___ @ 0x18006CBB4 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_41d6b2be96687.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_41d6b2be966878a86f3188264bd8a890___(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_41d6b2be966878a86f3188264bd8a890_____lambda_41d6b2be966878a86f3188264bd8a890___(&v6);
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
