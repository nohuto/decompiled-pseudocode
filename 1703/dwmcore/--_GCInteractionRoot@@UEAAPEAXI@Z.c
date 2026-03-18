/*
 * XREFs of ??_GCInteractionRoot@@UEAAPEAXI@Z @ 0x1801925EC
 * Callers:
 *     ??_ECInteractionRoot@@W7EAAPEAXI@Z @ 0x1800D5EF0 (--_ECInteractionRoot@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180005BBC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CInteractionProcessor@@QEAA@XZ @ 0x1800B2968 (--1CInteractionProcessor@@QEAA@XZ.c)
 */

CInteractionRoot *__fastcall CInteractionRoot::`scalar deleting destructor'(CInteractionRoot *this, char a2)
{
  CInteractionProcessor::~CInteractionProcessor((CInteractionRoot *)((char *)this + 32));
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 3);
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
