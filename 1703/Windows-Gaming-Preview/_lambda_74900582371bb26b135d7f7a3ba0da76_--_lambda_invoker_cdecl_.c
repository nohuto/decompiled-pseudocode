/*
 * XREFs of _lambda_74900582371bb26b135d7f7a3ba0da76_::_lambda_invoker_cdecl_ @ 0x180022450
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_74900582371bb26b135d7f7a3ba0da76_::_lambda_invoker_cdecl_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  RTL_SRWLOCK *v5; // rbp
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  void (__fastcall *v8)(__int64); // r14
  __int64 v9; // r12
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rax

  if ( *(_BYTE *)a4 )
  {
    v5 = (RTL_SRWLOCK *)(a4 + 32);
    AcquireSRWLockShared((PSRWLOCK)(a4 + 32));
    v6 = (*(_QWORD *)(a4 + 120) - *(_QWORD *)(a4 + 112)) >> 4;
    if ( v5 )
      ReleaseSRWLockShared(v5);
    v7 = 0LL;
    while ( v7 < v6 )
    {
      v8 = 0LL;
      v9 = 0LL;
      EnterCriticalSection((LPCRITICAL_SECTION)(a4 + 40));
      AcquireSRWLockExclusive(v5);
      if ( v7 < v6 )
      {
        v10 = *(_QWORD *)(a4 + 112);
        v11 = (_QWORD *)(v10 + 16 * v7);
        while ( !*v11 )
        {
          ++v7;
          v11 += 2;
          if ( v7 >= v6 )
            goto LABEL_11;
        }
        v12 = 2 * v7++;
        v9 = *(_QWORD *)(v10 + 8 * v12 + 8);
        v8 = *(void (__fastcall **)(__int64))(v10 + 8 * v12);
      }
LABEL_11:
      if ( v5 )
        ReleaseSRWLockExclusive(v5);
      if ( v8 )
        v8(v9);
      if ( a4 != -40 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a4 + 40));
    }
  }
  return 0LL;
}
