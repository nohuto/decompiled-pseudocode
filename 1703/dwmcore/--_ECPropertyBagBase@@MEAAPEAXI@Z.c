/*
 * XREFs of ??_ECPropertyBagBase@@MEAAPEAXI@Z @ 0x180170820
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPropertyBagBase@@MEAA@XZ @ 0x1800315A0 (--1CPropertyBagBase@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CPropertyBagBase *__fastcall CPropertyBagBase::`vector deleting destructor'(CPropertyBagBase *this, char a2)
{
  CPropertyBagBase::~CPropertyBagBase(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
