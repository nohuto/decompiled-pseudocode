/*
 * XREFs of ??_GCDisplay@@EEAAPEAXI@Z @ 0x1800778E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x180074928 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     ?ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ @ 0x180077F00 (-ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ.c)
 *     ?ReleaseHwRenderTarget@CDisplay@@QEAAXXZ @ 0x18007805C (-ReleaseHwRenderTarget@CDisplay@@QEAAXXZ.c)
 */

CDisplay *__fastcall CDisplay::`scalar deleting destructor'(CDisplay *this, char a2)
{
  *(_QWORD *)this = &CDisplay::`vftable';
  CDisplay::ReleaseHwRenderTarget(this);
  CDisplay::ReleaseDDAHwRenderTarget(this);
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 4));
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 5));
  ReleaseInterfaceNoNULL<CPolygon>(*((_QWORD *)this + 3));
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
