/*
 * XREFs of ??_ECPrimitiveGroup@@MEAAPEAXI@Z @ 0x18004C380
 * Callers:
 *     ?Release@CPrimitiveGroup@@UEAAKXZ @ 0x18004C950 (-Release@CPrimitiveGroup@@UEAAKXZ.c)
 * Callees:
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x18004CAD8 (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CPrimitiveGroup *__fastcall CPrimitiveGroup::`vector deleting destructor'(CPrimitiveGroup *this, char a2)
{
  CPrimitiveGroup::~CPrimitiveGroup(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
