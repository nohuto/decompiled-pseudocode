/*
 * XREFs of ?LeaveGuard@CInpLockGuard@@QEAAXXZ @ 0x1C012A0F0
 * Callers:
 *     ?LeaveGuardOnThreadTermination@CInpLockGuard@@QEAAXXZ @ 0x1C0007640 (-LeaveGuardOnThreadTermination@CInpLockGuard@@QEAAXXZ.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C01283B8 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 * Callees:
 *     <none>
 */

void __fastcall CInpLockGuard::LeaveGuard(CInpLockGuard *this)
{
  LONG v2; // r8d

  --glMitInGuard;
  v2 = *((_DWORD *)this + 4);
  if ( v2 )
  {
    KeReleaseSemaphore(*((PRKSEMAPHORE *)this + 1), 0, v2, 0);
    *((_DWORD *)this + 4) = 0;
  }
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 3) = 0LL;
}
