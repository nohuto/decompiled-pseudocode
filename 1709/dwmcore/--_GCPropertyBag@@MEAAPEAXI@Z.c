/*
 * XREFs of ??_GCPropertyBag@@MEAAPEAXI@Z @ 0x1800A58D0
 * Callers:
 *     ?Release@CResource@@UEAAKXZ @ 0x1800A9F20 (-Release@CResource@@UEAAKXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CPropertyBag@@MEAA@XZ @ 0x1800A69CC (--1CPropertyBag@@MEAA@XZ.c)
 */

CPropertyBag *__fastcall CPropertyBag::`scalar deleting destructor'(CPropertyBag *this, char a2)
{
  CPropertyBag::~CPropertyBag(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
