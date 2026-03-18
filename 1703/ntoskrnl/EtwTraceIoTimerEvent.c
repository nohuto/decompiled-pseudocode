/*
 * XREFs of EtwTraceIoTimerEvent @ 0x140253748
 * Callers:
 *     IopDisableTimer @ 0x1401EF740 (IopDisableTimer.c)
 *     IopEnableTimer @ 0x1401EF95C (IopEnableTimer.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void *__fastcall EtwTraceIoTimerEvent(__int16 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]

  v4[1] = a3;
  v5 = v4;
  v7 = 0;
  v4[0] = a2;
  v6 = 16;
  return EtwTraceKernelEvent((int)&v5, 1, 0x40800000u, a1, 5249026);
}
