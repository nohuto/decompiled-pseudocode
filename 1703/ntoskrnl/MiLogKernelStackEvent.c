/*
 * XREFs of MiLogKernelStackEvent @ 0x14021BA2C
 * Callers:
 *     MiInPageSingleKernelStack @ 0x140011AE8 (MiInPageSingleKernelStack.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x14010F680 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     MmCreateKernelStack @ 0x14010FBC0 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x140110020 (MmDeleteKernelStack.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void *__fastcall MiLogKernelStackEvent(__int64 a1, unsigned int a2, int a3)
{
  _QWORD v4[3]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v5[2]; // [rsp+48h] [rbp-20h] BYREF

  v4[2] = a2;
  v4[1] = a1;
  v5[0] = v4;
  v4[0] = 11LL;
  v5[1] = 24LL;
  return EtwTraceKernelEvent((int)v5, 1, 0x20000001u, (a3 != 1) + 632, 289413890);
}
