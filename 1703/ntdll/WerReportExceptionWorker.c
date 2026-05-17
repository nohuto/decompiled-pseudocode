/*
 * XREFs of WerReportExceptionWorker @ 0x1800DE1D0
 * Callers:
 *     <none>
 * Callees:
 *     ZwSetInformationThread @ 0x1800A54A0 (ZwSetInformationThread.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 *     ZwResumeThread @ 0x1800A5D40 (ZwResumeThread.c)
 *     ZwTerminateThread @ 0x1800A5D60 (ZwTerminateThread.c)
 *     RtlReportExceptionEx @ 0x1800DD4D0 (RtlReportExceptionEx.c)
 */

__int64 __fastcall WerReportExceptionWorker(__int64 a1)
{
  unsigned int v1; // ebx

  RtlReportExceptionEx(a1 + 16, 2LL, *(_DWORD *)(a1 + 8) & 0x1F, -1LL, *(_QWORD *)a1);
  ZwFreeVirtualMemory();
  ZwSetInformationThread();
  ZwResumeThread();
  v1 = ZwClose();
  ZwTerminateThread();
  return v1;
}
