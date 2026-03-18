/*
 * XREFs of ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHost@@@Z @ 0x180125ACC
 * Callers:
 *     ?Create@CPartitionVerticalBlankScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHost@@PEAPEAVICompositorScheduler@@@Z @ 0x180126458 (-Create@CPartitionVerticalBlankScheduler@@SAJPEAVCKernelTransport@@PEAVCConnection@@PEAVCoRender.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x180125CD0 (--0CTelemetryTouchLatencyAnalysis@@QEAA@XZ.c)
 */

CPartitionVerticalBlankScheduler *__fastcall CPartitionVerticalBlankScheduler::CPartitionVerticalBlankScheduler(
        CPartitionVerticalBlankScheduler *this,
        struct CKernelTransport *a2,
        struct CConnection *a3,
        struct CoRenderHost *a4)
{
  __int64 v7; // rcx
  CPartitionVerticalBlankScheduler *result; // rax

  *((_QWORD *)this + 8) = a4;
  *(_QWORD *)this = &CPartitionVerticalBlankScheduler::`vftable';
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 10) = 0x100000000LL;
  *((_QWORD *)this + 12) = 0x100000000LL;
  `vector constructor iterator'(
    (CPartitionVerticalBlankScheduler *)((char *)this + 120),
    1304LL,
    16LL,
    (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))CFrameInfo::CFrameInfo);
  *((_QWORD *)this + 2669) = 0LL;
  *((_QWORD *)this + 2670) = 0LL;
  *((_DWORD *)this + 5342) = 0;
  *((_DWORD *)this + 5343) = 0;
  *((_DWORD *)this + 5344) = 0;
  *((_QWORD *)this + 2739) = GetTickCount64() + 3600000;
  *((_DWORD *)this + 5474) = 0;
  *((_QWORD *)this + 2738) = (char *)this + 21384;
  *((_DWORD *)this + 5475) = 2048;
  if ( ((char *)this + 21896 >= (char *)this + 21384 ? 0x40 : 0) != 0 )
    memset64(
      (char *)this + 21384,
      ((unsigned __int64)this + 21896) | 1,
      (char *)this + 21896 >= (char *)this + 21384 ? 0x40 : 0);
  CTelemetryTouchLatencyAnalysis::CTelemetryTouchLatencyAnalysis((CPartitionVerticalBlankScheduler *)((char *)this + 21928));
  *((_QWORD *)this + 3088) = GetTickCount64() + 3600000;
  *((_DWORD *)this + 6172) = 0;
  *((_QWORD *)this + 3087) = (char *)this + 24176;
  *((_DWORD *)this + 6173) = 2048;
  if ( ((char *)this + 24688 >= (char *)this + 24176 ? 0x40 : 0) != 0 )
    memset64(
      (char *)this + 24176,
      ((unsigned __int64)this + 24688) | 1,
      (char *)this + 24688 >= (char *)this + 24176 ? 0x40 : 0);
  *((_QWORD *)this + 3100) = &CMILRefCountBase::`vftable';
  *((_QWORD *)this + 3100) = &CDebugFrameCounter::`vftable';
  *((_DWORD *)this + 6202) = 0;
  *((_QWORD *)this + 3682) = &CMILRefCountBase::`vftable';
  *((_QWORD *)this + 3682) = &CDisplayDebugFrameCounter::`vftable';
  *((_DWORD *)this + 7366) = 0;
  *((_DWORD *)this + 7241) = -1;
  *((_DWORD *)this + 7240) = -1;
  *((_DWORD *)this + 6205) = -1;
  *((_DWORD *)this + 6204) = -1;
  *((_DWORD *)this + 7239) = 1;
  *((_DWORD *)this + 7238) = 1;
  *((_DWORD *)this + 7374) = GetCurrentThreadId();
  v7 = 1304LL * *((unsigned int *)this + 5246);
  *((_QWORD *)this + 6) = a2;
  *((_QWORD *)this + 2625) = (char *)this + v7 + 120;
  *((_QWORD *)this + 2626) = (char *)this + 19680;
  result = this;
  *((_QWORD *)this + 7) = a3;
  *((_DWORD *)this + 5247) = 15;
  *((_DWORD *)this + 5248) = -1;
  *((_DWORD *)this + 5249) = -1;
  *((_BYTE *)this + 21344) = 1;
  return result;
}
