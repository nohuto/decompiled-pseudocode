/*
 * XREFs of ??_ECMILFactory@@MEAAPEAXI@Z @ 0x1801CE950
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CMILFactory@@MEAA@XZ @ 0x1801CE908 (--1CMILFactory@@MEAA@XZ.c)
 */

CMILFactory *__fastcall CMILFactory::`vector deleting destructor'(CMILFactory *this, char a2)
{
  CMILFactory::~CMILFactory(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
