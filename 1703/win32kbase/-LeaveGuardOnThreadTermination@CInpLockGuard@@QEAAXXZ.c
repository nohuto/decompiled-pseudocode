/*
 * XREFs of ?LeaveGuardOnThreadTermination@CInpLockGuard@@QEAAXXZ @ 0x1C006F7F0
 * Callers:
 *     UserDeactivateMITInputProcessing @ 0x1C008BCC0 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     ?LeaveGuard@CInpLockGuard@@QEAAXXZ @ 0x1C012A830 (-LeaveGuard@CInpLockGuard@@QEAAXXZ.c)
 */

void __fastcall CInpLockGuard::LeaveGuardOnThreadTermination(PERESOURCE *this)
{
  ExEnterCriticalRegionAndAcquireResourceShared(*this);
  if ( *((_DWORD *)this + 10) && KeGetCurrentThread() == (struct _KTHREAD *)this[3] )
    CInpLockGuard::LeaveGuard((CInpLockGuard *)this);
  ExReleaseResourceAndLeaveCriticalRegion(*this);
}
