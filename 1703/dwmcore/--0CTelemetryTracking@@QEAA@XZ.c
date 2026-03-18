/*
 * XREFs of ??0CTelemetryTracking@@QEAA@XZ @ 0x1800C99B4
 * Callers:
 *     ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHost@@@Z @ 0x180069120 (--0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHos.c)
 *     ??0CIndependentRefreshRateScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHost@@@Z @ 0x18013C104 (--0CIndependentRefreshRateScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHos.c)
 * Callees:
 *     <none>
 */

CTelemetryTracking *__fastcall CTelemetryTracking::CTelemetryTracking(CTelemetryTracking *this)
{
  *((_QWORD *)this + 66) = GetTickCount64() + 3600000;
  *((_DWORD *)this + 128) = 0;
  *((_QWORD *)this + 65) = this;
  *((_DWORD *)this + 129) = 2048;
  if ( ((CTelemetryTracking *)((char *)this + 512) >= this ? 0x40 : 0) != 0 )
    memset64(this, ((unsigned __int64)this + 512) | 1, (CTelemetryTracking *)((char *)this + 512) >= this ? 0x40 : 0);
  return this;
}
