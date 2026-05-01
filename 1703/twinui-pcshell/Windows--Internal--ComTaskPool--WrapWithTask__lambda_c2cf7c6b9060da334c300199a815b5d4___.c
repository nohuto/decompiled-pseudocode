/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_c2cf7c6b9060da334c300199a815b5d4___ @ 0x180084950
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_0cb0a454b9f2570e0892a1dab0e748f4__&___ptr64_::Run @ 0x180084B40 (wil--details--functor_wrapper_void__lambda_0cb0a454b9f2570e0892a1dab0e748f4__-___ptr64_--Run.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c2cf7c6b9060da334c300199a815b5d4_____lambda_c2cf7c6b9060da334c300199a815b5d4___ @ 0x1800857C0 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c2cf7c6b9060d.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_c2cf7c6b9060da334c300199a815b5d4___(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c2cf7c6b9060da334c300199a815b5d4_____lambda_c2cf7c6b9060da334c300199a815b5d4___(&v6);
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
