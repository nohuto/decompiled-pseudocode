/*
 * XREFs of RtlpLogHeapCommit @ 0x140244798
 * Callers:
 *     RtlpExtendHeap @ 0x14000E7E4 (RtlpExtendHeap.c)
 *     RtlpAllocateHeap @ 0x14000F830 (RtlpAllocateHeap.c)
 *     RtlpFindAndCommitPages @ 0x1400105BC (RtlpFindAndCommitPages.c)
 *     RtlpInitializeHeapSegment @ 0x1401354FC (RtlpInitializeHeapSegment.c)
 *     RtlCreateHeap @ 0x1405735D0 (RtlCreateHeap.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void *__fastcall RtlpLogHeapCommit(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _QWORD v5[4]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD *v6; // [rsp+50h] [rbp-20h] BYREF
  int v7; // [rsp+58h] [rbp-18h]
  int v8; // [rsp+5Ch] [rbp-14h]

  v8 = 0;
  v5[3] = a4;
  v5[0] = a1;
  v5[1] = a2;
  v5[2] = a3;
  v6 = v5;
  v7 = 32;
  return EtwTraceKernelEvent((int)&v6, 1, 0x40000020u, 4147, 272636162);
}
