/*
 * XREFs of ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00D5190
 * Callers:
 *     ?CancelActivePointers@CTouchProcessor@@QEAAXXZ @ 0x1C00A10E0 (-CancelActivePointers@CTouchProcessor@@QEAAXXZ.c)
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C01223C0 (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C01251AC (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0126980 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CInpLockGuard::UnLock(CInpLockGuard *this)
{
  *((_QWORD *)this + 4) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)this);
}
