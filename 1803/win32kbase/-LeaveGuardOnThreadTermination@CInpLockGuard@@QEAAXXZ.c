/*
 * XREFs of ?LeaveGuardOnThreadTermination@CInpLockGuard@@QEAAXXZ @ 0x1C0124A70
 * Callers:
 *     UserDeactivateMITInputProcessing @ 0x1C0130F14 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     ?isOwned@CInpLockGuard@@QEAAHXZ @ 0x1C009F274 (-isOwned@CInpLockGuard@@QEAAHXZ.c)
 *     ?LeaveGuard@CInpLockGuard@@QEAAXXZ @ 0x1C01249F0 (-LeaveGuard@CInpLockGuard@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInpLockGuard::LeaveGuardOnThreadTermination(PERESOURCE *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( (unsigned int)CInpLockGuard::isOwned(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
  ExEnterCriticalRegionAndAcquireResourceShared(*this);
  if ( *((_DWORD *)this + 10) && KeGetCurrentThread() == (struct _KTHREAD *)this[3] )
    CInpLockGuard::LeaveGuard((CInpLockGuard *)this);
  ExReleaseResourceAndLeaveCriticalRegion(*this);
}
