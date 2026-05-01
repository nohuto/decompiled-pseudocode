/*
 * XREFs of ?GetVirtualDesktopId@CApplicationViewBase@@UEAAJPEAU_GUID@@@Z @ 0x180081CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 */

__int64 __fastcall CApplicationViewBase::GetVirtualDesktopId(RTL_SRWLOCK *this, struct _GUID *a2)
{
  RTL_SRWLOCK *v4; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 4, &SRWLock);
  v4 = SRWLock;
  *a2 = *(struct _GUID *)&this[12].Ptr;
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return 0LL;
}
