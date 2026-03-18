/*
 * XREFs of ??_GCCursorVisual@@QEAAPEAXI@Z @ 0x1800CF27C
 * Callers:
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x18005B5EC (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x18005B624 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x1800CF090 (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Create@CCursorVisual@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x1800CF1F4 (-Create@CCursorVisual@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x18013EE78 (--1CComposition@@MEAA@XZ.c)
 *     ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18013FADC (-RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??$ReleaseInterface@V?$CWeakReference@VCVisual@@@@@@YAXAEAPEAV?$CWeakReference@VCVisual@@@@@Z @ 0x1800C1D18 (--$ReleaseInterface@V-$CWeakReference@VCVisual@@@@@@YAXAEAPEAV-$CWeakReference@VCVisual@@@@@Z.c)
 *     ?Restore@CCursorVisual@@QEAAXXZ @ 0x18014A948 (-Restore@CCursorVisual@@QEAAXXZ.c)
 */

CWeakReferenceBase **__fastcall CCursorVisual::`scalar deleting destructor'(CWeakReferenceBase **this)
{
  if ( *((_DWORD *)this + 7) )
    CCursorVisual::Restore((CCursorVisual *)this);
  ReleaseInterface<CWeakReference<CVisual>>(this + 1);
  WPF::ProcessHeapImpl::Free(this);
  return this;
}
