/*
 * XREFs of ?put_VisibilityRevoked@ViewWrapperBase@@UEAAJE@Z @ 0x180140C40
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18011C2F8 (-AcquireLockExclusive@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ @ 0x180141F1C (-PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::put_VisibilityRevoked(RTL_SRWLOCK **this, char a2)
{
  unsigned int v4; // ebx
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  ViewEventDispatcher::AcquireLockExclusive(this[20], &SRWLock);
  if ( ((_BYTE)this[11] & 0x18) != 0 )
  {
    if ( a2 )
      *((_DWORD *)this + 22) &= ~0x20u;
    else
      *((_DWORD *)this + 22) |= 0x20u;
    ViewWrapperBase::PushDesiredNavigationLevelToDerivedClass((ViewWrapperBase *)(this - 2));
    v4 = 0;
  }
  else
  {
    v4 = -2147019873;
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return v4;
}
