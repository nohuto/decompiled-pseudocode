/*
 * XREFs of ??_ECManipulation@@UEAAPEAXI@Z @ 0x180167B70
 * Callers:
 *     ??_ECManipulation@@W7EAAPEAXI@Z @ 0x1800D5E80 (--_ECManipulation@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CManipulation@@UEAA@XZ @ 0x180167AD8 (--1CManipulation@@UEAA@XZ.c)
 */

CManipulation *__fastcall CManipulation::`vector deleting destructor'(CManipulation *this, char a2)
{
  CManipulation::~CManipulation(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
