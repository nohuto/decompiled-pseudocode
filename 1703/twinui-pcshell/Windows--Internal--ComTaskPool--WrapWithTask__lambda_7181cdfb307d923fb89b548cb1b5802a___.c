/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_7181cdfb307d923fb89b548cb1b5802a___ @ 0x180146434
 * Callers:
 *     ?DismissView@XamlBaseViewController@@IE$AAAXXZ @ 0x180145A3C (-DismissView@XamlBaseViewController@@IE$AAAXXZ.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7181cdfb307d923fb89b548cb1b5802a_____lambda_7181cdfb307d923fb89b548cb1b5802a___ @ 0x18014689C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7181cdfb307d9.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_7181cdfb307d923fb89b548cb1b5802a___(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7181cdfb307d923fb89b548cb1b5802a_____lambda_7181cdfb307d923fb89b548cb1b5802a___(&v6);
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
