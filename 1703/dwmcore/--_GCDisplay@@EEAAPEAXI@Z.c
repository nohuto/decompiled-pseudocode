/*
 * XREFs of ??_GCDisplay@@EEAAPEAXI@Z @ 0x1800B77F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x1800B5384 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     ?ReleaseHwRenderTarget@CDisplay@@QEAAXXZ @ 0x1800B7934 (-ReleaseHwRenderTarget@CDisplay@@QEAAXXZ.c)
 *     ?ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ @ 0x1800B7FB0 (-ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ.c)
 */

CDisplay *__fastcall CDisplay::`scalar deleting destructor'(CDisplay *this, char a2)
{
  *(_QWORD *)this = &CDisplay::`vftable';
  CDisplay::ReleaseHwRenderTarget(this);
  CDisplay::ReleaseDDAHwRenderTarget(this);
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 4));
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 5));
  ReleaseInterfaceNoNULL<CPolygon>(*((_QWORD *)this + 3));
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
