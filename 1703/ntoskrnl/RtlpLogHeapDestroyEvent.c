/*
 * XREFs of RtlpLogHeapDestroyEvent @ 0x1402449F4
 * Callers:
 *     RtlDestroyHeap @ 0x140579570 (RtlDestroyHeap.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void *__fastcall RtlpLogHeapDestroyEvent(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v3; // [rsp+38h] [rbp-20h] BYREF
  int v4; // [rsp+40h] [rbp-18h]
  int v5; // [rsp+44h] [rbp-14h]

  v2 = a1;
  v3 = &v2;
  v5 = 0;
  v4 = 8;
  return EtwTraceKernelEvent((int)&v3, 1, 0x40000020u, 4131, 272636162);
}
