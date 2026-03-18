/*
 * XREFs of ??0CDebugFrameCounter@@QEAA@XZ @ 0x1800C7AC8
 * Callers:
 *     ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHost@@@Z @ 0x180069120 (--0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHos.c)
 *     ??0CIndependentRefreshRateScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHost@@@Z @ 0x18013C104 (--0CIndependentRefreshRateScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHos.c)
 * Callees:
 *     <none>
 */

CDebugFrameCounter *__fastcall CDebugFrameCounter::CDebugFrameCounter(CDebugFrameCounter *this)
{
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *(_QWORD *)this = &CDebugFrameCounter::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 582) = &CMILRefCountBase::`vftable';
  *((_QWORD *)this + 582) = &CDisplayDebugFrameCounter::`vftable';
  *((_DWORD *)this + 1166) = 0;
  *((_DWORD *)this + 1041) = -1;
  *((_DWORD *)this + 1040) = -1;
  *((_DWORD *)this + 5) = -1;
  *((_DWORD *)this + 4) = -1;
  *((_DWORD *)this + 1039) = 1;
  *((_DWORD *)this + 1038) = 1;
  return this;
}
