/*
 * XREFs of RtlpHeapLogRangeReserve @ 0x14025B7A4
 * Callers:
 *     RtlpExtendHeap @ 0x14010CCA8 (RtlpExtendHeap.c)
 *     RtlpAllocateHeap @ 0x14010DCD4 (RtlpAllocateHeap.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 */

void __fastcall RtlpHeapLogRangeReserve(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v6[7]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v7; // [rsp+68h] [rbp-20h] BYREF
  int v8; // [rsp+70h] [rbp-18h]
  int v9; // [rsp+74h] [rbp-14h]

  memset(v6, 0, sizeof(v6));
  v9 = 0;
  v7 = v6;
  v6[4] = a1;
  v6[5] = a2;
  v6[6] = a3;
  v8 = 56;
  EtwTraceKernelEvent((__int64)&v7, 1u, 0x40000020u, 0x266u, 0x10401902u);
}
