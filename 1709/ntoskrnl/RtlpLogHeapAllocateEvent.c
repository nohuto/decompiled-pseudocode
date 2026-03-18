/*
 * XREFs of RtlpLogHeapAllocateEvent @ 0x14025BB18
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x14010DBDC (RtlpAllocateHeapInternal.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall RtlpLogHeapAllocateEvent(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD v4[3]; // [rsp+30h] [rbp-48h] BYREF
  int v5; // [rsp+48h] [rbp-30h]
  _QWORD *v6; // [rsp+50h] [rbp-28h] BYREF
  int v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+5Ch] [rbp-1Ch]

  v4[0] = a1;
  v6 = v4;
  v8 = 0;
  v4[1] = a3;
  v4[2] = a2;
  v5 = a4;
  v7 = 28;
  EtwTraceKernelEvent((__int64)&v6, 1u, 0x40000020u, 0x1021u, 0x10401902u);
}
