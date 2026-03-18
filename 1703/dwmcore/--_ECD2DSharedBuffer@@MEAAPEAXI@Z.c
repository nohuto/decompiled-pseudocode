/*
 * XREFs of ??_ECD2DSharedBuffer@@MEAAPEAXI@Z @ 0x1800AEBE0
 * Callers:
 *     ?Release@CD2DSharedBuffer@@UEAAKXZ @ 0x1800AEC60 (-Release@CD2DSharedBuffer@@UEAAKXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800C45E8 (--$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z.c)
 */

CD2DSharedBuffer *__fastcall CD2DSharedBuffer::`vector deleting destructor'(CD2DSharedBuffer *this, char a2)
{
  _QWORD *v4; // rcx
  void *v5; // r8

  *(_QWORD *)this = &CD2DSharedBuffer::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DSharedBuffer::`vftable'{for `ID2D1PrivateCompositorBuffer'};
  v4 = (_QWORD *)((char *)this + 40);
  if ( *v4 )
  {
    ReleaseInterface<CCompositionSurfaceInfo>(v4);
  }
  else
  {
    v5 = (void *)*((_QWORD *)this + 3);
    if ( v5 )
      HeapFree(WPF::g_processHeap, 0, v5);
  }
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
    HeapFree(WPF::g_processHeap, 0, this);
  return this;
}
