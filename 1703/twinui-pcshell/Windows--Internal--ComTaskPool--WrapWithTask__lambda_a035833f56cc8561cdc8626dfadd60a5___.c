/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_a035833f56cc8561cdc8626dfadd60a5___ @ 0x180145E0C
 * Callers:
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180145620 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitc.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a035833f56cc8561cdc8626dfadd60a5_____lambda_a035833f56cc8561cdc8626dfadd60a5___ @ 0x1801462C4 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a035833f56cc8.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_a035833f56cc8561cdc8626dfadd60a5___(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a035833f56cc8561cdc8626dfadd60a5_____lambda_a035833f56cc8561cdc8626dfadd60a5___(&v6);
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
