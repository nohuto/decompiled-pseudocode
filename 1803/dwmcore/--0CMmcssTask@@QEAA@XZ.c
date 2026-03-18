/*
 * XREFs of ??0CMmcssTask@@QEAA@XZ @ 0x18001E8E4
 * Callers:
 *     ??0CMit@@AEAA@PEAVCComposition@@@Z @ 0x18001DE34 (--0CMit@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CSurfaceManager@@IEAA@PEAVCComposition@@@Z @ 0x18001FC28 (--0CSurfaceManager@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CManipulationManager@@AEAA@PEAVCComposition@@@Z @ 0x18002614C (--0CManipulationManager@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@@Z @ 0x1800340EC (--0CComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebu.c)
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
