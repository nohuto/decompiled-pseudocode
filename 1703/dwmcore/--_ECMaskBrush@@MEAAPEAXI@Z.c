/*
 * XREFs of ??_ECMaskBrush@@MEAAPEAXI@Z @ 0x180039380
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMaskBrush@@MEAA@XZ @ 0x180039A54 (--1CMaskBrush@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CMaskBrush *__fastcall CMaskBrush::`vector deleting destructor'(CMaskBrush *this, char a2)
{
  CMaskBrush::~CMaskBrush(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
