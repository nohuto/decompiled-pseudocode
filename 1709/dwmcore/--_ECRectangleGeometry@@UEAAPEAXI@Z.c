/*
 * XREFs of ??_ECRectangleGeometry@@UEAAPEAXI@Z @ 0x1800586B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CGeometry@@MEAA@XZ @ 0x180096DC8 (--1CGeometry@@MEAA@XZ.c)
 */

CRectangleGeometry *__fastcall CRectangleGeometry::`vector deleting destructor'(CRectangleGeometry *this, char a2)
{
  CGeometry::~CGeometry(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
