/*
 * XREFs of ??_GCManipulationContext@@UEAAPEAXI@Z @ 0x1801A10AC
 * Callers:
 *     ??_ECManipulationContext@@W7EAAPEAXI@Z @ 0x1800C67B0 (--_ECManipulationContext@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CManipulationContext@@UEAA@XZ @ 0x1801A0EC8 (--1CManipulationContext@@UEAA@XZ.c)
 */

CManipulationContext *__fastcall CManipulationContext::`scalar deleting destructor'(
        CManipulationContext *this,
        char a2)
{
  CManipulationContext::~CManipulationContext(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
