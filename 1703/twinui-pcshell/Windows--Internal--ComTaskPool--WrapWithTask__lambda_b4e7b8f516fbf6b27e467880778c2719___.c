/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_b4e7b8f516fbf6b27e467880778c2719___ @ 0x18016D800
 * Callers:
 *     ?RelaunchSIPWithDelay@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18016B9C8 (-RelaunchSIPWithDelay@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b4e7b8f516fbf6b27e467880778c2719_____lambda_b4e7b8f516fbf6b27e467880778c2719___ @ 0x18016D9D4 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b4e7b8f516fbf.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_b4e7b8f516fbf6b27e467880778c2719___(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b4e7b8f516fbf6b27e467880778c2719_____lambda_b4e7b8f516fbf6b27e467880778c2719___(&v6);
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
