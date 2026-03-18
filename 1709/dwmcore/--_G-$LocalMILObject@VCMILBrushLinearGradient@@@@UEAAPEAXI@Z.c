/*
 * XREFs of ??_G?$LocalMILObject@VCMILBrushLinearGradient@@@@UEAAPEAXI@Z @ 0x1801CEC90
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CMILBrushLinearGradient@@MEAA@XZ @ 0x1801CEC44 (--1CMILBrushLinearGradient@@MEAA@XZ.c)
 */

CMILBrushLinearGradient *__fastcall LocalMILObject<CMILBrushLinearGradient>::`scalar deleting destructor'(
        CMILBrushLinearGradient *lpMem,
        char a2)
{
  CMILBrushLinearGradient::~CMILBrushLinearGradient(lpMem);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(lpMem);
  return lpMem;
}
