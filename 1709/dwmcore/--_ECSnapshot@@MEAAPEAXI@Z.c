/*
 * XREFs of ??_ECSnapshot@@MEAAPEAXI@Z @ 0x180175DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CSnapshot@@MEAA@XZ @ 0x180175D1C (--1CSnapshot@@MEAA@XZ.c)
 */

CSnapshot *__fastcall CSnapshot::`vector deleting destructor'(CSnapshot *this, char a2)
{
  CSnapshot::~CSnapshot(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
