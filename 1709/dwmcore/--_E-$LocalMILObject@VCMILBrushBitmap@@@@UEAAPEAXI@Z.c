/*
 * XREFs of ??_E?$LocalMILObject@VCMILBrushBitmap@@@@UEAAPEAXI@Z @ 0x180176AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMILBrushBitmap@@MEAA@XZ @ 0x1800461D0 (--1CMILBrushBitmap@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CMILBrushBitmap *__fastcall LocalMILObject<CMILBrushBitmap>::`vector deleting destructor'(
        CMILBrushBitmap *lpMem,
        char a2)
{
  CMILBrushBitmap::~CMILBrushBitmap(lpMem);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(lpMem);
  return lpMem;
}
