/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_731965040e8443022816428e179c115d___ @ 0x18001B584
 * Callers:
 *     CIAMGlobals::QueueViewManagementTask__lambda_6f3dfa547e2ecbb13d4169c92b8d6cb6___ @ 0x180018310 (CIAMGlobals--QueueViewManagementTask__lambda_6f3dfa547e2ecbb13d4169c92b8d6cb6___.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_731965040e8443022816428e179c115d_____lambda_731965040e8443022816428e179c115d___ @ 0x18001BBF0 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_731965040e844.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_731965040e8443022816428e179c115d___(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_731965040e8443022816428e179c115d_____lambda_731965040e8443022816428e179c115d___(&v6);
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
