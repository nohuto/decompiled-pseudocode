/*
 * XREFs of ??1CWin32kLocks@@QEAA@XZ @ 0x1C0170568
 * Callers:
 *     DxgkPresent @ 0x1C00BD0B0 (DxgkPresent.c)
 * Callees:
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C0170384 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ?vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ @ 0x1C01708BC (-vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ.c)
 */

void __fastcall CWin32kLocks::~CWin32kLocks(CWin32kLocks *this)
{
  CWin32kLocks::Unlock(this);
  DXGSTABLEVISRGNANDSPRITE::vUnlock((CWin32kLocks *)((char *)this + 32));
}
