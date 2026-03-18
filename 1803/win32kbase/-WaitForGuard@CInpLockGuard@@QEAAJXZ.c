/*
 * XREFs of ?WaitForGuard@CInpLockGuard@@QEAAJXZ @ 0x1C0124E20
 * Callers:
 *     ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C0024C50 (-UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockShared@CInpLockGuard@@QEAAXXZ @ 0x1C0124AF0 (-LockShared@CInpLockGuard@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CInpLockGuard::WaitForGuard(PVOID *this)
{
  return KeWaitForSingleObject(this[1], UserRequest, 0, 0, 0LL);
}
