/*
 * XREFs of RtlpLogHeapCreateEvent @ 0x14025BCE0
 * Callers:
 *     RtlCreateHeap @ 0x1405D3930 (RtlCreateHeap.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall RtlpLogHeapCreateEvent(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // [rsp+30h] [rbp-48h] BYREF
  int v7; // [rsp+38h] [rbp-40h]
  __int64 v8; // [rsp+3Ch] [rbp-3Ch]
  __int64 v9; // [rsp+44h] [rbp-34h]
  __int64 v10; // [rsp+4Ch] [rbp-2Ch]
  __int64 *v11; // [rsp+58h] [rbp-20h] BYREF
  int v12; // [rsp+60h] [rbp-18h]
  int v13; // [rsp+64h] [rbp-14h]

  v4 = *(_QWORD *)(a1 + 544);
  v6 = a1;
  v7 = a2;
  v5 = *(_QWORD *)(a1 + 192);
  v8 = a3;
  v10 = v4 - 16 * v5;
  v9 = a4;
  v11 = &v6;
  v13 = 0;
  v12 = 36;
  EtwTraceKernelEvent((__int64)&v11, 1u, 0x40000020u, 0x1020u, 0x10401903u);
}
