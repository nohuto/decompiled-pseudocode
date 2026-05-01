/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_bccacf824c0b35a20e4c1bcfbe66ad1f___ @ 0x18006AB48
 * Callers:
 *     ?DropForeground@CFrameApplicationPresentation@@UEAAXW4DropForegroundOptions@@@Z @ 0x1800671D0 (-DropForeground@CFrameApplicationPresentation@@UEAAXW4DropForegroundOptions@@@Z.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bccacf824c0b35a20e4c1bcfbe66ad1f_____lambda_bccacf824c0b35a20e4c1bcfbe66ad1f___ @ 0x18006C384 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_bccacf824c0b3.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_bccacf824c0b35a20e4c1bcfbe66ad1f___(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bccacf824c0b35a20e4c1bcfbe66ad1f_____lambda_bccacf824c0b35a20e4c1bcfbe66ad1f___(&v6);
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
