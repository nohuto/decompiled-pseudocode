/*
 * XREFs of ??_ECManipulation@@UEAAPEAXI@Z @ 0x180170340
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CManipulation@@UEAA@XZ @ 0x1801702B8 (--1CManipulation@@UEAA@XZ.c)
 */

CManipulation *__fastcall CManipulation::`vector deleting destructor'(CManipulation *this, char a2)
{
  CManipulation::~CManipulation(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
