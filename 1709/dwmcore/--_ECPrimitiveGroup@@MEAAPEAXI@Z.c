/*
 * XREFs of ??_ECPrimitiveGroup@@MEAAPEAXI@Z @ 0x180025EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x180028288 (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CPrimitiveGroup *__fastcall CPrimitiveGroup::`vector deleting destructor'(CPrimitiveGroup *this, char a2)
{
  CPrimitiveGroup::~CPrimitiveGroup(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
