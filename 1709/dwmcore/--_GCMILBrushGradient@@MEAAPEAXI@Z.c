/*
 * XREFs of ??_GCMILBrushGradient@@MEAAPEAXI@Z @ 0x1801CEEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CMILBrushGradient@@MEAA@XZ @ 0x1801CEE30 (--1CMILBrushGradient@@MEAA@XZ.c)
 */

CMILBrushGradient *__fastcall CMILBrushGradient::`scalar deleting destructor'(CMILBrushGradient *this, char a2)
{
  CMILBrushGradient::~CMILBrushGradient(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
