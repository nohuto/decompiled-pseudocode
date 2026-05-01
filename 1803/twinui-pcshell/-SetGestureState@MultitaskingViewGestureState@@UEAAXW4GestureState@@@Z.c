/*
 * XREFs of ?SetGestureState@MultitaskingViewGestureState@@UEAAXW4GestureState@@@Z @ 0x18026D060
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18005415C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x1800F5E74 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 */

void __fastcall MultitaskingViewGestureState::SetGestureState(__int64 a1, int a2)
{
  RTL_SRWLOCK *v4; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive((RTL_SRWLOCK *)(a1 + 48), &v4);
  *(_DWORD *)(a1 + 56) = a2;
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v4);
}
