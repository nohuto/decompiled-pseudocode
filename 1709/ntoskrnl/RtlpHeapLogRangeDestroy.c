/*
 * XREFs of RtlpHeapLogRangeDestroy @ 0x14025B678
 * Callers:
 *     RtlDestroyHeap @ 0x1405DD020 (RtlDestroyHeap.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 */

void __fastcall RtlpHeapLogRangeDestroy(__int64 a1)
{
  _QWORD v2[5]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v3; // [rsp+58h] [rbp-20h] BYREF
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  memset(v2, 0, sizeof(v2));
  v5 = 0;
  v3 = v2;
  v2[4] = a1;
  v4 = 40;
  EtwTraceKernelEvent((__int64)&v3, 1u, 0x40000020u, 0x268u, 0x10401902u);
}
