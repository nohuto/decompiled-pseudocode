/*
 * XREFs of ?get_ActivationTimestamp@SwitchItemBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@UEAAJPEAUDateTime@Foundation@Windows@@@Z @ 0x180165910
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemBase::get_ActivationTimestamp(
        RTL_SRWLOCK *this,
        RTL_SRWLOCK *a2)
{
  RTL_SRWLOCK *v4; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 4, &SRWLock);
  v4 = SRWLock;
  a2->Ptr = this[8].Ptr;
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return 0LL;
}
