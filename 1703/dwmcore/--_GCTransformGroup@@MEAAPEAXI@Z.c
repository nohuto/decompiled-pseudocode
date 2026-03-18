/*
 * XREFs of ??_GCTransformGroup@@MEAAPEAXI@Z @ 0x1800041D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTransformGroup@@MEAA@XZ @ 0x180004304 (--1CTransformGroup@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CTransformGroup *__fastcall CTransformGroup::`scalar deleting destructor'(CTransformGroup *this, char a2)
{
  CTransformGroup::~CTransformGroup(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
