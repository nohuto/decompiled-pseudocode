/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___ @ 0x1800705C4
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216___::Invoke @ 0x1800704A0 (CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216___--Invoke.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_____lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___ @ 0x180070BF8 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d555ae02e1c74.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_____lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___(&v6);
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
