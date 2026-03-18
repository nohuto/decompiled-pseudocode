/*
 * XREFs of ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800D9F60
 * Callers:
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x180034830 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x180034868 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x1800D9DD8 (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Create@CCursorVisualReference@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x1800D9ED8 (-Create@CCursorVisualReference@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801497E4 (--1CComposition@@MEAA@XZ.c)
 *     ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18014AABC (-RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@V?$CWeakReference@VCVisual@@@@@@YAXAEAPEAV?$CWeakReference@VCVisual@@@@@Z @ 0x180034E00 (--$ReleaseInterface@V-$CWeakReference@VCVisual@@@@@@YAXAEAPEAV-$CWeakReference@VCVisual@@@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     ?Restore@CCursorVisualReference@@QEAAXXZ @ 0x18015E0D4 (-Restore@CCursorVisualReference@@QEAAXXZ.c)
 */

CWeakReferenceBase **__fastcall CCursorVisualReference::`scalar deleting destructor'(CWeakReferenceBase **this)
{
  if ( *((_DWORD *)this + 7) )
    CCursorVisualReference::Restore((CCursorVisualReference *)this);
  ReleaseInterface<CWeakReference<CVisual>>(this + 1);
  operator delete(this, 0x20uLL);
  return this;
}
