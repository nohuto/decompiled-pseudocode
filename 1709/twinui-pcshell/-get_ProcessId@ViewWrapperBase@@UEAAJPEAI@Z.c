/*
 * XREFs of ?get_ProcessId@ViewWrapperBase@@UEAAJPEAI@Z @ 0x1801407C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockShared@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18011C328 (-AcquireLockShared@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_poli.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::get_ProcessId(RTL_SRWLOCK **this, unsigned int *a2)
{
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  ViewEventDispatcher::AcquireLockShared(this[21], &SRWLock);
  *a2 = ((__int64 (__fastcall *)(RTL_SRWLOCK **))(*this)[80].Ptr)(this);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
