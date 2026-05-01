/*
 * XREFs of ?get_CanHandleCloseRequest@ViewWrapperBase@@UEAAJPEAE@Z @ 0x180116210
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockShared@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800F187C (-AcquireLockShared@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_poli.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::get_CanHandleCloseRequest(RTL_SRWLOCK **this, unsigned __int8 *a2)
{
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  ViewEventDispatcher::AcquireLockShared(this[18], &SRWLock);
  *a2 = (*(__int64 (__fastcall **)(PVOID, RTL_SRWLOCK *))(*(_QWORD *)this[18][56].Ptr + 120LL))(
          this[18][56].Ptr,
          this[20]);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
