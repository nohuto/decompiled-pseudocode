/*
 * XREFs of WerReportExceptionWorker @ 0x1800D79B0
 * Callers:
 *     <none>
 * Callees:
 *     ZwSetInformationThread @ 0x18009AC60 (ZwSetInformationThread.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwFreeVirtualMemory @ 0x18009AE80 (ZwFreeVirtualMemory.c)
 *     ZwResumeThread @ 0x18009B500 (ZwResumeThread.c)
 *     ZwTerminateThread @ 0x18009B520 (ZwTerminateThread.c)
 *     RtlReportExceptionEx @ 0x1800D69F0 (RtlReportExceptionEx.c)
 */

__int64 __fastcall WerReportExceptionWorker(__int64 a1)
{
  void *v1; // rbx
  PVOID BaseAddress; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp+10h] BYREF

  RegionSize = 0LL;
  BaseAddress = (PVOID)a1;
  RtlReportExceptionEx(
    (PEXCEPTION_RECORD)(a1 + 16),
    (PCONTEXT)2,
    *(_DWORD *)(a1 + 8) & 0x1F,
    (PLARGE_INTEGER)0xFFFFFFFFFFFFFFFFLL);
  v1 = *(void **)BaseAddress;
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  ZwSetInformationThread(v1, ThreadDbgkWerReportActive, &unk_180126A40, 4u);
  ZwResumeThread(v1, 0LL);
  LODWORD(v1) = ZwClose(v1);
  ZwTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, 0);
  return (unsigned int)v1;
}
