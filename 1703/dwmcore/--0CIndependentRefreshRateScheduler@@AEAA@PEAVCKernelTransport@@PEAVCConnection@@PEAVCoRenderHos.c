/*
 * XREFs of ??0CIndependentRefreshRateScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHost@@@Z @ 0x18013C104
 * Callers:
 *     ?Create@CIndependentRefreshRateScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHost@@PEAPEAVICompositorScheduler@@@Z @ 0x18013CBC4 (-Create@CIndependentRefreshRateScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@PEAVCoRender.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800B3474 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0CAnimationTracking@@QEAA@XZ @ 0x1800BA6FC (--0CAnimationTracking@@QEAA@XZ.c)
 *     ??0CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x1800C3058 (--0CTelemetryTouchLatencyAnalysis@@QEAA@XZ.c)
 *     ??0CDebugFrameCounter@@QEAA@XZ @ 0x1800C7AC8 (--0CDebugFrameCounter@@QEAA@XZ.c)
 *     ??0CTelemetryTracking@@QEAA@XZ @ 0x1800C99B4 (--0CTelemetryTracking@@QEAA@XZ.c)
 */

CIndependentRefreshRateScheduler *__fastcall CIndependentRefreshRateScheduler::CIndependentRefreshRateScheduler(
        CIndependentRefreshRateScheduler *this,
        struct CKernelTransport *a2,
        struct CConnection *a3,
        struct CoRenderHost *a4)
{
  DWORD CurrentThreadId; // eax
  __int64 v8; // rcx
  CIndependentRefreshRateScheduler *result; // rax

  *((_QWORD *)this + 15) = a4;
  *(_QWORD *)this = &CIndependentRefreshRateScheduler::`vftable';
  *((_QWORD *)this + 17) = 0x100000000LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *(_QWORD *)((char *)this + 172) = 0x100000000LL;
  `vector constructor iterator'(
    (CIndependentRefreshRateScheduler *)((char *)this + 216),
    1328LL,
    16LL,
    (void (__fastcall *)(CInputSinkStruct::InputQueueInfo *))CFrameInfo::CFrameInfo);
  CAnimationTracking::CAnimationTracking((CIndependentRefreshRateScheduler *)((char *)this + 21832));
  CTelemetryTouchLatencyAnalysis::CTelemetryTouchLatencyAnalysis((CIndependentRefreshRateScheduler *)((char *)this + 22408));
  CTelemetryTracking::CTelemetryTracking((CIndependentRefreshRateScheduler *)((char *)this + 24728));
  CDebugFrameCounter::CDebugFrameCounter((CIndependentRefreshRateScheduler *)((char *)this + 25480));
  CurrentThreadId = GetCurrentThreadId();
  *((_QWORD *)this + 13) = a2;
  *((_DWORD *)this + 7544) = CurrentThreadId;
  v8 = 1328LL * *((unsigned int *)this + 5366);
  *((_QWORD *)this + 14) = a3;
  *((_QWORD *)this + 2685) = (char *)this + v8 + 216;
  *((_QWORD *)this + 2686) = (char *)this + 20136;
  result = this;
  *((_DWORD *)this + 5367) = 15;
  *((_DWORD *)this + 5368) = -1;
  *((_DWORD *)this + 5369) = -1;
  *((_BYTE *)this + 21828) = 1;
  *((_DWORD *)this + 5455) = -1;
  return result;
}
