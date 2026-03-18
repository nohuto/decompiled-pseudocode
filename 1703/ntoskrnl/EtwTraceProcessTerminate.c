/*
 * XREFs of EtwTraceProcessTerminate @ 0x140120B78
 * Callers:
 *     PspTerminateProcess @ 0x14054EBC8 (PspTerminateProcess.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void *__fastcall EtwTraceProcessTerminate(__int64 a1)
{
  int v1; // eax
  int v3; // [rsp+30h] [rbp-38h] BYREF
  int *v4; // [rsp+38h] [rbp-30h] BYREF
  int v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+44h] [rbp-24h]

  v1 = *(_DWORD *)(a1 + 736);
  v6 = 0;
  v3 = v1;
  v5 = 4;
  v4 = &v3;
  return EtwTraceKernelEvent((int)&v4, 1, 1u, 779, 5249282);
}
