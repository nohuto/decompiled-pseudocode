/*
 * XREFs of ??0CEnergyReporter@@QEAA@XZ @ 0x1800CA4C0
 * Callers:
 *     ??0CComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@@Z @ 0x180064E04 (--0CComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebu.c)
 *     CreateNullProcessAttribution @ 0x1800CA3F0 (CreateNullProcessAttribution.c)
 * Callees:
 *     <none>
 */

CEnergyReporter *__fastcall CEnergyReporter::CEnergyReporter(CEnergyReporter *this)
{
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *(_QWORD *)this = GetTickCount64();
  return this;
}
