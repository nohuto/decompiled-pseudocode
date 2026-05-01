/*
 * XREFs of ?GetShowInSwitchers@CWinRTApplicationView@@UEAAJPEAH@Z @ 0x180080250
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 */

__int64 __fastcall CWinRTApplicationView::GetShowInSwitchers(RTL_SRWLOCK *this, int *a2)
{
  RTL_SRWLOCK *v4; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 4, &SRWLock);
  v4 = SRWLock;
  *a2 = LOBYTE(this[21].Ptr) != 0;
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return 0LL;
}
