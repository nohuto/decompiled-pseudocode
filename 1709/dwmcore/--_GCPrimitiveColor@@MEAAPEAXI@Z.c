/*
 * XREFs of ??_GCPrimitiveColor@@MEAAPEAXI@Z @ 0x1800B661C
 * Callers:
 *     ??_ECPrimitiveColor@@O7EAAPEAXI@Z @ 0x1800C5FA0 (--_ECPrimitiveColor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CPrimitiveColor@@MEAA@XZ @ 0x1800B65D8 (--1CPrimitiveColor@@MEAA@XZ.c)
 */

CPrimitiveColor *__fastcall CPrimitiveColor::`scalar deleting destructor'(CPrimitiveColor *this, char a2)
{
  CPrimitiveColor::~CPrimitiveColor(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
