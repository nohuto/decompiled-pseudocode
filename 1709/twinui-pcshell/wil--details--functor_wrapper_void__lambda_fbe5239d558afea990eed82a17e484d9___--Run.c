/*
 * XREFs of wil::details::functor_wrapper_void__lambda_fbe5239d558afea990eed82a17e484d9___::Run @ 0x18019F010
 * Callers:
 *     wil::ResultFromException__lambda_fbe5239d558afea990eed82a17e484d9___ @ 0x18019E988 (wil--ResultFromException__lambda_fbe5239d558afea990eed82a17e484d9___.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::functor_wrapper_void__lambda_fbe5239d558afea990eed82a17e484d9___::Run(__int64 a1)
{
  __int64 *v1; // rdx
  __int64 v2; // rsi
  __int64 *v3; // rbp
  __int64 *i; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rdi
  volatile signed __int32 *v8; // rbx

  v1 = *(__int64 **)(a1 + 8);
  v2 = *v1;
  v3 = *(__int64 **)(*v1 + 400);
  for ( i = (__int64 *)(*(_QWORD *)v1[1] + 16LL); i != v3; i += 2 )
  {
    v5 = i[1];
    i[1] = 0LL;
    v6 = *i;
    *i = 0LL;
    v7 = (volatile signed __int32 *)*(i - 1);
    *(i - 1) = v5;
    *(i - 2) = v6;
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
  }
  v8 = *(volatile signed __int32 **)(*(_QWORD *)(v2 + 400) - 8LL);
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  *(_QWORD *)(v2 + 400) -= 16LL;
  return 0LL;
}
