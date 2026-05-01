/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_a12f61aea3debf81db7797da6f154ad8___ @ 0x18006AA38
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_c4af78c0c8077c37e96163482dfb0569___ @ 0x18006A21C (CFrameApplicationPresentation--_AddTaskToQueue__lambda_c4af78c0c8077c37e96163482dfb0569___.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a12f61aea3debf81db7797da6f154ad8_____lambda_a12f61aea3debf81db7797da6f154ad8___ @ 0x18006C048 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a12f61aea3deb.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_a12f61aea3debf81db7797da6f154ad8___(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a12f61aea3debf81db7797da6f154ad8_____lambda_a12f61aea3debf81db7797da6f154ad8___(&v6);
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
