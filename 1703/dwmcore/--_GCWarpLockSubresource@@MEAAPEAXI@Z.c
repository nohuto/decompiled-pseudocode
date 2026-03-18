/*
 * XREFs of ??_GCWarpLockSubresource@@MEAAPEAXI@Z @ 0x180026A20
 * Callers:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 * Callees:
 *     ??1CWarpLockSubresource@@MEAA@XZ @ 0x180026B3C (--1CWarpLockSubresource@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CWarpLockSubresource *__fastcall CWarpLockSubresource::`scalar deleting destructor'(
        CWarpLockSubresource *this,
        char a2)
{
  CWarpLockSubresource::~CWarpLockSubresource(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
