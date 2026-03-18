/*
 * XREFs of ??_ECRectangleGeometry@@UEAAPEAXI@Z @ 0x180094B20
 * Callers:
 *     <none>
 * Callees:
 *     ??1CGeometry@@MEAA@XZ @ 0x180029940 (--1CGeometry@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

struct CResource **__fastcall CRectangleGeometry::`vector deleting destructor'(struct CResource **this, char a2)
{
  CGeometry::~CGeometry(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
