/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_67eef396734d09a1eef436dbd1978d71___ @ 0x18006AD68
 * Callers:
 *     ?UpdateSizeConstraints@CFrameApplicationPresentation@@UEAAJXZ @ 0x180068470 (-UpdateSizeConstraints@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_67eef396734d09a1eef436dbd1978d71_____lambda_67eef396734d09a1eef436dbd1978d71___ @ 0x18006CA14 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_67eef396734d0.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_67eef396734d09a1eef436dbd1978d71___(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_67eef396734d09a1eef436dbd1978d71_____lambda_67eef396734d09a1eef436dbd1978d71___(&v6);
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
