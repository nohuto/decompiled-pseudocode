/*
 * XREFs of ?OnStateChange@FeatureStateManager@details@wil@@QEAAXXZ @ 0x1800ABD48
 * Callers:
 *     _lambda_74900582371bb26b135d7f7a3ba0da76_::_lambda_invoker_cdecl_ @ 0x1800A9A60 (_lambda_74900582371bb26b135d7f7a3ba0da76_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180028F44 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?lock_shared@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800AD8C8 (-lock_shared@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SR.c)
 */

void __fastcall wil::details::FeatureStateManager::OnStateChange(wil::details::FeatureStateManager *this)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  void (__fastcall *v4)(__int64); // rbp
  __int64 v5; // r14
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rax
  PSRWLOCK SRWLock; // [rsp+60h] [rbp+8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp+10h] BYREF

  if ( *(_BYTE *)this )
  {
    wil::srwlock::lock_shared((char *)this + 32, &SRWLock);
    v2 = (*((_QWORD *)this + 15) - *((_QWORD *)this + 14)) >> 4;
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    v3 = 0LL;
    while ( v3 < v2 )
    {
      v4 = 0LL;
      v5 = 0LL;
      Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 40, (__int64)&lpCriticalSection);
      wil::srwlock::lock_exclusive((__int64)this + 32, (__int64)&SRWLock);
      if ( v3 < v2 )
      {
        v6 = *((_QWORD *)this + 14);
        v7 = (_QWORD *)(v6 + 16 * v3);
        while ( !*v7 )
        {
          ++v3;
          v7 += 2;
          if ( v3 >= v2 )
            goto LABEL_11;
        }
        v8 = 2 * v3++;
        v5 = *(_QWORD *)(v6 + 8 * v8 + 8);
        v4 = *(void (__fastcall **)(__int64))(v6 + 8 * v8);
      }
LABEL_11:
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
      if ( v4 )
        v4(v5);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
    }
  }
}
