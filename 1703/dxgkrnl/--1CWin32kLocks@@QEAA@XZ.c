/*
 * XREFs of ??1CWin32kLocks@@QEAA@XZ @ 0x1C016CE44
 * Callers:
 *     DxgkPresent @ 0x1C008FA90 (DxgkPresent.c)
 * Callees:
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C016CC60 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 */

void __fastcall CWin32kLocks::~CWin32kLocks(CWin32kLocks *this)
{
  CWin32kLocks::Unlock(this);
  DXGSTABLEVISRGNANDSPRITE::vUnlock((CWin32kLocks *)((char *)this + 32));
}
