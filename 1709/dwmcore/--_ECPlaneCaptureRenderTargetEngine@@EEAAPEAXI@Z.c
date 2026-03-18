/*
 * XREFs of ??_ECPlaneCaptureRenderTargetEngine@@EEAAPEAXI@Z @ 0x180146D60
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CPlaneCaptureRenderTargetEngine@@EEAA@XZ @ 0x1801461A0 (--1CPlaneCaptureRenderTargetEngine@@EEAA@XZ.c)
 */

CPlaneCaptureRenderTargetEngine *__fastcall CPlaneCaptureRenderTargetEngine::`vector deleting destructor'(
        CPlaneCaptureRenderTargetEngine *this,
        char a2)
{
  CPlaneCaptureRenderTargetEngine::~CPlaneCaptureRenderTargetEngine(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
