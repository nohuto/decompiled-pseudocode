/*
 * XREFs of ?UpdateWindowPosition@XamlTaskbarProxy@@UEAAXXZ @ 0x1801284D0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ?UpdateWindowPositionInternal@XamlTaskbarProxy@@AEAAXXZ @ 0x180128618 (-UpdateWindowPositionInternal@XamlTaskbarProxy@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall XamlTaskbarProxy::UpdateWindowPosition(RTL_SRWLOCK *this)
{
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 11, &SRWLock);
  XamlTaskbarProxy::UpdateWindowPositionInternal((XamlTaskbarProxy *)this);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
}
