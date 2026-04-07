/*
 * XREFs of ?OnStateChange@FeatureStateManager@details@wil@@QEAAXXZ @ 0x180080E88
 * Callers:
 *     _lambda_74900582371bb26b135d7f7a3ba0da76_::_lambda_invoker_cdecl_ @ 0x180080000 (_lambda_74900582371bb26b135d7f7a3ba0da76_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::FeatureStateManager::OnStateChange(wil::details::FeatureStateManager *this)
{
  RTL_SRWLOCK *v2; // rbp
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  void (__fastcall *v5)(__int64); // r14
  __int64 v6; // r12
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rax

  if ( *(_BYTE *)this )
  {
    v2 = (RTL_SRWLOCK *)((char *)this + 32);
    AcquireSRWLockShared((PSRWLOCK)this + 4);
    v3 = (*((_QWORD *)this + 15) - *((_QWORD *)this + 14)) >> 4;
    if ( v2 )
      ReleaseSRWLockShared(v2);
    v4 = 0LL;
    while ( v4 < v3 )
    {
      v5 = 0LL;
      v6 = 0LL;
      EnterCriticalSection((LPCRITICAL_SECTION)this + 1);
      AcquireSRWLockExclusive(v2);
      if ( v4 < v3 )
      {
        v7 = *((_QWORD *)this + 14);
        v8 = (_QWORD *)(v7 + 16 * v4);
        while ( !*v8 )
        {
          ++v4;
          v8 += 2;
          if ( v4 >= v3 )
            goto LABEL_11;
        }
        v9 = 2 * v4++;
        v6 = *(_QWORD *)(v7 + 8 * v9 + 8);
        v5 = *(void (__fastcall **)(__int64))(v7 + 8 * v9);
      }
LABEL_11:
      if ( v2 )
        ReleaseSRWLockExclusive(v2);
      if ( v5 )
        v5(v6);
      if ( this != (wil::details::FeatureStateManager *)-40LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)this + 1);
    }
  }
}
