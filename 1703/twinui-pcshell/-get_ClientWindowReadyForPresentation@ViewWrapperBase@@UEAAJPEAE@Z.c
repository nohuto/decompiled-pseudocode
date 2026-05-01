/*
 * XREFs of ?get_ClientWindowReadyForPresentation@ViewWrapperBase@@UEAAJPEAE@Z @ 0x180116BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockShared@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800F187C (-AcquireLockShared@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_poli.c)
 */

__int64 __fastcall ViewWrapperBase::get_ClientWindowReadyForPresentation(RTL_SRWLOCK **this, bool *a2)
{
  bool v4; // al
  RTL_SRWLOCK *v5; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  ViewEventDispatcher::AcquireLockShared(this[15], &SRWLock);
  v4 = this[37] && !*((_DWORD *)this + 76);
  v5 = SRWLock;
  *a2 = v4;
  if ( v5 )
    ReleaseSRWLockShared(v5);
  return 0LL;
}
