/*
 * XREFs of ??_GCPlaneCaptureRenderTarget@@EEAAPEAXI@Z @ 0x180146D10
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800A9788 (--1CResource@@MEAA@XZ.c)
 *     ??1CPlaneCaptureRenderTargetEngine@@EEAA@XZ @ 0x1801461A0 (--1CPlaneCaptureRenderTargetEngine@@EEAA@XZ.c)
 */

CPlaneCaptureRenderTarget *__fastcall CPlaneCaptureRenderTarget::`scalar deleting destructor'(
        CPlaneCaptureRenderTarget *this,
        char a2)
{
  *(_QWORD *)this = &CPlaneCaptureRenderTarget::`vftable';
  CPlaneCaptureRenderTargetEngine::~CPlaneCaptureRenderTargetEngine((CPlaneCaptureRenderTarget *)((char *)this + 56));
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
