/*
 * XREFs of CAsyncCallbackWithLambda__lambda_317e581be4a268faa214a7f80f322c84___::Invoke @ 0x18005E6C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAsyncCallbackWithLambda__lambda_317e581be4a268faa214a7f80f322c84___::Invoke(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 56) + 144LL))(*(_QWORD *)(a1 + 56), &v3) >= 0 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v3 + 88LL))(v3, 64LL, 64LL);
  v1 = v3;
  if ( v3 )
  {
    v3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return 0LL;
}
