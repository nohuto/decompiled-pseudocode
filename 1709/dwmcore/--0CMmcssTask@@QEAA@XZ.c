/*
 * XREFs of ??0CMmcssTask@@QEAA@XZ @ 0x180130124
 * Callers:
 *     ??0CComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@@Z @ 0x1801271B8 (--0CComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebu.c)
 *     ??0CSurfaceManager@@IEAA@PEAVCComposition@@@Z @ 0x1801310EC (--0CSurfaceManager@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CManipulationManager@@AEAA@PEAVCComposition@@@Z @ 0x1801954E4 (--0CManipulationManager@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CMit@@AEAA@PEAVCComposition@@@Z @ 0x1801A036C (--0CMit@@AEAA@PEAVCComposition@@@Z.c)
 *     ?Create@CDWMInputThread@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1801A070C (-Create@CDWMInputThread@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
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
