/*
 * XREFs of ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHost@@@Z @ 0x18005E254
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x18005E608 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800CD620 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x1800CE30C (--0CTelemetryTouchLatencyAnalysis@@QEAA@XZ.c)
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
  `vector constructor iterator'(
    (CPartitionVerticalBlankScheduler *)((char *)this + 96),
    0x648uLL,
    0x10uLL,
    (void *(*)(void *))CFrameInfo::CFrameInfo);
  *((_QWORD *)this + 3273) = 0LL;
  *((_QWORD *)this + 3274) = 0LL;
  *((_DWORD *)this + 6550) = 0;
  *((_DWORD *)this + 6551) = 0;
  *((_DWORD *)this + 6552) = 0;
  *((_QWORD *)this + 3343) = GetTickCount64() + 3600000;
  *((_DWORD *)this + 6682) = 0;
  *((_QWORD *)this + 3342) = (char *)this + 26216;
  *((_DWORD *)this + 6683) = 2048;
  if ( ((char *)this + 26728 >= (char *)this + 26216 ? 0x40 : 0) != 0 )
    memset64(
      (char *)this + 26216,
      ((unsigned __int64)this + 26728) | 1,
      (char *)this + 26728 >= (char *)this + 26216 ? 0x40 : 0);
  CTelemetryTouchLatencyAnalysis::CTelemetryTouchLatencyAnalysis((CPartitionVerticalBlankScheduler *)((char *)this + 26760));
  *((_QWORD *)this + 3810) = GetTickCount64() + 3600000;
  *((_DWORD *)this + 7616) = 0;
  *((_QWORD *)this + 3809) = (char *)this + 29952;
  *((_DWORD *)this + 7617) = 2048;
  if ( ((char *)this + 30464 >= (char *)this + 29952 ? 0x40 : 0) != 0 )
    memset64(
      (char *)this + 29952,
      ((unsigned __int64)this + 30464) | 1,
      (char *)this + 30464 >= (char *)this + 29952 ? 0x40 : 0);
  *((_QWORD *)this + 3822) = &CMILRefCountBase::`vftable';
  *((_QWORD *)this + 3822) = &CDebugFrameCounter::`vftable';
  *((_DWORD *)this + 7646) = 0;
  *((_QWORD *)this + 4404) = &CMILRefCountBase::`vftable';
  *((_QWORD *)this + 4404) = &CDisplayDebugFrameCounter::`vftable';
  *((_DWORD *)this + 8810) = 0;
  *((_DWORD *)this + 8685) = -1;
  *((_DWORD *)this + 8684) = -1;
  *((_DWORD *)this + 7649) = -1;
  *((_DWORD *)this + 7648) = -1;
  *((_DWORD *)this + 8683) = 1;
  *((_DWORD *)this + 8682) = 1;
  *((_DWORD *)this + 8818) = GetCurrentThreadId();
  v7 = 1608LL * *((unsigned int *)this + 6456);
  *((_QWORD *)this + 6) = a2;
  *((_QWORD *)this + 3230) = (char *)this + v7 + 96;
  *((_QWORD *)this + 3231) = (char *)this + 24216;
  result = this;
  *((_QWORD *)this + 7) = a3;
  *((_DWORD *)this + 6457) = 15;
  *((_DWORD *)this + 6458) = -1;
  *((_DWORD *)this + 6459) = -1;
  *((_BYTE *)this + 26183) = 1;
  return result;
}
