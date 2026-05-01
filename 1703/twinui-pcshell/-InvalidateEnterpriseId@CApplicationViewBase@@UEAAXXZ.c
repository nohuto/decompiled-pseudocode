/*
 * XREFs of ?InvalidateEnterpriseId@CApplicationViewBase@@UEAAXXZ @ 0x180082420
 * Callers:
 *     <none>
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 */

void __fastcall CApplicationViewBase::InvalidateEnterpriseId(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::srwlock::lock_exclusive(this + 2, &SRWLock);
  v2 = SRWLock;
  LOBYTE(this[3].Ptr) = 1;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
