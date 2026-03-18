/*
 * XREFs of PerfInfoLogVirtualAlloc @ 0x14070C5E0
 * Callers:
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void *__fastcall PerfInfoLogVirtualAlloc(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // eax
  _QWORD v6[2]; // [rsp+30h] [rbp-38h] BYREF
  int v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+44h] [rbp-24h]
  _QWORD *v9; // [rsp+48h] [rbp-20h] BYREF
  int v10; // [rsp+50h] [rbp-18h]
  int v11; // [rsp+54h] [rbp-14h]

  v4 = *(_DWORD *)(a3 + 736);
  v6[0] = a1;
  v6[1] = a2;
  v7 = v4;
  v9 = v6;
  v11 = 0;
  v8 = a4;
  v10 = 24;
  return EtwTraceKernelEvent((int)&v9, 1, 0x20008000u, 610, 5249282);
}
