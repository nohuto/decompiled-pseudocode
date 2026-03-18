/*
 * XREFs of ??_GCTransformGroup@@MEAAPEAXI@Z @ 0x1800B43C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CTransformGroup@@MEAA@XZ @ 0x1800B46D4 (--1CTransformGroup@@MEAA@XZ.c)
 */

CTransformGroup *__fastcall CTransformGroup::`scalar deleting destructor'(CTransformGroup *this, char a2)
{
  CTransformGroup::~CTransformGroup(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
