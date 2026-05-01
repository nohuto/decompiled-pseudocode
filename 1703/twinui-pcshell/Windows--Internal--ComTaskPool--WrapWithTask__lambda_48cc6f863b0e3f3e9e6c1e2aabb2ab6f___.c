/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_48cc6f863b0e3f3e9e6c1e2aabb2ab6f___ @ 0x180084884
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_28bf0772b9cd8be7096e21c2793a4ce3__&___ptr64_::Run @ 0x180085040 (wil--details--functor_wrapper_void__lambda_28bf0772b9cd8be7096e21c2793a4ce3__-___ptr64_--Run.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_48cc6f863b0e3f3e9e6c1e2aabb2ab6f_____lambda_48cc6f863b0e3f3e9e6c1e2aabb2ab6f___ @ 0x1800855B0 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_48cc6f863b0e3.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_48cc6f863b0e3f3e9e6c1e2aabb2ab6f___(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_48cc6f863b0e3f3e9e6c1e2aabb2ab6f_____lambda_48cc6f863b0e3f3e9e6c1e2aabb2ab6f___(&v6);
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
