/*
 * XREFs of ?SetActivationTimeoutPolicy@ViewWrapperBase@@UEAAJW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180116AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800F185C (-AcquireLockExclusive@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     ?CommitActivationTimeoutPolicy@ViewWrapperBase@@AEBAXXZ @ 0x180116FB8 (-CommitActivationTimeoutPolicy@ViewWrapperBase@@AEBAXXZ.c)
 */

__int64 __fastcall ViewWrapperBase::SetActivationTimeoutPolicy(__int64 a1, int a2)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  ViewEventDispatcher::AcquireLockExclusive(*(RTL_SRWLOCK **)(a1 + 128), &SRWLock);
  if ( a2 != *(_DWORD *)(a1 + 296) )
  {
    *(_DWORD *)(a1 + 296) = a2;
    ViewWrapperBase::CommitActivationTimeoutPolicy((ViewWrapperBase *)(a1 - 24));
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}
