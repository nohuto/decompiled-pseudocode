/*
 * XREFs of ??0CAnimationTracking@@QEAA@XZ @ 0x1800BA6FC
 * Callers:
 *     ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHost@@@Z @ 0x180069120 (--0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHos.c)
 *     ??0CIndependentRefreshRateScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHost@@@Z @ 0x18013C104 (--0CIndependentRefreshRateScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHos.c)
 * Callees:
 *     <none>
 */

CAnimationTracking *__fastcall CAnimationTracking::CAnimationTracking(CAnimationTracking *this)
{
  char *v2; // rdi

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  v2 = (char *)this + 32;
  *((_QWORD *)this + 70) = GetTickCount64() + 3600000;
  *((_DWORD *)this + 136) = 0;
  *((_QWORD *)this + 69) = (char *)this + 32;
  *((_DWORD *)this + 137) = 2048;
  if ( ((char *)this + 544 >= (char *)this + 32 ? 0x40 : 0) != 0 )
    memset64(v2, ((unsigned __int64)this + 544) | 1, (char *)this + 544 >= (char *)this + 32 ? 0x40 : 0);
  return this;
}
