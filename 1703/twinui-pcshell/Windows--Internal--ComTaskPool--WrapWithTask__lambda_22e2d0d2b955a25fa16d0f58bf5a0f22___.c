/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_22e2d0d2b955a25fa16d0f58bf5a0f22___ @ 0x18004E8DC
 * Callers:
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x18004B6C0 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_22e2d0d2b955a25fa16d0f58bf5a0f22_____lambda_22e2d0d2b955a25fa16d0f58bf5a0f22___ @ 0x18004EA60 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_22e2d0d2b955a.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_22e2d0d2b955a25fa16d0f58bf5a0f22___(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_22e2d0d2b955a25fa16d0f58bf5a0f22_____lambda_22e2d0d2b955a25fa16d0f58bf5a0f22___(&v6);
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
