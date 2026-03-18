/*
 * XREFs of ??_GCIndependentRefreshRateScheduler@@UEAAPEAXI@Z @ 0x18013C540
 * Callers:
 *     ?Create@CIndependentRefreshRateScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHost@@PEAPEAVICompositorScheduler@@@Z @ 0x18013CBC4 (-Create@CIndependentRefreshRateScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@PEAVCoRender.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CIndependentRefreshRateScheduler@@UEAA@XZ @ 0x18013C224 (--1CIndependentRefreshRateScheduler@@UEAA@XZ.c)
 */

CIndependentRefreshRateScheduler *__fastcall CIndependentRefreshRateScheduler::`scalar deleting destructor'(
        CIndependentRefreshRateScheduler *this,
        char a2)
{
  CIndependentRefreshRateScheduler::~CIndependentRefreshRateScheduler(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
