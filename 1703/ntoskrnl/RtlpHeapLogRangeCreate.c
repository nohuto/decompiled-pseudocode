/*
 * XREFs of RtlpHeapLogRangeCreate @ 0x1402441D4
 * Callers:
 *     RtlCreateHeap @ 0x1405735D0 (RtlCreateHeap.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 */

void *__fastcall RtlpHeapLogRangeCreate(__int64 a1, __int64 a2, int a3)
{
  _QWORD v7[7]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v8; // [rsp+68h] [rbp-20h] BYREF
  int v9; // [rsp+70h] [rbp-18h]
  int v10; // [rsp+74h] [rbp-14h]

  memset(v7, 0, sizeof(v7));
  v10 = 0;
  v8 = v7;
  v7[4] = a1;
  v7[5] = a2;
  LODWORD(v7[6]) = a3;
  v9 = 56;
  return EtwTraceKernelEvent((int)&v8, 1, 0x40000020u, 613, 272636162);
}
