/*
 * XREFs of ??0CMmcssTask@@QEAA@XZ @ 0x1800B66E4
 * Callers:
 *     ??0CManipulationManager@@AEAA@PEAVCComposition@@@Z @ 0x18004E854 (--0CManipulationManager@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@@Z @ 0x180064E04 (--0CComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebu.c)
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x1800B5AB8 (-Initialize@CInputManager@@IEAAJXZ.c)
 *     ??0CSurfaceManager@@IEAA@PEAVCComposition@@@Z @ 0x1800B5ED8 (--0CSurfaceManager@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Create@CDWMInputThread@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180191D94 (-Create@CDWMInputThread@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CMmcssTask *__fastcall CMmcssTask::CMmcssTask(CMmcssTask *this)
{
  InitializeCriticalSection((LPCRITICAL_SECTION)this);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  return this;
}
