/*
 * XREFs of ??_ECGeometry2DGroup@@MEAAPEAXI@Z @ 0x180153E70
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CGeometry2DGroup@@MEAA@XZ @ 0x180178B14 (--1CGeometry2DGroup@@MEAA@XZ.c)
 */

CGeometry2DGroup *__fastcall CGeometry2DGroup::`vector deleting destructor'(CGeometry2DGroup *this, char a2)
{
  CGeometry2DGroup::~CGeometry2DGroup(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
