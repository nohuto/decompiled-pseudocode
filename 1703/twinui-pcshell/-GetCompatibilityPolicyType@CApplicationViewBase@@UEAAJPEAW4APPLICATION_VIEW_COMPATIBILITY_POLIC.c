/*
 * XREFs of ?GetCompatibilityPolicyType@CApplicationViewBase@@UEAAJPEAW4APPLICATION_VIEW_COMPATIBILITY_POLICY@@@Z @ 0x180081E30
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 */

__int64 __fastcall CApplicationViewBase::GetCompatibilityPolicyType(
        RTL_SRWLOCK *this,
        enum APPLICATION_VIEW_COMPATIBILITY_POLICY *a2)
{
  RTL_SRWLOCK *v4; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 4, &SRWLock);
  v4 = SRWLock;
  *(_DWORD *)a2 = this[9].Ptr;
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return 0LL;
}
