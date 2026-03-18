/*
 * XREFs of ??_GCCursorVisual@@QEAAPEAXI@Z @ 0x1801278B0
 * Callers:
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x1800AA880 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800AA8B8 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801274D8 (--1CComposition@@MEAA@XZ.c)
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180127964 (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x180128F28 (-RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ?Create@CCursorVisual@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18013BCA4 (-Create@CCursorVisual@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??$ReleaseInterface@V?$CWeakReference@VCVisual@@@@@@YAXAEAPEAV?$CWeakReference@VCVisual@@@@@Z @ 0x1800BE68C (--$ReleaseInterface@V-$CWeakReference@VCVisual@@@@@@YAXAEAPEAV-$CWeakReference@VCVisual@@@@@Z.c)
 *     ?Restore@CCursorVisual@@QEAAXXZ @ 0x18013BD68 (-Restore@CCursorVisual@@QEAAXXZ.c)
 */

CWeakReferenceBase **__fastcall CCursorVisual::`scalar deleting destructor'(CWeakReferenceBase **this)
{
  if ( *((_DWORD *)this + 7) )
    CCursorVisual::Restore((CCursorVisual *)this);
  ReleaseInterface<CWeakReference<CVisual>>(this + 1);
  WPF::ProcessHeapImpl::Free(this);
  return this;
}
