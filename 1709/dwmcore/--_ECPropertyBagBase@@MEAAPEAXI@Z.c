/*
 * XREFs of ??_ECPropertyBagBase@@MEAAPEAXI@Z @ 0x180175360
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CPropertyBagBase@@MEAA@XZ @ 0x1800A55A0 (--1CPropertyBagBase@@MEAA@XZ.c)
 */

CPropertyBagBase *__fastcall CPropertyBagBase::`vector deleting destructor'(CPropertyBagBase *this, char a2)
{
  CPropertyBagBase::~CPropertyBagBase(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
