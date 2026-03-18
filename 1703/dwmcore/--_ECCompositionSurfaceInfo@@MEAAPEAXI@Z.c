/*
 * XREFs of ??_ECCompositionSurfaceInfo@@MEAAPEAXI@Z @ 0x180076570
 * Callers:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CCompositionSurfaceInfo@@MEAA@XZ @ 0x180076F7C (--1CCompositionSurfaceInfo@@MEAA@XZ.c)
 */

CCompositionSurfaceInfo *__fastcall CCompositionSurfaceInfo::`vector deleting destructor'(
        CCompositionSurfaceInfo *this,
        char a2)
{
  CCompositionSurfaceInfo::~CCompositionSurfaceInfo(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
