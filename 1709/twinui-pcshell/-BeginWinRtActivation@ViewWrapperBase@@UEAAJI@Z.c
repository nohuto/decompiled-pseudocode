/*
 * XREFs of ?BeginWinRtActivation@ViewWrapperBase@@UEAAJI@Z @ 0x18013D5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18011C2F8 (-AcquireLockExclusive@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 */

__int64 __fastcall ViewWrapperBase::BeginWinRtActivation(RTL_SRWLOCK **this, int a2)
{
  RTL_SRWLOCK *v4; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  ViewEventDispatcher::AcquireLockExclusive(this[21], &SRWLock);
  v4 = SRWLock;
  *((_DWORD *)this + 82) = a2;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
