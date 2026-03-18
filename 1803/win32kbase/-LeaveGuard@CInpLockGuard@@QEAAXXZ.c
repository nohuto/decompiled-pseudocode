/*
 * XREFs of ?LeaveGuard@CInpLockGuard@@QEAAXXZ @ 0x1C01249F0
 * Callers:
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C011E9A0 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 *     ?LeaveGuardOnThreadTermination@CInpLockGuard@@QEAAXXZ @ 0x1C0124A70 (-LeaveGuardOnThreadTermination@CInpLockGuard@@QEAAXXZ.c)
 * Callees:
 *     ?isOwned@CInpLockGuard@@QEAAHXZ @ 0x1C009F274 (-isOwned@CInpLockGuard@@QEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInpLockGuard::LeaveGuard(CInpLockGuard *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  LONG v4; // r8d

  if ( !(unsigned int)CInpLockGuard::isOwned((PERESOURCE *)this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
  if ( *((_DWORD *)this + 10) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
  if ( *((struct _KTHREAD **)this + 3) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
  if ( glMitInGuard <= 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
  --glMitInGuard;
  v4 = *((_DWORD *)this + 4);
  if ( v4 )
  {
    KeReleaseSemaphore(*((PRKSEMAPHORE *)this + 1), 0, v4, 0);
    *((_DWORD *)this + 4) = 0;
  }
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 3) = 0LL;
}
