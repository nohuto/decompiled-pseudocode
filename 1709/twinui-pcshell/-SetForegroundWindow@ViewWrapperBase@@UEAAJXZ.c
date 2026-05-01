/*
 * XREFs of ?SetForegroundWindow@ViewWrapperBase@@UEAAJXZ @ 0x18013F420
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockShared@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18011C328 (-AcquireLockShared@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_poli.c)
 */

__int64 __fastcall ViewWrapperBase::SetForegroundWindow(RTL_SRWLOCK **this)
{
  HWND v2; // rbx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  ViewEventDispatcher::AcquireLockShared(this[22], &SRWLock);
  v2 = (HWND)this[33];
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return !SetForegroundWindow(v2) ? 0x80004005 : 0;
}
