/*
 * XREFs of ??1CWin32kLocks@@QEAA@XZ @ 0x1C001A854
 * Callers:
 *     DxgkPresent @ 0x1C00C8F20 (DxgkPresent.c)
 *     DxgkSubmitPresentBltToHwQueue @ 0x1C01A5B30 (DxgkSubmitPresentBltToHwQueue.c)
 * Callees:
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C001A878 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ?vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ @ 0x1C001AF24 (-vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ.c)
 */

void __fastcall CWin32kLocks::~CWin32kLocks(CWin32kLocks *this)
{
  CWin32kLocks::Unlock(this);
  DXGSTABLEVISRGNANDSPRITE::vUnlock((CWin32kLocks *)((char *)this + 32));
}
