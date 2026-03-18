/*
 * XREFs of RtlpLogHeapDecommit @ 0x14025BD70
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x14010CD3C (RtlpDeCommitFreeBlock.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall RtlpLogHeapDecommit(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _QWORD v4[4]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD *v5; // [rsp+50h] [rbp-20h] BYREF
  int v6; // [rsp+58h] [rbp-18h]
  int v7; // [rsp+5Ch] [rbp-14h]

  v7 = 0;
  v4[3] = a4;
  v4[0] = a1;
  v4[1] = a2;
  v4[2] = a3;
  v5 = v4;
  v6 = 32;
  EtwTraceKernelEvent((__int64)&v5, 1u, 0x40000020u, 0x1034u, 0x10401902u);
}
