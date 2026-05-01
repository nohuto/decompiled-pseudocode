/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_057997b9bbf85cf4f9ee751d30e1f3a6___ @ 0x18008490C
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_36539e2bf5b74e88817ab82cca37e58d__&___ptr64_::Run @ 0x180084D10 (wil--details--functor_wrapper_void__lambda_36539e2bf5b74e88817ab82cca37e58d__-___ptr64_--Run.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_057997b9bbf85cf4f9ee751d30e1f3a6_____lambda_057997b9bbf85cf4f9ee751d30e1f3a6___ @ 0x180085710 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_057997b9bbf85.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_057997b9bbf85cf4f9ee751d30e1f3a6___(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_057997b9bbf85cf4f9ee751d30e1f3a6_____lambda_057997b9bbf85cf4f9ee751d30e1f3a6___(&v6);
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
