/*
 * XREFs of ??_GCRegionWrapper@@UEAAPEAXI@Z @ 0x1801C89F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

void **__fastcall CRegionWrapper::`scalar deleting destructor'(void **this, char a2)
{
  FastRegion::CRegion::FreeMemory(this + 2);
  *this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
