/*
 * XREFs of RtlpLogHeapDestroyEvent @ 0x14025BDEC
 * Callers:
 *     RtlDestroyHeap @ 0x1405DD020 (RtlDestroyHeap.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall RtlpLogHeapDestroyEvent(__int64 a1)
{
  __int64 v1; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v2; // [rsp+38h] [rbp-20h] BYREF
  int v3; // [rsp+40h] [rbp-18h]
  int v4; // [rsp+44h] [rbp-14h]

  v1 = a1;
  v2 = &v1;
  v4 = 0;
  v3 = 8;
  EtwTraceKernelEvent((__int64)&v2, 1u, 0x40000020u, 0x1023u, 0x10401902u);
}
