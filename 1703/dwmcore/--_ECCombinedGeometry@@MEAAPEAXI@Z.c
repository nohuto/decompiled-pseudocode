/*
 * XREFs of ??_ECCombinedGeometry@@MEAAPEAXI@Z @ 0x180153D80
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CCombinedGeometry@@MEAA@XZ @ 0x18017B3DC (--1CCombinedGeometry@@MEAA@XZ.c)
 */

CCombinedGeometry *__fastcall CCombinedGeometry::`vector deleting destructor'(CCombinedGeometry *this, char a2)
{
  CCombinedGeometry::~CCombinedGeometry(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
