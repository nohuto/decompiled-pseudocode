/*
 * XREFs of ??_ECTransform3DGroup@@MEAAPEAXI@Z @ 0x180146DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CTransform3DGroup@@MEAA@XZ @ 0x180182EAC (--1CTransform3DGroup@@MEAA@XZ.c)
 */

CTransform3DGroup *__fastcall CTransform3DGroup::`vector deleting destructor'(CTransform3DGroup *this, char a2)
{
  CTransform3DGroup::~CTransform3DGroup(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
