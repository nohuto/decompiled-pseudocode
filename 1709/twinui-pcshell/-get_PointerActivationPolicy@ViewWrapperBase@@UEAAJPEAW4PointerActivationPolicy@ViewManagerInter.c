/*
 * XREFs of ?get_PointerActivationPolicy@ViewWrapperBase@@UEAAJPEAW4PointerActivationPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180140AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockShared@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18011C328 (-AcquireLockShared@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_poli.c)
 */

__int64 __fastcall ViewWrapperBase::get_PointerActivationPolicy(
        RTL_SRWLOCK **this,
        enum Windows::Internal::Shell::ViewManagerInterop::PointerActivationPolicy *a2)
{
  RTL_SRWLOCK *v4; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  ViewEventDispatcher::AcquireLockShared(this[21], &SRWLock);
  v4 = SRWLock;
  *(_DWORD *)a2 = *((_DWORD *)this + 124);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return 0LL;
}
