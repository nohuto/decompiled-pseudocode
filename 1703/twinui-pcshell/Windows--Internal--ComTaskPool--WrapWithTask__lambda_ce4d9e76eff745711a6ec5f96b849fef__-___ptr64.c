/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_ce4d9e76eff745711a6ec5f96b849fef__&___ptr64_ @ 0x18007E6B4
 * Callers:
 *     ?v_RefreshEnterpriseIdIfNeeded@CWin32ApplicationView@@EEAAJXZ @ 0x18007BFF0 (-v_RefreshEnterpriseIdIfNeeded@CWin32ApplicationView@@EEAAJXZ.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ce4d9e76eff745711a6ec5f96b849fef__&___ptr64___lambda_ce4d9e76eff745711a6ec5f96b849fef__&___ptr64_ @ 0x18007E9A4 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ce4d9e76eff74.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_ce4d9e76eff745711a6ec5f96b849fef______ptr64_(
        _QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ce4d9e76eff745711a6ec5f96b849fef______ptr64___lambda_ce4d9e76eff745711a6ec5f96b849fef______ptr64_(&v6);
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
