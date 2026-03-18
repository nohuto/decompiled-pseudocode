/*
 * XREFs of RtlpLogHeapFreeEvent @ 0x14025BF24
 * Callers:
 *     RtlpFreeHeap @ 0x14010D2BC (RtlpFreeHeap.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall RtlpLogHeapFreeEvent(__int64 a1, __int64 a2, int a3)
{
  _QWORD v3[2]; // [rsp+30h] [rbp-38h] BYREF
  int v4; // [rsp+40h] [rbp-28h]
  _QWORD *v5; // [rsp+48h] [rbp-20h] BYREF
  int v6; // [rsp+50h] [rbp-18h]
  int v7; // [rsp+54h] [rbp-14h]

  v3[0] = a1;
  v5 = v3;
  v7 = 0;
  v3[1] = a2;
  v4 = a3;
  v6 = 20;
  EtwTraceKernelEvent((__int64)&v5, 1u, 0x40000020u, 0x1024u, 0x10401902u);
}
