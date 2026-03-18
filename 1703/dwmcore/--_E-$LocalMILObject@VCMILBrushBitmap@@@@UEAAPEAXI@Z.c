/*
 * XREFs of ??_E?$LocalMILObject@VCMILBrushBitmap@@@@UEAAPEAXI@Z @ 0x1800CFA10
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CMILBrushBitmap@@MEAA@XZ @ 0x180054204 (--1CMILBrushBitmap@@MEAA@XZ.c)
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
