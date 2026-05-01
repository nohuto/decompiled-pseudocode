/*
 * XREFs of ?IsGestureActive@MultitaskingViewGestureState@@UEAA_NXZ @ 0x18026C990
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x180095670 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 */

bool __fastcall MultitaskingViewGestureState::IsGestureActive(RTL_SRWLOCK *this)
{
  bool v2; // bl
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 7, &SRWLock);
  v2 = (unsigned int)(LODWORD(this[8].Ptr) - 1) <= 1;
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v2;
}
