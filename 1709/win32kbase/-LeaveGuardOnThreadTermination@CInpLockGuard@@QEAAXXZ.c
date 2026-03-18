/*
 * XREFs of ?LeaveGuardOnThreadTermination@CInpLockGuard@@QEAAXXZ @ 0x1C0007640
 * Callers:
 *     UserDeactivateMITInputProcessing @ 0x1C0091E24 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     ?LeaveGuard@CInpLockGuard@@QEAAXXZ @ 0x1C012A0F0 (-LeaveGuard@CInpLockGuard@@QEAAXXZ.c)
 */

void __fastcall CInpLockGuard::LeaveGuardOnThreadTermination(PERESOURCE *this)
{
  ExEnterCriticalRegionAndAcquireResourceShared(*this);
  if ( *((_DWORD *)this + 10) && KeGetCurrentThread() == (struct _KTHREAD *)this[3] )
    CInpLockGuard::LeaveGuard((CInpLockGuard *)this);
  ExReleaseResourceAndLeaveCriticalRegion(*this);
}
