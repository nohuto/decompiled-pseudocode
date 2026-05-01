/*
 * XREFs of ?SetCompatibilityPolicyType@CApplicationViewBase@@UEAAJW4APPLICATION_VIEW_COMPATIBILITY_POLICY@@@Z @ 0x180081E70
 * Callers:
 *     <none>
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 */

__int64 __fastcall CApplicationViewBase::SetCompatibilityPolicyType(__int64 a1, int a2)
{
  RTL_SRWLOCK *v4; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(a1 + 32), &SRWLock);
  v4 = SRWLock;
  *(_DWORD *)(a1 + 72) = a2;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
