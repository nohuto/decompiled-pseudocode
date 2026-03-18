/*
 * XREFs of ??_G?$LocalMILObject@VCMILBrushSolid@@@@UEAAPEAXI@Z @ 0x18014AB40
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

_QWORD *__fastcall LocalMILObject<CMILBrushSolid>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  a1[3] = &CMILBrushSolid::`vftable'{for `CMILBrush'};
  a1[6] = &CMILBrushSolid::`vftable'{for `IMILBrushSolid'};
  *a1 = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(a1);
  return a1;
}
