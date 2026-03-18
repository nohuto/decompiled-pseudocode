/*
 * XREFs of PerfInfoLogVirtualAlloc @ 0x140747C50
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1404965C0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall PerfInfoLogVirtualAlloc(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // eax
  _QWORD v5[2]; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+44h] [rbp-24h]
  _QWORD *v8; // [rsp+48h] [rbp-20h] BYREF
  int v9; // [rsp+50h] [rbp-18h]
  int v10; // [rsp+54h] [rbp-14h]

  v4 = *(_DWORD *)(a3 + 736);
  v5[0] = a1;
  v5[1] = a2;
  v6 = v4;
  v8 = v5;
  v10 = 0;
  v7 = a4;
  v9 = 24;
  EtwTraceKernelEvent((__int64)&v8, 1u, 0x20008000u, 0x262u, 0x501902u);
}
