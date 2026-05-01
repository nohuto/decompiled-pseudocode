/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_85c6a334ae9166c0f52272825a986cb2___ @ 0x180038944
 * Callers:
 *     ?HandleWindowReplaced@CClassicWindowManager@@UEAAXPEAUHWND__@@0@Z @ 0x1800362B0 (-HandleWindowReplaced@CClassicWindowManager@@UEAAXPEAUHWND__@@0@Z.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_85c6a334ae9166c0f52272825a986cb2_____lambda_85c6a334ae9166c0f52272825a986cb2___ @ 0x180038FA0 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_85c6a334ae916.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_85c6a334ae9166c0f52272825a986cb2___(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_85c6a334ae9166c0f52272825a986cb2_____lambda_85c6a334ae9166c0f52272825a986cb2___(&v6);
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
