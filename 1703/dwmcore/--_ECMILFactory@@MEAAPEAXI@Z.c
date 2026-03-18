/*
 * XREFs of ??_ECMILFactory@@MEAAPEAXI@Z @ 0x1801B2700
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CMILFactory@@MEAA@XZ @ 0x1801B26B8 (--1CMILFactory@@MEAA@XZ.c)
 */

CMILFactory *__fastcall CMILFactory::`vector deleting destructor'(CMILFactory *this, char a2)
{
  CMILFactory::~CMILFactory(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
