/*
 * XREFs of ?BeginWinRtActivation@ViewWrapperBase@@UEAAJI@Z @ 0x180113370
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800F185C (-AcquireLockExclusive@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 */

__int64 __fastcall ViewWrapperBase::BeginWinRtActivation(RTL_SRWLOCK **this, int a2)
{
  RTL_SRWLOCK *v4; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  ViewEventDispatcher::AcquireLockExclusive(this[18], &SRWLock);
  v4 = SRWLock;
  *((_DWORD *)this + 76) = a2;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
