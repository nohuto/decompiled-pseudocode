/*
 * XREFs of ??_GCWarpLockSubresource@@MEAAPEAXI@Z @ 0x18000AD10
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWarpLockSubresource@@MEAA@XZ @ 0x18000AE2C (--1CWarpLockSubresource@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
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
