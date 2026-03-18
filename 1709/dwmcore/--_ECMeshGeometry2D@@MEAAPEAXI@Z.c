/*
 * XREFs of ??_ECMeshGeometry2D@@MEAAPEAXI@Z @ 0x1801720E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CMeshGeometry2D@@MEAA@XZ @ 0x1801720AC (--1CMeshGeometry2D@@MEAA@XZ.c)
 */

CMeshGeometry2D *__fastcall CMeshGeometry2D::`vector deleting destructor'(CMeshGeometry2D *this, char a2)
{
  CMeshGeometry2D::~CMeshGeometry2D(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
