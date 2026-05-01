/*
 * XREFs of ?get_ClientWindow@ViewWrapperBase@@UEAAJPEAI@Z @ 0x180141160
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockShared@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18011C328 (-AcquireLockShared@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_poli.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::get_ClientWindow(RTL_SRWLOCK **this, unsigned int *a2)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  ViewEventDispatcher::AcquireLockShared(this[18], &SRWLock);
  v4 = ((__int64 (__fastcall *)(char *))(*(this - 3))[78].Ptr)((char *)this - 24);
  *a2 = v4;
  v5 = v4 == 0 ? 0x80070490 : 0;
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v5;
}
